/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_dispatch_source;
@class NSObject, NSMutableIndexSet, _SYMessageTimerTable;

@interface SYOutgoingBatchSyncSession : SYSession {

	NSObject*<OS_dispatch_source> _stateUpdateSource;
	NSObject*<OS_dispatch_source> _sessionTimer;
	unsigned long long _batchIndex;
	NSMutableIndexSet* _ackedBatchIndices;
	unsigned long long _activity;
	long long _state;
	BOOL _errorIsLocal;
	BOOL _hasSentEnd;
	_SYMessageTimerTable* _timers;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _cancelled;

}
-(void)cancel;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)_fetchNextBatch;
-(void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2 ;
-(void)_setMessageTimerForSeqno:(unsigned long long)arg1 ;
-(void)_sendSyncStart;
-(void)_setStateQuietly:(long long)arg1 ;
-(void)_notifySessionComplete;
-(void)_sendSyncCompleteAndRunBlock:(/*^block*/id)arg1 ;
-(void)_sendSyncCancelled;
-(void)_sendSyncRestart;
-(void)_sessionComplete;
-(void)_processNextState;
-(void)_installStateListener;
-(void)_installTimers;
-(BOOL)_handleBatchAck:(id)arg1 error:(id*)arg2 ;
-(BOOL)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2 ;
-(void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)protocolVersion;
-(void)_handleError:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)isSending;
-(BOOL)isResetSync;
-(BOOL)wasCancelled;
@end

