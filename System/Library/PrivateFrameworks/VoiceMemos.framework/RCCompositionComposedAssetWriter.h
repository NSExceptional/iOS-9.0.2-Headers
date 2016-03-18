/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetExportSession, RCWaveformDataSource, RCComposition;

@interface RCCompositionComposedAssetWriter : NSObject {

	AVAssetExportSession* _exportSession;
	RCWaveformDataSource* _waveformDataSource;
	BOOL _canGenerateWaveform;
	BOOL _canGenerateWaveformByProcessingAVURL;
	BOOL _canSaveCompositionMetadata;
	RCComposition* _composition;

}

@property (nonatomic,readonly) RCComposition * composition;                          //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL canGenerateWaveform;                               //@synthesize canGenerateWaveform=_canGenerateWaveform - In the implementation block
@property (assign,nonatomic) BOOL canGenerateWaveformByProcessingAVURL;              //@synthesize canGenerateWaveformByProcessingAVURL=_canGenerateWaveformByProcessingAVURL - In the implementation block
@property (assign,nonatomic) BOOL canSaveCompositionMetadata;                        //@synthesize canSaveCompositionMetadata=_canSaveCompositionMetadata - In the implementation block
@property (nonatomic,readonly) float progress; 
-(void)cancel;
-(float)progress;
-(RCComposition *)composition;
-(id)initWithComposition:(id)arg1 ;
-(void)setCanSaveCompositionMetadata:(BOOL)arg1 ;
-(void)setCanGenerateWaveformByProcessingAVURL:(BOOL)arg1 ;
-(void)setCanGenerateWaveform:(BOOL)arg1 ;
-(void)writeCompositionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_writeCompositionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canGenerateWaveform;
-(BOOL)canGenerateWaveformByProcessingAVURL;
-(BOOL)canSaveCompositionMetadata;
@end

