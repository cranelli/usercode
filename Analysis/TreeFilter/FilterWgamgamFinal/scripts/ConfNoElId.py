from core import Filter

def get_remove_filter() :
    """ Define list of regex strings to filter input branches to remove from the output.
        Defining a non-empty list does not apply the filter, 
        you must also supply --enableRemoveFilter on the command line.
        If both filters are used, all branches in keep_filter are used
        except for those in remove_filter """

    return ['']

def get_keep_filter() :
    """ Define list of regex strings to filter input branches to retain in the output.  
        Defining a non-empty list does not apply the filter, 
        you must also supply --enableKeepFilter on the command line
        If both filters are used, all branches in keep_filter are used
        except for those in remove_filter """

    return ['el_n', 'mu_n', 'ph_n', 'jet_n', 'el_pt', 'el_eta', 'el_phi', 'el_e', 'mu_pt', 'mu_eta', 'mu_phi', 'mu_e', 'ph_pt', 'ph_eta', 'ph_phi', 'ph_e','pfMET.*', 'recoPfMET.*', 'pfType01MET.*','nPU', 'puTrue', 'nVtx', 'nVtxBS', 'PUWeight.*']

def config_analysis( alg_list, args ) :
    """ Configure analysis modules. Order is preserved """

    # lepton and photon filters must be run 
    # before the jet filter
    alg_list.append( get_muon_filter( ptcut=10 ) )
    alg_list.append( get_electron_filter( ptcut=10 ) )
    #alg_list.append( get_electron_filter( 'mvaNonTrig', ptcut=10 ) )
    #alg_list.append( get_electron_filter( 'tightTrig' ) )
    #alg_list.append( get_electron_filter( None ) )
    #alg_list.append( get_photon_filter( 'looseNoSIEIE', ptcut=15 ) )
    #alg_list.append( get_photon_filter( id='medium', eVeto=None, ptcut=15, sort_by_id=True ) )
    #alg_list.append( get_photon_filter( id=None, eVeto='hasPixSeed', ptcut=15 ) )
    #alg_list.append( get_photon_filter( id='medium', eVeto='hasPixSeed', ptcut=15, sort_by_id=True) )
    #alg_list.append( get_photon_filter( id=None, eVeto=None, ptcut=15, sort_by_id=True, doElOlapRm=True ) )
    alg_list.append( get_photon_filter( id=None, eVeto=None, ptcut=15, sort_by_id=True, doElOlapRm=False, doTrigElOlapRm=True ) )
    alg_list.append( get_jet_filter(do_hists=False) )
    #print 'SAVING Medium PHOTONS, WITH ELE OLAP'
    print 'SAVING NOID PHOTONS, WITH ELE OLAP'
    print 'SAVING MVA ELECTRONS'

    
    alg_list.append( Filter( 'CalcEventVars' ) )
    alg_list.append( Filter( 'BuildTruth' ) )

    isData = args.pop('isData', 'False')

    filter_event = Filter('FilterEvent')
    for cut, val in args.iteritems() :
        setattr(filter_event, cut, val)

    alg_list.append( filter_event )

    filter_blind = Filter( 'FilterBlind' )
    filter_blind.cut_ph_pt_lead = ' < 40 '
    #filter_blind.cut_nPhPassMedium = ' < 2 '
    #filter_blind.cut_m_lepphph= ' > 86.2 & < 96.2  '
    #filter_blind.cut_m_lepph1= ' > 86.2 & < 96.2  '
    #filter_blind.cut_m_lepph2= ' > 86.2 & < 96.2  '
    filter_blind.add_var( 'isData', isData )
    #alg_list.append(filter_blind)




def get_jet_filter( do_hists = False ) :

    filt = Filter ( 'FilterJet' ) 


    # redo overlap rm with photons and muons
    filt.cut_jet_ele_dr = ' > 0.4 '
    filt.cut_jet_ph_dr = ' > 0.4 '
    filt.cut_jet_mu_dr = ' > 0.4 '

    filt.do_cutflow = False

    if do_hists :
        filt.add_hist('cut_jet_ele_dr', 50, 0, 5)
        filt.add_hist('cut_jet_ph_dr', 50, 0, 5)
        filt.add_hist('cut_jet_mu_dr', 50, 0, 5)

    return filt

def get_electron_filter ( ptcut=10 ) :

    filt = Filter( 'FilterElectron' )

    #filt.add_var( 'PtScaleDownBarrel', '0.994' )
    #filt.add_var( 'PtScaleDownEndcap', '0.986' )
    #filt.add_var( 'PtScaleUpBarrel', '1.006' )
    #filt.add_var( 'PtScaleUpEndcap', '1.014' )

    filt.cut_el_pt = ' > %d'  %ptcut
    #--------------------------------
    # remove electrons near a muon
    # NOTE -- the muon filter should be
    # run before the electron fitler
    # for the cut to work properly
    #--------------------------------
    filt.cut_mu_el_dr = ' > 0.4 '

    #setattr( filt, 'cut_el_%s' %id, 'True' )

    return filt

def get_photon_filter ( id=None, eVeto=None, ptcut=10, sort_by_id='false', doElOlapRm=True, doTrigElOlapRm=True ) :

    if sort_by_id == True :
        sort_by_id = 'true'
    if sort_by_id == False :
        sort_by_id = 'false'

    filt = Filter( 'FilterPhoton' )
    filt.cut_ph_pt = ' > %d ' %ptcut

    # reimplement eta cut here to be sure its correct
    # not needed after new Reco samples are made (2014-12-05)
    #filt.cut_ph_abseta       = ' < 2.5'
    #filt.cut_ph_abseta_crack = ' > 1.44 & < 1.57 '
    #filt.invert('cut_ph_abseta_crack')

    filt.cut_mu_ph_dr = ' > 0.4 '
    filt.cut_ph_ph_dr = ' > 0.4 '
    if doElOlapRm :
        filt.cut_el_ph_dr = ' > 0.4 '
    if doTrigElOlapRm :
        filt.cut_trigel_ph_dr = ' > 0.4 '

    #filt.add_var( 'PtScaleDownBarrel', '0.994' )
    #filt.add_var( 'PtScaleDownEndcap', '0.986' )
    #filt.add_var( 'PtScaleUpBarrel', '1.006' )
    #filt.add_var( 'PtScaleUpEndcap', '1.014' )

    if id is not None :
        setattr( filt, 'cut_ph_%s' %id, 'True' )
    if eVeto is not None :
        setattr( filt, 'cut_ph_%s' %eVeto, ' False ' )

    filt.sort_by_id = sort_by_id

    return filt


def get_muon_filter( ptcut=10 ) :

    filt = Filter( 'FilterMuon' )

    #filt.add_var( 'PtScaleDownBarrel', '0.94' )
    #filt.add_var( 'PtScaleDownEndcap', '0.985' )
    #filt.add_var( 'PtScaleUpBarrel', '1.06' )
    #filt.add_var( 'PtScaleUpEndcap', '1.015' )

    filt.cut_mu_passTight = ' == True '
    filt.cut_mu_pt = ' > %d' %ptcut
    filt.cut_mu_eta = ' < 2.1 '
    #filt.cut_mu_corriso = ' < 0.2  '

    
    return filt
