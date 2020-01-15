#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ enum  AliLog::EType_t;
#pragma link C++ class AliLog+;

// STEER/ESD
#pragma link C++ class AliESDInputHandler+;
#pragma link C++ class AliESDEvent+;
#pragma link C++ class AliESDCaloTrigger+;
#pragma link C++ class AliESDRun+;
#pragma link C++ class AliESDHeader+;
#pragma link C++ class AliTriggerScalersESD+;
#pragma link C++ class AliTriggerScalersRecordESD+;
#pragma link C++ class AliESDTZERO+;
#pragma link C++ class AliESDFIT+;
#pragma link C++ class AliESDZDC+;
#pragma link C++ class AliESDACORDE+;
#pragma link C++ class AliESDAD+;
#pragma link C++ class AliMultiplicity+;
#pragma link C++ class AliESDtrack+;
#pragma link C++ class AliESDTOFCluster+;
#pragma link C++ class AliESDTOFHit+;
#pragma link C++ class AliESDTOFMatch+;
#pragma link C++ class AliESDfriendTrack+;
#pragma link C++ class AliTrackPointArray+;
#pragma link C++ class AliESDVertex+;
#pragma link C++ class AliVertex+;
#pragma link C++ class AliESDCaloCluster+;
#pragma link C++ class AliESDCaloCells+;
#pragma link C++ class AliESDVZERO+;
#pragma link C++ class AliESDTrdTrack+;
#pragma link C++ class AliESDTrdTracklet+;
#pragma link C++ class AliESDfriend+;
#pragma link C++ class AliESDVZEROfriend+;
#pragma link C++ class AliESDv0+;
#pragma link C++ class AliESD+;
#pragma link C++ class AliESDMuonTrack+;
#pragma link C++ class AliESDPmdTrack+;
#pragma link C++ class AliESDcascade+;
#pragma link C++ class AliESDkink+;
#pragma link C++ class AliESDHLTtrack+;
#pragma link C++ class AliESDFMD+;
#pragma link C++ class AliFMDFloatMap+;
#pragma link C++ class AliFMDMap+;
#pragma link C++ class AliRawDataErrorLog+;
#pragma link C++ class AliESDMuonCluster+;
#pragma link C++ class AliESDMuonPad+;
#pragma link C++ class AliESDMuonGlobalTrack+;
#pragma link C++ class AliESDPmdTrack+;
#pragma link C++ class AliESDTrdTrack+;
#pragma link C++ class AliESDVertex+;
#pragma link C++ class AliESDcascade+;
#pragma link C++ class AliESDPmdTrack+;
#pragma link C++ class AliESDTrdTrigger+;
#pragma link C++ class AliESDTrdTrack+;
#pragma link C++ class AliESDTrdTracklet+;
#pragma link C++ class AliESDVertex+;
#pragma link C++ class AliVertexerTracks+;
#pragma link C++ class AliESDcascade+;
#pragma link C++ class AliESDkink+;
#pragma link C++ class AliESDtrack+;
#pragma link C++ class AliESDHLTtrack+;
#pragma link C++ class AliESDCaloCluster+;
#pragma link C++ class AliESDCaloCells+;
#pragma link C++ class AliESDv0+;
#pragma link C++ class AliESDFMD+;
#pragma link C++ class AliESDVZERO+;
#pragma link C++ class AliMultiplicity+;
#pragma link C++ class AliRawDataErrorLog+;
#pragma link C++ class AliESDACORDE+;
#pragma link C++ class AliESDAD+;
#pragma link C++ class AliESDHLTDecision+;
#pragma link C++ class AliESDCosmicTrack+;
#pragma link C++ class AliTriggerConfiguration+;
#pragma link C++ class AliTriggerClass+;
#pragma link C++ class AliTriggerCluster+;
#pragma link C++ class AliV0HypSel+;
#pragma link C++ class AliKalmanTrack+;
#pragma link C++ class AliTriggerIR+;
#pragma link C++ class AliESDpid+;
#pragma link C++ class AliESDTZEROfriend+;
#pragma link C++ class AliESDfriend+;
#pragma link C++ class AliESDVZEROfriend+;
#pragma link C++ class AliESDTZEROfriend+;
#pragma link C++ class AliESDADfriend+;
#pragma link C++ class AliESDCalofriend+;
#pragma link C++ class AliESDUtils+;
#pragma link C++ class AliTrackerBase+;
#pragma link C++ class AliESDV0Params+;
#pragma link C++ class AliKFParticle+;
#pragma link C++ class AliKFParticleBase+;
#pragma link C++ class AliKFVertex+;
#pragma link C++ class AliStrLine+;
#pragma link C++ class AliTriggerInput+;
#pragma link C++ class AliTriggerDescriptor+;
#pragma link C++ class AliTriggerBCMask+;
#pragma link C++ class AliTriggerInteraction+;
#pragma link C++ class AliTriggerPFProtection+;
#pragma link C++ class AliTriggerInteraction+;
#pragma link C++ class AliExpression+;

