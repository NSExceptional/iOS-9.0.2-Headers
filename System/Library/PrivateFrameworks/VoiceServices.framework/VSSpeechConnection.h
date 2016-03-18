/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;

@interface VSSpeechConnection : NSObject {

	NSXPCConnection* _connection;
	VSSpeechConnectionDelegateWrapper* _delegateWrapper;
	VSSpeechRequest* _request;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate; 
@property (nonatomic,readonly) VSSpeechRequest * request;                                 //@synthesize request=_request - In the implementation block
-(void)_setRequest:(id)arg1 ;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<VSSpeechConnectionDelegate>)delegate;
-(VSSpeechRequest *)request;
-(id)_connection;
-(void)_connectionInvalidated;
-(id)_remoteObject;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)isSystemSpeaking;
-(void)startSpeechRequest:(id)arg1 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)continueCurrentSpeechRequest;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(void)getAllVoiceAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
-(void)downloadVoiceAsset:(id)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 ;
-(void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1 ;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
@end

