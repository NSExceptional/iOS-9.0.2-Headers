/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceServerDelegate;
@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKFetchesSyncServiceServerDelegate>)arg1 ;
-(id<NNMKFetchesSyncServiceServerDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(void)requestPrepareForFullSync:(id)arg1 ;
-(void)warnNeedsUnlock:(id)arg1 ;
-(void)warnErrorDownloadingContentForMessage:(id)arg1 notificationPriority:(BOOL)arg2 userRequested:(BOOL)arg3 ;
-(void)notifyOldMessagesAvailable:(id)arg1 ;
-(void)notifyFetchRequestCompleted:(id)arg1 ;
-(id)reportComposedMessageSendingProgress:(id)arg1 ;
@end