#pragma link C++ class AliTrackPointArray+;
#pragma link C++ class AliTrackPoint+;
#pragma link C++ class AliTrackPointArray+;
#pragma link C++ class AliTrackPoint+;

#pragma link C++ class AliVariableExpression+;

// STEER/STEER
#pragma link C++ class AliGRPRecoParam+;
#pragma link C++ class AliDetectorRecoParam+;
#pragma link C++ class AliRecoParam+;
#pragma link C++ class AliRunInfo+;
#pragma link C++ class AliEventInfo+;

// STEER/STEERBase
#pragma link C++ class AliVEvent+;
#pragma link C++ class AliVHeader+;
#pragma link C++ class AliVParticle+;
#pragma link C++ class AliVMisc+;
#pragma link C++ class AliVVertex+;
#pragma link C++ class AliVCluster+;
#pragma link C++ class AliVCaloCells+;
#pragma link C++ class AliVCaloTrigger+;
#pragma link C++ class AliTOFHeader+;
#pragma link C++ class AliTOFTriggerMask+;
#pragma link C++ class AliVTrdTrack+;
#pragma link C++ class AliVMultiplicity+;
#pragma link C++ class AliInputEventHandler+;
#pragma link C++ class AliVEventHandler+;
#pragma link C++ class AliTimeStamp+;
#pragma link C++ class AliVZDC+;
#pragma link C++ class AliVAD+;
#pragma link C++ class AliExternalTrackParam+;
#pragma link C++ class AliVTrack+;
#pragma link C++ class AliPID+;
#pragma link C++ class AliVTOFcluster+;
#pragma link C++ class AliVTOFHit+;
#pragma link C++ class AliVTOFMatch+;
#pragma link C++ class AliVfriendTrack+;
#pragma link C++ class AliTPCdEdxInfo+;
#pragma link C++ class AliLog+;
#pragma link C++ class AliVVZERO+;
#pragma link C++ class AliVTrdTracklet+;
#pragma link C++ class AliVfriendEvent+;
#pragma link C++ class AliVVZEROfriend+;
#pragma link C++ class AliVAODHeader+;
#pragma link C++ class AliCentrality+;
#pragma link C++ class AliEventplane+;
#pragma link C++ class AliMCEvent+;
#pragma link C++ class AliMCParticle+;
#pragma link C++ class AliTrackReference+;
#pragma link C++ class AliStack+;
#pragma link C++ class AliMagF+;
#pragma link C++ class AliVCuts+;
#pragma link C++ class AliPIDResponse+;
#pragma link C++ class AliITSPIDResponse+;
#pragma link C++ class AliTPCPIDResponse+;
#pragma link C++ class AliTRDPIDResponse+;
#pragma link C++ class AliTOFPIDResponse+;
#pragma link C++ class AliHMPIDPIDResponse+;
#pragma link C++ class AliEMCALPIDResponse+;
#pragma link C++ class AliGenEventHeader+;
#pragma link C++ class AliGenCocktailEventHeader+;
#pragma link C++ class AliNeutralTrackParam+;
#pragma link C++ class AliDetectorPID+;
#pragma link C++ class AliVEventPool+;
#pragma link C++ class AliSysInfo+;
#pragma link C++ class AliCodeTimer+;
#pragma link C++ class AliMCEventHandler+;
#pragma link C++ class AliHeader+;
#pragma link C++ class AliGenHijingEventHeader+;
#pragma link C++ class AliGenDPMjetEventHeader+;
#pragma link C++ class AliGenPythiaEventHeader+;
#pragma link C++ class AliGenCocktailEventHeader+;
#pragma link C++ class AliCodeTimer+;
#pragma link C++ class AliCollisionGeometry+;
#pragma link C++ class AliPIDValues+;
#pragma link C++ class AliRunTag+;
#pragma link C++ class AliLHCTag+;
#pragma link C++ class AliDetectorTag+;
#pragma link C++ class AliDAQ+;
#pragma link C++ class AliFileTag+;
#pragma link C++ class AliEventTag+;
#pragma link C++ class AliQA+;
#pragma link C++ class AliVTPCseed+;
#pragma link C++ class AliTOFPIDParams+;
#pragma link C++ class AliDetectorEventHeader+;
#pragma link C++ class AliITSPIDResponse+;
#pragma link C++ class AliITSPidParams+;
#pragma link C++ class AliMiscConstants+;
#pragma link C++ class AliMCVertex+;
#pragma link C++ class AliFastContainerAccess+;
#pragma link C++ class AliPDG+;
#pragma link C++ class AliRefArray+;
#pragma link C++ class AliMagFast+;
#pragma link C++ class AliTRDPIDResponseObject+;
#pragma link C++ class AliOADBContainer+;
#pragma link C++ class AliTRDPIDReference+;
#pragma link C++ class AliMagWrapCheb+;
#pragma link C++ class AliTRDNDFast+;
#pragma link C++ class AliTRDdEdxParams+;
#pragma link C++ class AliCheb3D+;
#pragma link C++ class AliCheb3DCalc+;
#pragma link C++ class AliTRDPIDParams+;
#pragma link C++ class AliHMPIDPIDParams+;
#pragma link C++ class AliMultSelectionBase+;

