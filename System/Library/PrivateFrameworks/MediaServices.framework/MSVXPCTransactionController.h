/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable;

@interface MSVXPCTransactionController : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _openTransactions;
	BOOL _inTransaction;
	NSObject*<OS_dispatch_source> _signalUSR2DispatchSource;

}

@property (getter=isInTransaction,nonatomic,readonly) BOOL inTransaction; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)activeTransactions;
-(BOOL)isInTransaction;
-(BOOL)isTransactionActive:(id)arg1 ;
-(void)addActiveTransaction:(id)arg1 ;
-(void)removeActiveTransaction:(id)arg1 ;
-(void)_setupSignalHandler;
-(void)_tearDownSignalHandler;
-(void)_onQueueUpdateInternalTransactionState;
-(void)_onQueueCleanupEndedTransactions;
-(void)_saveActiveTransactionsToFile;
@end

