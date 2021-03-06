import os

base_alberto = '/eos/cms/store/user/abelloni/Wgamgam/FilteredSamplesMar14'
base_josh = '/eos/cms/store/user/jkunkle/Wgamgam/FilteredSamplesMar14'
#base_data = '/eos/cms/store/group/phys_smp/ggNtuples/data'
base_mc2 = '/eos/cms/store/group/phys_smp/ggNtuples/mc'
base_mc = '/eos/cms/store/group/phys_egamma/cmkuo'

from argparse import ArgumentParser

p = ArgumentParser()
p.add_argument( '--noRun', dest='noRun', default=False, action='store_true', help='Do not run commands' )

options = p.parse_args()

jobs = [

    #(base_alberto, 'job_electron_2012a_Jan22rereco'),
    #(base_alberto, 'job_electron_2012b_Jan22rereco'),
    #(base_alberto, 'job_electron_2012c_Jan2012rereco'),
    #(base_alberto, 'job_electron_2012d_Jan22rereco'),
    #(base_josh, 'job_muon_2012a_Jan22rereco'),
    #(base_josh, 'job_muon_2012b_Jan22rereco'),
    #(base_josh, 'job_muon_2012c_Jan22rereco'),
    #(base_josh, 'job_muon_2012d_Jan22rereco'),

    #(base_alberto, 'job_2photon_2012d_Jan22rereco_1of4'),
    #(base_alberto, 'job_2photon_2012d_Jan22rereco_2of4'),
    #(base_alberto, 'job_2photon_2012d_Jan22rereco_3of4'),
    #(base_alberto, 'job_2photon_2012d_Jan22rereco_4of4'),
    #(base_alberto, 'job_2photon_2012d_Jan22rereco_5of5'),
    #(base_alberto, 'job_fall13_photonRunB2012_1'),
    #(base_alberto, 'job_fall13_photonRunB2012_10'),
    #(base_alberto, 'job_fall13_photonRunB2012_11'),
    #(base_alberto, 'job_fall13_photonRunB2012_12'),
    #(base_alberto, 'job_fall13_photonRunB2012_13'),
    #(base_alberto, 'job_fall13_photonRunB2012_14'),
    #(base_alberto, 'job_fall13_photonRunB2012_15'),
    #(base_alberto, 'job_fall13_photonRunB2012_16'),
    #(base_alberto, 'job_fall13_photonRunB2012_17'),
    #(base_alberto, 'job_fall13_photonRunB2012_2'),
    #(base_alberto, 'job_fall13_photonRunB2012_3'),
    #(base_alberto, 'job_fall13_photonRunB2012_4'),
    #(base_alberto, 'job_fall13_photonRunB2012_5'),
    #(base_alberto, 'job_fall13_photonRunB2012_6'),
    #(base_alberto, 'job_fall13_photonRunB2012_7'),
    #(base_alberto, 'job_fall13_photonRunB2012_8'),
    #(base_alberto, 'job_fall13_photonRunB2012_9'),
    #(base_alberto, 'job_photon_2012a_Jan22rereco'),

    (base_josh, 'job_summer12_DYJetsToLL'),
    (base_josh, 'job_summer12_WAA_ISR'),
    (base_josh, 'job_summer12_Wgg_FSR'),
    (base_josh, 'job_summer12_WH_ZH_125'),
    (base_josh, 'job_summer12_WWW'),
    (base_josh, 'job_summer12_WWZ'),
    (base_josh, 'job_summer12_WW_2l2nu'),
    (base_josh, 'job_summer12_WWg'),
    (base_josh, 'job_summer12_WZZ'),
    (base_josh, 'job_summer12_WZ_2l2q'),
    (base_josh, 'job_summer12_WZ_3lnu'),
    (base_josh, 'job_summer12_Wg'),
    (base_josh, 'job_summer12_Wjets'),
    (base_josh, 'job_summer12_ZZZ'),
    (base_josh, 'job_summer12_ZZ_2e2mu'),
    (base_josh, 'job_summer12_ZZ_2e2tau'),
    (base_josh, 'job_summer12_ZZ_2l2nu'),
    (base_josh, 'job_summer12_ZZ_2l2q'),
    (base_josh, 'job_summer12_ZZ_2mu2tau'),
    (base_josh, 'job_summer12_ZZ_2q2nu'),
    (base_josh, 'job_summer12_ZZ_4e'),
    (base_josh, 'job_summer12_ZZ_4mu'),
    (base_josh, 'job_summer12_ZZ_4tau'),
    (base_josh, 'job_summer12_Zg'),
    (base_josh, 'job_summer12_diphoton_box_10to25'),
    (base_josh, 'job_summer12_diphoton_box_250toInf'),
    (base_josh, 'job_summer12_diphoton_box_25to250'),
    (base_josh, 'job_summer12_ggH_125'),
    (base_josh, 'job_summer12_ggZZ_2l2l'),
    (base_josh, 'job_summer12_ggZZ_4l'),
    (base_josh, 'job_summer12_t_s'),
    (base_josh, 'job_summer12_t_t'),
    (base_josh, 'job_summer12_t_tW'),
    (base_josh, 'job_summer12_tbar_s'),
    (base_josh, 'job_summer12_tbar_t'),
    (base_josh, 'job_summer12_tbar_tW'),
    (base_josh, 'job_summer12_ttW'),
    (base_josh, 'job_summer12_ttZ'),
    (base_josh, 'job_summer12_ttg'),
    (base_josh, 'job_summer12_ttjets_1l'),
    (base_josh, 'job_summer12_ttjets_2l'),

]

