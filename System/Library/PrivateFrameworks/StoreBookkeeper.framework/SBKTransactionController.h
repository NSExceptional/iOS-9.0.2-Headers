/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@protocol SBKTransactionControllerDelegate, OS_dispatch_queue;
@class NSString, NSURL, SBKStoreAuthenticationController, SBKTransaction, SSAccount, NSObject, NSOperationQueue, NSMutableArray, SBKTaskAssertion;

@interface SBKTransactionController : NSObject <ISStoreURLOperationDelegate> {

	BOOL _enabled;
	BOOL _shouldAuthenticateIfNecessary;
	BOOL _isResolvingError;
	id<SBKTransactionControllerDelegate> _delegate;
	NSString* _domain;
	NSURL* _requestURL;
	SBKStoreAuthenticationController* _authenticationController;
	SBKTransaction* _currentTransaction;
	SSAccount* _account;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _pendingTransactions;
	SBKTaskAssertion* _backgroundTaskAssertion;
	id _networkTypeObserver;
	long long _conflictResolutionAttempts;

}

@property (__weak) id<SBKTransactionControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
@property (readonly) NSURL * requestURL;                                                     //@synthesize requestURL=_requestURL - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (getter=isIdle,readonly) BOOL idle; 
@property (retain) SBKStoreAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (assign) BOOL shouldAuthenticateIfNecessary;                                       //@synthesize shouldAuthenticateIfNecessary=_shouldAuthenticateIfNecessary - In the implementation block
@property (nonatomic,retain) SBKTransaction * currentTransaction;                            //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (retain) SSAccount * account;                                                      //@synthesize account=_account - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (retain) NSOperationQueue * operationQueue;                                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (retain) NSMutableArray * pendingTransactions;                                     //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (assign) BOOL isResolvingError;                                                    //@synthesize isResolvingError=_isResolvingError - In the implementation block
@property (retain) SBKTaskAssertion * backgroundTaskAssertion;                               //@synthesize backgroundTaskAssertion=_backgroundTaskAssertion - In the implementation block
@property (__weak) id networkTypeObserver;                                                   //@synthesize networkTypeObserver=_networkTypeObserver - In the implementation block
@property (assign) long long conflictResolutionAttempts;                                     //@synthesize conflictResolutionAttempts=_conflictResolutionAttempts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)pendingTransactions;
-(void)_endBackgroundTask;
-(void)setDomain:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<SBKTransactionControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBKTransactionControllerDelegate>)delegate;
-(NSString *)domain;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(SBKStoreAuthenticationController *)authenticationController;
-(NSURL *)requestURL;
-(void)_onQueue_endBackgroundTask;
-(id)_onQueue_clampsController;
-(void)_onQueue_processPendingTransactions;
-(void)_onQueue_cancelAllPendingTransactions:(id)arg1 ;
-(BOOL)_onQueue_isIdle;
-(void)scheduleTransaction:(id)arg1 ;
-(BOOL)_delegateShouldScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_onQueue_scheduleTransaction:(id)arg1 isRetry:(BOOL)arg2 ;
-(void)_onQueue_transactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_cancelTransaction:(id)arg1 error:(id)arg2 ;
-(void)_storeOperationDidComplete:(id)arg1 ;
-(void)_onQueue_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_onQueue_beginBackgroundTask;
-(SBKTaskAssertion *)backgroundTaskAssertion;
-(void)_onQueue_transactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_processCurrentTransaction;
-(BOOL)_onQueue_authenticationCanProcessTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_enqueueStoreOperation:(id)arg1 ;
-(BOOL)_onQueue_canScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_onQueue_addPendingTransaction:(id)arg1 ;
-(BOOL)_onQueue_isEnabledForTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_onQueue_assertIsTransactionValid:(id)arg1 error:(id*)arg2 ;
-(BOOL)_onQueue_clampsCanScheduleTransaction:(id)arg1 error:(id*)arg2 ;
-(void)_delegateTransactionDidFinish:(id)arg1 ;
-(BOOL)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2 ;
-(void)_resolveError:(id)arg1 resolution:(int)arg2 ;
-(void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2 ;
-(void)_onQueue_currentTransactionDidFinish;
-(void)_processDataInResponse:(id)arg1 ;
-(BOOL)shouldAuthenticateIfNecessary;
-(void)_onQueue_performRetryErrorHandlingForError:(id)arg1 ;
-(void)_onQueue_performCancelErrorHandlingForError:(id)arg1 ;
-(void)_onQueue_performDefaultErrorHandlingForError:(id)arg1 ;
-(BOOL)_sendFinishedBlockForTransaction:(id)arg1 success:(BOOL)arg2 cancelled:(BOOL)arg3 error:(id)arg4 handledAsFinishedBlock:(BOOL*)arg5 ;
-(void)_onQueue_processOperationOutput:(id)arg1 operation:(id)arg2 operationAuthenticated:(BOOL)arg3 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(void)scheduleTransaction:(id)arg1 withTransactionFinishedBlock:(/*^block*/id)arg2 ;
-(void)cancelScheduledTransaction:(id)arg1 ;
-(void)cancelAllTransactions;
-(void)cancelAllTransactionsCancelCode:(long long)arg1 ;
-(void)setAuthenticationController:(SBKStoreAuthenticationController *)arg1 ;
-(void)setShouldAuthenticateIfNecessary:(BOOL)arg1 ;
-(SBKTransaction *)currentTransaction;
-(void)setCurrentTransaction:(SBKTransaction *)arg1 ;
-(BOOL)isResolvingError;
-(void)setIsResolvingError:(BOOL)arg1 ;
-(void)setBackgroundTaskAssertion:(SBKTaskAssertion *)arg1 ;
-(id)networkTypeObserver;
-(void)setNetworkTypeObserver:(id)arg1 ;
-(long long)conflictResolutionAttempts;
-(void)setConflictResolutionAttempts:(long long)arg1 ;
-(BOOL)isIdle;
-(void)setAccount:(SSAccount *)arg1 ;
-(SSAccount *)account;
-(void)_beginBackgroundTask;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
@end

