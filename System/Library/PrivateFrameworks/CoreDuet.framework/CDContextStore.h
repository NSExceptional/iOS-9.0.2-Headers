/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface CDContextStore : NSObject {

	NSXPCConnection* _connection;
	BOOL _interrupted;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _waitForeverQueue;
	NSMutableDictionary* _registeredPredicates;

}
+(id)contextStore;
-(void)dealloc;
-(id)init;
-(id)stateForKey:(id)arg1 ;
-(void)deregisterHandlerForPredicateId:(long long)arg1 ;
-(void)set_interrupted:(BOOL)arg1 ;
-(void)set_invalidated:(BOOL)arg1 ;
-(void)initConnection;
-(id)stateForKeys:(id)arg1 ;
-(id)stateForKeysTreatingNilAsAll:(id)arg1 ;
-(id)clientIdentifierFromOptions:(id)arg1 ;
-(void)enableHandlerForPredicateId:(long long)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)deregisterHandlerForPredicateString:(id)arg1 withClientId:(id)arg2 ;
-(void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)cancelWaitForeverForPredicateString:(id)arg1 withOptions:(id)arg2 ;
-(BOOL)cancelWaitForeverForPredicateString:(id)arg1 ;
-(BOOL)registerKey:(id)arg1 withSettings:(id)arg2 ;
-(BOOL)setStringValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3 ;
-(BOOL)setIntegerValue:(long long)arg1 forKey:(id)arg2 withMetaData:(id)arg3 ;
-(id)stringValueForKey:(id)arg1 ;
-(long long)integerValueForKey:(id)arg1 ;
-(id)stateForAllKeys;
-(void)deregisterHandlerForPredicateString:(id)arg1 ;
-(void)waitForeverForPredicteString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)cancelWaitForeverForPredicteString:(id)arg1 ;
-(id)settingsForKey:(id)arg1 ;
-(void)waitForeverForPredicateString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)deregisterHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 ;
@end