command_base = 'python scripts/filter.py  --filesDir root://eoscms/%(base)s/%(job)s/  --outputDir /tmp/jkunkle/%(output)s/%(job)s --outputFile tree.root --treeName ggNtuplizer/EventTree --module scripts/ConfWgamgamReco.py --enableKeepFilter --nFilesPerJob %(nfiles)d --storagePath /eos/cms/store/user/jkunkle/Wgamgam/%(output)s/%(job)s --nproc %(nproc)d --confFileName %(job)s.txt --exeName %(exe)s  --moduleArgs "{ \'sampleFile\' : \'root://eoscms/%(base)s/%(job)s/histograms.root\'}" %(addtl)s ; python ../../Util/scripts/clean_conf_files.py --path /eos/cms/store/user/jkunkle/Wgamgam/%(output)s/%(job)s'

#command_base = 'python scripts/filter.py  --files root://eoscms/%(base)s/%(job)s.root --fileKey tree.root --outputDir /tmp/jkunkle/%(output)s/%(job)s --outputFile tree.root --treeName ggNtuplizer/EventTree --module scripts/ConfWgamgamReco.py --enableKeepFilter --nFilesPerJob %(nfiles)d --storagePath /eos/cms/store/user/jkunkle/Wgamgam/%(output)s/%(job)s --nproc %(nproc)d --confFileName %(job)s.txt --moduleArgs "{ \'sampleFile\' : \'root://eoscms/%(base)s/%(job)s.root\'}" %(addtl)s ; python ../../Util/scripts/clean_conf_files.py --path /eos/cms/store/user/jkunkle/Wgamgam/%(output)s/%(job)s '

#command_base = 'python scripts/filter.py  --files root://eoscms/%(base)s/%(job)s.root --fileKey tree.root --outputDir /tmp/jkunkle/%(output)s/%(job)s --outputFile tree.root --treeName ggNtuplizer/EventTree --module scripts/ConfWgamgamReco.py --enableKeepFilter --nFilesPerJob %(nfiles)d --nproc %(nproc)s --confFileName %(job)s.txt --nsplit %(nsplit)d '

#command_base = 'python scripts/filter.py  --filesDir root://eoscms/%(base)s/%(job)s --fileKey tree.root --outputDir /tmp/jkunkle/%(output)s/%(job)s --outputFile tree.root --treeName ggNtuplizer/EventTree --module scripts/ConfWgamgamReco.py --enableKeepFilter --nFilesPerJob 1 --nproc %(nproc)s --confFileName %(job)s.txt '

output = 'RecoOutputNoPhotEleVeto_2014_03_24'
nFilesPerJob = 2
nProc = 8
exe='RunAnalysis'

addtl = ''
for base, job in jobs :
    command = command_base %{ 'base' : base, 'job' : job, 'nfiles' : nFilesPerJob, 'output' : output, 'nproc' : nProc, 'exe' : exe, 'addtl' : addtl }
    print command
    if not options.noRun :
        os.system(command)


