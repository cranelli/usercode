#!/bin/bash

#GGNTUPLE_DIR=/afs/cern.ch/work/c/cranelli/public/WGamGam/ggNtuples/
#FILENAME=ggtree_mc_ISR.root
#OUTPUT_DIR=/afs/cern.ch/work/c/cranelli/public/WGamGam/RecoOutput/job_LNuAA_ISR
#EXECUTABLE_NAME=RunAnalysisMC_job_LNuAA_ISR

GGNTUPLE_DIR=/afs/cern.ch/work/c/cranelli/public/WGamGam/aQGC_Reweighted_ggNtuples/ 
FILENAME=LT012/LNuAA_LT012_Reweight_ggNtuple.root 
OUTPUT_DIR=/afs/cern.ch/work/c/cranelli/public/WGamGam/RecoOutput/job_LNuAA_LT012_Reweight
EXECUTABLE_NAME=RunAnalysisMC_job_LNuAA_LT012_Reweight

OUTPUT_FILE=tree.root
TREENAME=ggNtuplizer/EventTree





python scripts/filter.py  --files $GGNTUPLE_DIR$FILENAME --outputDir $OUTPUT_DIR --outputFile $OUTPUT_FILE --treeName $TREENAME --module scripts/ConfWgamgamReco.py --enableKeepFilter --confFileName job_summer12_DYJetsToLL.txt --nsplit 1 --exeName $EXECUTABLE_NAME --moduleArgs "{ 'sampleFile' : '${GGNTUPLE_DIR}${FILENAME}'}"

#echo "{ 'sampleFile' : '${GGNTUPLE_DIR}${FILENAME}'}"