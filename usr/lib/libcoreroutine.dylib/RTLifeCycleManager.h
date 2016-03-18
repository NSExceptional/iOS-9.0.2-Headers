/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary;

@interface RTLifeCycleManager : NSObject {

	BOOL _activeTransaction;
	BOOL _exitWhenNoTransactions;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _signals;
	NSMutableDictionary* _transactions;
	NSMutableDictionary* _listeners;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * signals;                        //@synthesize signals=_signals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transactions;              //@synthesize transactions=_transactions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * listeners;                 //@synthesize listeners=_listeners - In the implementation block
@property (assign,nonatomic) BOOL activeTransaction;                          //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (assign,nonatomic) BOOL exitWhenNoTransactions;                     //@synthesize exitWhenNoTransactions=_exitWhenNoTransactions - In the implementation block
+(id)sharedInstance;
-(void)exit;
-(id)keyForObject:(id)arg1 ;
-(void)setTransactions:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)transactions;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(NSMutableDictionary *)listeners;
-(void)setListeners:(NSMutableDictionary *)arg1 ;
-(void)incrementTransactionsForObject:(id)arg1 ;
-(void)decrementTransactionsForObject:(id)arg1 ;
-(NSMutableArray *)signals;
-(id)createSourceForSignal:(int)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)processTransactions;
-(void)setActiveTransaction:(BOOL)arg1 ;
-(BOOL)exitWhenNoTransactions;
-(BOOL)activeTransaction;
-(void)setExitWhenNoTransactions:(BOOL)arg1 ;
-(void)setSignals:(NSMutableArray *)arg1 ;
@end

