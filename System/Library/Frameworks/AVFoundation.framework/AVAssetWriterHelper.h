/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterConfigurationState, AVWeakReference, NSURL, AVMediaFileType, NSArray, NSError;

@interface AVAssetWriterHelper : NSObject {

	AVAssetWriterConfigurationState* _configurationState;
	AVWeakReference* _weakReferenceToAssetWriter;

}

@property (nonatomic,readonly) AVAssetWriterConfigurationState * configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (retain) AVWeakReference * weakReferenceToAssetWriter;                                  //@synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter - In the implementation block
@property (nonatomic,readonly) NSURL * outputURL; 
@property (nonatomic,readonly) AVMediaFileType * mediaFileType; 
@property (nonatomic,readonly) NSArray * availableMediaTypes; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) SCD_Struct_CM5 movieFragmentInterval; 
@property (assign,nonatomic) SCD_Struct_CM5 overallDurationHint; 
@property (assign,nonatomic) BOOL shouldOptimizeForNetworkUse; 
@property (nonatomic,copy) NSURL * directoryForTemporaryFiles; 
@property (assign,nonatomic) int movieTimeScale; 
@property (nonatomic,copy) NSArray * metadata; 
@property (assign,nonatomic) CGAffineTransform preferredTransform; 
@property (assign,nonatomic) float preferredVolume; 
@property (assign,nonatomic) float preferredRate; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * inputGroups; 
-(float)preferredRate;
-(float)preferredVolume;
-(void)setMovieFragmentInterval:(SCD_Struct_CM5)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(AVMediaFileType *)mediaFileType;
-(SCD_Struct_CM5)movieFragmentInterval;
-(SCD_Struct_CM5)overallDurationHint;
-(void)setOverallDurationHint:(SCD_Struct_CM5)arg1 ;
-(BOOL)shouldOptimizeForNetworkUse;
-(NSURL *)directoryForTemporaryFiles;
-(void)setDirectoryForTemporaryFiles:(NSURL *)arg1 ;
-(int)movieTimeScale;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(NSArray *)inputGroups;
-(void)setWeakReferenceToAssetWriter:(AVWeakReference *)arg1 ;
-(NSArray *)availableMediaTypes;
-(BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWriting;
-(void)transitionToFailedStatusWithError:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(AVAssetWriterConfigurationState *)configurationState;
-(BOOL)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(opaqueCMFormatDescriptionRef)arg3 exceptionReason:(id*)arg4 ;
-(BOOL)_canApplyTrackReferences:(id)arg1 exceptionReason:(id*)arg2 ;
-(AVWeakReference *)weakReferenceToAssetWriter;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(long long)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(long long)status;
-(void)startSessionAtSourceTime:(SCD_Struct_CM5)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)outputURL;
-(void)cancelWriting;
-(NSArray *)inputs;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)startWriting;
-(NSArray *)metadata;
-(CGAffineTransform)preferredTransform;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
@end

