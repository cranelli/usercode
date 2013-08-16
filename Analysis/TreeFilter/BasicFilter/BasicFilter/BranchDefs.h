#ifndef BRANCHDEFS_H
#define BRANCHDEFS_H
#include "TTree.h"
#include <vector>
//Define variables as extern below and declare them in the .cxx file to avoid multiple definitions
namespace IN {
 extern Int_t				nHLT;
 extern Int_t				nVtx;
 extern Int_t				nVtxBS;
 extern Int_t				nMC;
 extern Int_t				nPUInfo;
 extern Int_t				nEle;
 extern Int_t				nPho;
 extern Int_t				nMu;
 extern Int_t				nPFPho;
 extern Int_t				nJet;
 extern Int_t				nConv;
 extern Int_t				nLowPtJet;
 extern Int_t				run;
 extern Long64_t				event;
 extern Int_t				lumis;
 extern Bool_t				isData;
 extern Int_t				HLT[444];
 extern Int_t				HLTIndex[70];
 extern Float_t				bspotPos[3];
 extern Float_t				vtx[50][3];
 extern Int_t				IsVtxGood;
 extern Int_t				nGoodVtx;
 extern Float_t				vtxbs[50][3];
 extern Float_t				pdf[7];
 extern Float_t				pthat;
 extern Float_t				processID;
 extern Int_t				mcPID[45];
 extern Float_t				mcVtx[45][3];
 extern Float_t				mcPt[45];
 extern Float_t				mcMass[45];
 extern Float_t				mcEta[45];
 extern Float_t				mcPhi[45];
 extern Float_t				mcE[45];
 extern Float_t				mcEt[45];
 extern Int_t				mcGMomPID[45];
 extern Int_t				mcMomPID[45];
 extern Float_t				mcMomPt[45];
 extern Float_t				mcMomMass[45];
 extern Float_t				mcMomEta[45];
 extern Float_t				mcMomPhi[45];
 extern Int_t				mcIndex[45];
 extern Int_t				mcDecayType[45];
 extern Int_t				mcParentage[45];
 extern Int_t				mcStatus[45];
 extern Float_t				genMET;
 extern Float_t				genMETPhi;
 extern Int_t				nPU[4];
 extern Int_t				puBX[4];
 extern Float_t				puTrue[4];
 extern Float_t				pfMET;
 extern Float_t				pfMETPhi;
 extern Float_t				pfMETsumEt;
 extern Float_t				pfMETmEtSig;
 extern Float_t				pfMETSig;
 extern Float_t				recoPfMET;
 extern Float_t				recoPfMETPhi;
 extern Float_t				recoPfMETsumEt;
 extern Float_t				recoPfMETmEtSig;
 extern Float_t				recoPfMETSig;
 extern Float_t				trkMETxPV;
 extern Float_t				trkMETyPV;
 extern Float_t				trkMETPhiPV;
 extern Float_t				trkMETPV;
 extern Float_t				trkMETx[50];
 extern Float_t				trkMETy[50];
 extern Float_t				trkMETPhi[50];
 extern Float_t				trkMET[50];
 extern Int_t				metFilters[10];
 extern Int_t				eleTrg[8][16];
 extern Int_t				eleClass[8];
 extern Int_t				eleIsEcalDriven[8];
 extern Int_t				eleCharge[8];
 extern Float_t				eleEn[8];
 extern Float_t				eleEcalEn[8];
 extern Float_t				eleSCRawEn[8];
 extern Float_t				eleSCEn[8];
 extern Float_t				eleESEn[8];
 extern Float_t				elePt[8];
 extern Float_t				eleEta[8];
 extern Float_t				elePhi[8];
 extern Float_t				eleEtaVtx[8][100];
 extern Float_t				elePhiVtx[8][100];
 extern Float_t				eleEtVtx[8][100];
 extern Float_t				eleSCEta[8];
 extern Float_t				eleSCPhi[8];
 extern Float_t				eleSCEtaWidth[8];
 extern Float_t				eleSCPhiWidth[8];
 extern Float_t				eleVtx[8][3];
 extern Float_t				eleD0[8];
 extern Float_t				eleDz[8];
 extern Float_t				eleD0GV[8];
 extern Float_t				eleDzGV[8];
 extern Float_t				eleD0Vtx[8][100];
 extern Float_t				eleDzVtx[8][100];
 extern Float_t				eleHoverE[8];
 extern Float_t				eleHoverE12[8];
 extern Float_t				eleEoverP[8];
 extern Float_t				elePin[8];
 extern Float_t				elePout[8];
 extern Float_t				eleTrkMomErr[8];
 extern Float_t				eleBrem[8];
 extern Float_t				eledEtaAtVtx[8];
 extern Float_t				eledPhiAtVtx[8];
 extern Float_t				eleSigmaIEtaIEta[8];
 extern Float_t				eleSigmaIEtaIPhi[8];
 extern Float_t				eleSigmaIPhiIPhi[8];
 extern Float_t				eleEmax[8];
 extern Float_t				eleE1x5[8];
 extern Float_t				eleE3x3[8];
 extern Float_t				eleE5x5[8];
 extern Float_t				eleE2x5Max[8];
 extern Float_t				eleRegrE[8];
 extern Float_t				eleRegrEerr[8];
 extern Float_t				elePhoRegrE[8];
 extern Float_t				elePhoRegrEerr[8];
 extern Float_t				eleSeedTime[8];
 extern Int_t				eleRecoFlag[8];
 extern Int_t				elePos[8];
 extern Int_t				eleGenIndex[8];
 extern Int_t				eleGenGMomPID[8];
 extern Int_t				eleGenMomPID[8];
 extern Float_t				eleGenMomPt[8];
 extern Float_t				eleIsoTrkDR03[8];
 extern Float_t				eleIsoEcalDR03[8];
 extern Float_t				eleIsoHcalDR03[8];
 extern Float_t				eleIsoHcalDR0312[8];
 extern Float_t				eleIsoTrkDR04[8];
 extern Float_t				eleIsoEcalDR04[8];
 extern Float_t				eleIsoHcalDR04[8];
 extern Float_t				eleIsoHcalDR0412[8];
 extern Float_t				eleModIsoTrk[8];
 extern Float_t				eleModIsoEcal[8];
 extern Float_t				eleModIsoHcal[8];
 extern Int_t				eleMissHits[8];
 extern Float_t				eleConvDist[8];
 extern Float_t				eleConvDcot[8];
 extern Int_t				eleConvVtxFit[8];
 extern Float_t				eleIP3D[8];
 extern Float_t				eleIP3DErr[8];
 extern Float_t				eleIDMVANonTrig[8];
 extern Float_t				eleIDMVATrig[8];
 extern Float_t				eleIDMVATrigIDIso[8];
 extern Float_t				elePFChIso03[8];
 extern Float_t				elePFPhoIso03[8];
 extern Float_t				elePFNeuIso03[8];
 extern Float_t				elePFChIso04[8];
 extern Float_t				elePFPhoIso04[8];
 extern Float_t				elePFNeuIso04[8];
 extern Float_t				eleESEffSigmaRR[8][3];
 extern Int_t				phoTrg[10][8];
 extern Int_t				phoTrgFilter[10][50];
 extern Bool_t				phoIsPhoton[10];
 extern Float_t				phoSCPos[10][3];
 extern Float_t				phoCaloPos[10][3];
 extern Float_t				phoE[10];
 extern Float_t				phoEt[10];
 extern Float_t				phoEta[10];
 extern Float_t				phoVtx[10][3];
 extern Float_t				phoPhi[10];
 extern Float_t				phoEtVtx[10][100];
 extern Float_t				phoEtaVtx[10][100];
 extern Float_t				phoPhiVtx[10][100];
 extern Float_t				phoR9[10];
 extern Float_t				phoTrkIsoHollowDR03[10];
 extern Float_t				phoEcalIsoDR03[10];
 extern Float_t				phoHcalIsoDR03[10];
 extern Float_t				phoHcalIsoDR0312[10];
 extern Float_t				phoTrkIsoHollowDR04[10];
 extern Float_t				phoCiCTrkIsoDR03[10][100];
 extern Float_t				phoCiCTrkIsoDR04[10][100];
 extern Float_t				phoCiCdRtoTrk[10];
 extern Float_t				phoEcalIsoDR04[10];
 extern Float_t				phoHcalIsoDR04[10];
 extern Float_t				phoHcalIsoDR0412[10];
 extern Float_t				phoHoverE[10];
 extern Float_t				phoHoverE12[10];
 extern Int_t				phoEleVeto[10];
 extern Float_t				phoSigmaIEtaIEta[10];
 extern Float_t				phoSigmaIEtaIPhi[10];
 extern Float_t				phoSigmaIPhiIPhi[10];
 extern Float_t				phoCiCPF4phopfIso03[10];
 extern Float_t				phoCiCPF4phopfIso04[10];
 extern Float_t				phoCiCPF4chgpfIso02[10][100];
 extern Float_t				phoCiCPF4chgpfIso03[10][100];
 extern Float_t				phoCiCPF4chgpfIso04[10][100];
 extern Float_t				phoEmax[10];
 extern Float_t				phoE3x3[10];
 extern Float_t				phoE3x1[10];
 extern Float_t				phoE1x3[10];
 extern Float_t				phoE5x5[10];
 extern Float_t				phoE1x5[10];
 extern Float_t				phoE2x2[10];
 extern Float_t				phoE2x5Max[10];
 extern Float_t				phoPFChIso[10];
 extern Float_t				phoPFPhoIso[10];
 extern Float_t				phoPFNeuIso[10];
 extern Float_t				phoSCRChIso[10];
 extern Float_t				phoSCRPhoIso[10];
 extern Float_t				phoSCRNeuIso[10];
 extern Float_t				phoRegrE[10];
 extern Float_t				phoRegrEerr[10];
 extern Float_t				phoSeedTime[10];
 extern Int_t				phoSeedDetId1[10];
 extern Int_t				phoSeedDetId2[10];
 extern Float_t				phoLICTD[10];
 extern Int_t				phoRecoFlag[10];
 extern Int_t				phoPos[10];
 extern Int_t				phoGenIndex[10];
 extern Int_t				phoGenGMomPID[10];
 extern Int_t				phoGenMomPID[10];
 extern Float_t				phoGenMomPt[10];
 extern Float_t				phoSCE[10];
 extern Float_t				phoSCRawE[10];
 extern Float_t				phoESEn[10];
 extern Float_t				phoSCEt[10];
 extern Float_t				phoSCEta[10];
 extern Float_t				phoSCPhi[10];
 extern Float_t				phoSCEtaWidth[10];
 extern Float_t				phoSCPhiWidth[10];
 extern Float_t				phoSCBrem[10];
 extern Int_t				phoOverlap[10];
 extern Int_t				phohasPixelSeed[10];
 extern Int_t				pho_hasConvPf[10];
 extern Int_t				pho_hasSLConvPf[10];
 extern Float_t				pho_pfconvVtxZ[10];
 extern Float_t				pho_pfconvVtxZErr[10];
 extern Int_t				pho_nSLConv[10];
 extern Float_t				pho_pfSLConvPos[10][20][3];
 extern Float_t				pho_pfSLConvVtxZ[10][20];
 extern Int_t				phoIsConv[10];
 extern Int_t				phoNConv[10];
 extern Float_t				phoConvInvMass[10];
 extern Float_t				phoConvCotTheta[10];
 extern Float_t				phoConvEoverP[10];
 extern Float_t				phoConvZofPVfromTrks[10];
 extern Float_t				phoConvMinDist[10];
 extern Float_t				phoConvdPhiAtVtx[10];
 extern Float_t				phoConvdPhiAtCalo[10];
 extern Float_t				phoConvdEtaAtCalo[10];
 extern Float_t				phoConvTrkd0[10][2];
 extern Float_t				phoConvTrkPin[10][2];
 extern Float_t				phoConvTrkPout[10][2];
 extern Float_t				phoConvTrkdz[10][2];
 extern Float_t				phoConvTrkdzErr[10][2];
 extern Float_t				phoConvChi2[10];
 extern Float_t				phoConvChi2Prob[10];
 extern Int_t				phoConvNTrks[10];
 extern Float_t				phoConvCharge[10][2];
 extern Float_t				phoConvValidVtx[10];
 extern Float_t				phoConvLikeLihood[10];
 extern Float_t				phoConvP4[10][4];
 extern Float_t				phoConvVtx[10][3];
 extern Float_t				phoConvVtxErr[10][3];
 extern Float_t				phoConvPairMomentum[10][3];
 extern Float_t				phoConvRefittedMomentum[10][3];
 extern Int_t				SingleLegConv[10];
 extern Float_t				phoPFConvVtx[10][3];
 extern Float_t				phoPFConvMom[10][3];
 extern Float_t				phoESEffSigmaRR[10][3];
 extern Int_t				muTrg[5][10];
 extern Float_t				muEta[5];
 extern Float_t				muPhi[5];
 extern Int_t				muCharge[5];
 extern Float_t				muPt[5];
 extern Float_t				muPz[5];
 extern Float_t				muVtx[5][3];
 extern Float_t				muVtxGlb[5][3];
 extern Int_t				muGenIndex[5];
 extern Float_t				mucktPt[5];
 extern Float_t				mucktPtErr[5];
 extern Float_t				mucktEta[5];
 extern Float_t				mucktPhi[5];
 extern Float_t				mucktdxy[5];
 extern Float_t				mucktdz[5];
 extern Float_t				muIsoTrk[5];
 extern Float_t				muIsoCalo[5];
 extern Float_t				muIsoEcal[5];
 extern Float_t				muIsoHcal[5];
 extern Float_t				muChi2NDF[5];
 extern Float_t				muInnerChi2NDF[5];
 extern Float_t				muPFIsoR04_CH[5];
 extern Float_t				muPFIsoR04_NH[5];
 extern Float_t				muPFIsoR04_Pho[5];
 extern Float_t				muPFIsoR04_PU[5];
 extern Float_t				muPFIsoR04_CPart[5];
 extern Float_t				muPFIsoR04_NHHT[5];
 extern Float_t				muPFIsoR04_PhoHT[5];
 extern Float_t				muPFIsoR03_CH[5];
 extern Float_t				muPFIsoR03_NH[5];
 extern Float_t				muPFIsoR03_Pho[5];
 extern Float_t				muPFIsoR03_PU[5];
 extern Float_t				muPFIsoR03_CPart[5];
 extern Float_t				muPFIsoR03_NHHT[5];
 extern Float_t				muPFIsoR03_PhoHT[5];
 extern Int_t				muType[5];
 extern Float_t				muD0[5];
 extern Float_t				muDz[5];
 extern Float_t				muD0GV[5];
 extern Float_t				muDzGV[5];
 extern Float_t				muD0Vtx[5][100];
 extern Float_t				muDzVtx[5][100];
 extern Float_t				muInnerD0[5];
 extern Float_t				muInnerDz[5];
 extern Float_t				muInnerD0GV[5];
 extern Float_t				muInnerDzGV[5];
 extern Float_t				muInnerPt[5];
 extern Float_t				muInnerPtErr[5];
 extern Int_t				muNumberOfValidTrkLayers[5];
 extern Int_t				muNumberOfValidTrkHits[5];
 extern Int_t				muNumberOfValidPixelLayers[5];
 extern Int_t				muNumberOfValidPixelHits[5];
 extern Int_t				muNumberOfValidMuonHits[5];
 extern Int_t				muStations[5];
 extern Int_t				muChambers[5];
 extern Float_t				muIP3D[5];
 extern Float_t				muIP3DErr[5];
 extern Float_t				PFPhoEt[38];
 extern Float_t				PFPhoEta[38];
 extern Float_t				PFPhoPhi[38];
 extern Int_t				PFPhoType[38];
 extern Float_t				PFPhoIso[38];
 extern Float_t				rho25;
 extern Float_t				rho25_neu;
 extern Float_t				rho25_muPFiso;
 extern Float_t				rho25_elePFiso;
 extern Float_t				rho2011;
 extern Float_t				rho2012;
 extern Int_t				jetTrg[17][14];
 extern Float_t				jetEn[17];
 extern Float_t				jetPt[17];
 extern Float_t				jetEta[17];
 extern Float_t				jetPhi[17];
 extern Float_t				jetCharge[17];
 extern Float_t				jetEt[17];
 extern Float_t				jetRawPt[17];
 extern Float_t				jetRawEn[17];
 extern Float_t				jetArea[17];
 extern Float_t				jetCHF[17];
 extern Float_t				jetNHF[17];
 extern Float_t				jetCEF[17];
 extern Float_t				jetNEF[17];
 extern Int_t				jetNCH[17];
 extern Float_t				jetHFHAE[17];
 extern Float_t				jetHFEME[17];
 extern Int_t				jetNConstituents[17];
 extern Float_t				jetCombinedSecondaryVtxBJetTags[17];
 extern Float_t				jetCombinedSecondaryVtxMVABJetTags[17];
 extern Float_t				jetJetProbabilityBJetTags[17];
 extern Float_t				jetJetBProbabilityBJetTags[17];
 extern Float_t				jetTrackCountingHighPurBJetTags[17];
 extern Bool_t				jetPFLooseId[17];
 extern Float_t				jetDRMean[17];
 extern Float_t				jetDR2Mean[17];
 extern Float_t				jetDZ[17];
 extern Float_t				jetFrac01[17];
 extern Float_t				jetFrac02[17];
 extern Float_t				jetFrac03[17];
 extern Float_t				jetFrac04[17];
 extern Float_t				jetFrac05[17];
 extern Float_t				jetFrac06[17];
 extern Float_t				jetFrac07[17];
 extern Float_t				jetNNeutrals[17];
 extern Float_t				jetNCharged[17];
 extern Int_t				jetWPLevels[17][4];
 extern Float_t				jetMt[17];
 extern Float_t				jetJECUnc[17];
 extern Float_t				jetLeadTrackPt[17];
 extern Float_t				jetVtxPt[17];
 extern Float_t				jetVtxMass[17];
 extern Float_t				jetVtx3dL[17];
 extern Float_t				jetVtx3deL[17];
 extern Float_t				jetSoftLeptPt[17];
 extern Float_t				jetSoftLeptPtRel[17];
 extern Float_t				jetSoftLeptdR[17];
 extern Float_t				jetSoftLeptIdlooseMu[17];
 extern Float_t				jetSoftLeptIdEle95[17];
 extern Float_t				jetDPhiMETJet[17];
 extern Float_t				jetPuJetIdL[17];
 extern Float_t				jetPuJetIdM[17];
 extern Float_t				jetPuJetIdT[17];
 extern Int_t				jetPartonID[17];
 extern Int_t				jetGenJetIndex[17];
 extern Float_t				jetGenJetEn[17];
 extern Float_t				jetGenJetPt[17];
 extern Float_t				jetGenJetEta[17];
 extern Float_t				jetGenJetPhi[17];
 extern Int_t				jetGenPartonID[17];
 extern Float_t				jetGenEn[17];
 extern Float_t				jetGenPt[17];
 extern Float_t				jetGenEta[17];
 extern Float_t				jetGenPhi[17];
 extern Float_t				convP4[58][4];
 extern Float_t				convVtx[58][3];
 extern Float_t				convVtxErr[58][3];
 extern Float_t				convPairMomentum[58][3];
 extern Float_t				convRefittedMomentum[58][3];
 extern Int_t				convNTracks[58];
 extern Float_t				convPairInvMass[58];
 extern Float_t				convPairCotThetaSep[58];
 extern Float_t				convEoverP[58];
 extern Float_t				convDistOfMinApproach[58];
 extern Float_t				convDPhiTrksAtVtx[58];
 extern Float_t				convDPhiTrksAtEcal[58];
 extern Float_t				convDEtaTrksAtEcal[58];
 extern Float_t				convDxy[58];
 extern Float_t				convDz[58];
 extern Float_t				convLxy[58];
 extern Float_t				convLz[58];
 extern Float_t				convZofPrimVtxFromTrks[58];
 extern Int_t				convNHitsBeforeVtx[58][2];
 extern Int_t				convNSharedHits[58];
 extern Int_t				convValidVtx[58];
 extern Float_t				convMVALikelihood[58];
 extern Float_t				convChi2[58];
 extern Float_t				convChi2Probability[58];
 extern Float_t				convTk1Dz[58];
 extern Float_t				convTk2Dz[58];
 extern Float_t				convTk1DzErr[58];
 extern Float_t				convTk2DzErr[58];
 extern Int_t				convCh1Ch2[58];
 extern Float_t				convTk1D0[58];
 extern Float_t				convTk1Pout[58];
 extern Float_t				convTk1Pin[58];
 extern Float_t				convTk2D0[58];
 extern Float_t				convTk2Pout[58];
 extern Float_t				convTk2Pin[58];
};
namespace OUT {
 extern Int_t				nEle;
 extern Int_t				eleTrg[8][16];
 extern Int_t				eleClass[8];
 extern Int_t				eleIsEcalDriven[8];
 extern Int_t				eleCharge[8];
 extern Float_t				eleEn[8];
 extern Float_t				eleEcalEn[8];
 extern Float_t				eleSCRawEn[8];
 extern Float_t				eleSCEn[8];
 extern Float_t				eleESEn[8];
 extern Float_t				elePt[8];
 extern Float_t				eleEta[8];
 extern Float_t				elePhi[8];
 extern Float_t				eleEtaVtx[8][100];
 extern Float_t				elePhiVtx[8][100];
 extern Float_t				eleEtVtx[8][100];
 extern Float_t				eleSCEta[8];
 extern Float_t				eleSCPhi[8];
 extern Float_t				eleSCEtaWidth[8];
 extern Float_t				eleSCPhiWidth[8];
 extern Float_t				eleVtx[8][3];
 extern Float_t				eleD0[8];
 extern Float_t				eleDz[8];
 extern Float_t				eleD0GV[8];
 extern Float_t				eleDzGV[8];
 extern Float_t				eleD0Vtx[8][100];
 extern Float_t				eleDzVtx[8][100];
 extern Float_t				eleHoverE[8];
 extern Float_t				eleHoverE12[8];
 extern Float_t				eleEoverP[8];
 extern Float_t				elePin[8];
 extern Float_t				elePout[8];
 extern Float_t				eleTrkMomErr[8];
 extern Float_t				eleBrem[8];
 extern Float_t				eledEtaAtVtx[8];
 extern Float_t				eledPhiAtVtx[8];
 extern Float_t				eleSigmaIEtaIEta[8];
 extern Float_t				eleSigmaIEtaIPhi[8];
 extern Float_t				eleSigmaIPhiIPhi[8];
 extern Float_t				eleEmax[8];
 extern Float_t				eleE1x5[8];
 extern Float_t				eleE3x3[8];
 extern Float_t				eleE5x5[8];
 extern Float_t				eleE2x5Max[8];
 extern Float_t				eleRegrE[8];
 extern Float_t				eleRegrEerr[8];
 extern Float_t				elePhoRegrE[8];
 extern Float_t				elePhoRegrEerr[8];
 extern Float_t				eleSeedTime[8];
 extern Int_t				eleRecoFlag[8];
 extern Int_t				elePos[8];
 extern Int_t				eleGenIndex[8];
 extern Int_t				eleGenGMomPID[8];
 extern Int_t				eleGenMomPID[8];
 extern Float_t				eleGenMomPt[8];
 extern Float_t				eleIsoTrkDR03[8];
 extern Float_t				eleIsoEcalDR03[8];
 extern Float_t				eleIsoHcalDR03[8];
 extern Float_t				eleIsoHcalDR0312[8];
 extern Float_t				eleIsoTrkDR04[8];
 extern Float_t				eleIsoEcalDR04[8];
 extern Float_t				eleIsoHcalDR04[8];
 extern Float_t				eleIsoHcalDR0412[8];
 extern Float_t				eleModIsoTrk[8];
 extern Float_t				eleModIsoEcal[8];
 extern Float_t				eleModIsoHcal[8];
 extern Int_t				eleMissHits[8];
 extern Float_t				eleConvDist[8];
 extern Float_t				eleConvDcot[8];
 extern Int_t				eleConvVtxFit[8];
 extern Float_t				eleIP3D[8];
 extern Float_t				eleIP3DErr[8];
 extern Float_t				eleIDMVANonTrig[8];
 extern Float_t				eleIDMVATrig[8];
 extern Float_t				eleIDMVATrigIDIso[8];
 extern Float_t				elePFChIso03[8];
 extern Float_t				elePFPhoIso03[8];
 extern Float_t				elePFNeuIso03[8];
 extern Float_t				elePFChIso04[8];
 extern Float_t				elePFPhoIso04[8];
 extern Float_t				elePFNeuIso04[8];
 extern Float_t				eleESEffSigmaRR[8][3];
};
#endif