#pragma link C++ class AliTRDPIDParams+;
#pragma link C++ class AliTRDPIDParams::AliTRDPIDThresholds+;
#pragma link C++ class AliTRDPIDParams::AliTRDPIDCentrality+;

#pragma link C++ class AliCodeTimer+;
#pragma link C++ class AliCodeTimer::AliPair+;

#pragma link C++ class AliOADBObjCache+;

// STAT
#pragma link C++ class AliMathBase+;
#pragma link C++ class TTreeStream+;
#pragma link C++ class AliNDLocalRegression+;
#pragma link C++ class TTreeSRedirector+;
#pragma link C++ class TTreeDataElement+;

// AOD
#pragma link C++ class AliAODInputHandler+;
#pragma link C++ class AliAODEvent+;
#pragma link C++ class AliAODHeader+;
#pragma link C++ class AliAODVertex+;
#pragma link C++ class AliAODRedCov+;
#pragma link C++ class AliNanoAODHeader+;
#pragma link C++ class AliNanoAODStorage+;
#pragma link C++ class AliAODVertex+;
#pragma link C++ class AliAODv0+;
#pragma link C++ class AliAODkink+;
#pragma link C++ class AliAODcascade+;
#pragma link C++ class AliAODTracklets+;
#pragma link C++ class AliAODJet+;
#pragma link C++ class AliAODCaloCells+;
#pragma link C++ class AliAODCaloCluster+;
#pragma link C++ class AliAODCaloTrigger+;
#pragma link C++ class AliAODPmdCluster+;
#pragma link C++ class AliAODFmdCluster+;
#pragma link C++ class AliAODDimuon+;
#pragma link C++ class AliAODTZERO+;
#pragma link C++ class AliAODVZERO+;
#pragma link C++ class AliAODHMPIDrings+;
#pragma link C++ class AliAODZDC+;
#pragma link C++ class AliAODAD+;
#pragma link C++ class AliAODTrdTrack+;
#pragma link C++ class AliAODRecoDecay+;
#pragma link C++ class AliAODCluster+;
#pragma link C++ class AliAODTrdTracklet+;
#pragma link C++ class AliAODMCHeader+;
#pragma link C++ class AliAODpidUtil+;
#pragma link C++ class AliAODMCParticle+;
#pragma link C++ class AliAODHandler+;
#pragma link C++ class AliAODExtension+;
#pragma link C++ class AliAODBranchReplicator+;
#pragma link C++ class AliAODRedCov<3>+;
#pragma link C++ class AliAODRedCov<4>+;
#pragma link C++ class AliAODRedCov<6>+;

#pragma read                                              \
    sourceClass="AliAODPid"                               \
    targetClass="AliAODPid"                               \
    source="UShort_t fTPCsignalN; Double_t fTPCmomentum; Float_t fTRDmomentum[6]"  \
    version="[-10]"                                       \
    target="fTPCsignalN, fTPCmomentum, fTRDmomentum"                                          \
    code="{newObj->SetTPCsignalN((UChar_t)onfile.fTPCsignalN); newObj->SetTPCmomentum(onfile.fTPCmomentum); for (Int_t i=0;i<6;++i) newObj->SetTRDmomentum(i,onfile.fTRDmomentum[i]);}"
#pragma link C++ class AliAODPid+;

#pragma read sourceClass="AliAODTrack" targetClass="AliAODTrack" source="Double32_t fPID[10]"  version="[-22]" \
 target="fPID" targetType="Double32_t*" \
  code="{if (!fPID) fPID = new Double32_t[10];for(Int_t isp=10;isp--;) fPID[isp]=onfile.fPID[isp];}"
#pragma link C++ class AliAODTrack+;

// ANALYSIS/ANALYSISaliceBase
#pragma link C++ class AliMultiInputEventHandler+;

// ANALYSIS/ANALYSISalice
#pragma link C++ class AliAnalysisTaskSE+;
#pragma link C++ class AliAnalysisCuts+;
#pragma link C++ class AliTrackSelectionFactory+;
#pragma link C++ class AliVTrackSelection+;

// ANALYSIS/ANALYSIS
#pragma link C++ class AliAnalysisTask+;
#pragma link C++ class AliAnalysisManager+;
#pragma link C++ class AliAnalysisSelector+;
#pragma link C++ class AliAnalysisGrid+;
#pragma link C++ class AliAnalysisDataContainer-;
#pragma link C++ class AliAnalysisDataSlot+;
#pragma link C++ class AliAnalysisStatistics+;
#pragma link C++ class AliDirList+;
#pragma link C++ class AliAnalysisFileDescriptor+;

#pragma link C++ class AliAnalysisDataWrapper+;

#endif
