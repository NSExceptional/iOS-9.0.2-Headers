/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYStoreDelegate <NSObject>
@optional
-(void)syncStoreWillUpdate:(id)arg1;
-(void)syncStoreWillUpdate:(id)arg1 objectCount:(unsigned long long)arg2;
-(void)syncStoreDidUpdate:(id)arg1;
-(void)syncStoreDidCompleteFullSync:(id)arg1;
-(void)syncStoreAllObjectsDeleted:(id)arg1;
-(id)syncStoreAllObjects:(id)arg1;
-(BOOL)syncStoreShouldPerformInitialFullSync:(id)arg1;
-(/*^block*/id)beginSyncingAllObjectsForStore:(id)arg1;
-(BOOL)syncStoreShouldDeleteRemoteObjectsOnFailedFullSync:(id)arg1;
-(void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2;
-(void)syncStore:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;
-(void)syncStoreDidSetupAfterPairing:(id)arg1;
-(void)syncStoreDidUnpair:(id)arg1;
-(void)syncStore:(id)arg1 sentMessageWithContext:(id)arg2;
-(void)syncStore:(id)arg1 peerFinishedProcessingMessageWithContext:(id)arg2;
-(void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2;

@required
-(void)syncStore:(id)arg1 objectAdded:(id)arg2;
-(void)syncStore:(id)arg1 objectUpdated:(id)arg2;
-(void)syncStore:(id)arg1 objectDeleted:(id)arg2;

@end

