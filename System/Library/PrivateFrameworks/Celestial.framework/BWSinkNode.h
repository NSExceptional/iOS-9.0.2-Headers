/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode {

	FigStateMachine* _stateMachine;
	int _stateLock;
	NSMutableArray* _handlersToCallWhenIdle;
	NSMutableArray* _handlersToCallWhenActive;
	OpaqueFigSimpleMutexRef _configurationHandlerLock;
	long long _liveConfigurationID;
	NSMutableArray* _configurationLiveHandlers;
	NSMutableArray* _configurationLiveIDs;

}

@property (readonly) NSString * currentStateDebugString; 
@property (readonly) long long liveConfigurationID; 
+(void)initialize;
-(void)addOutput:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(long long)liveConfigurationID;
-(void)_setupSinkNodeStateMachine;
-(void)notifyWhenActive:(/*^block*/id)arg1 ;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
-(void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(/*^block*/id)arg2 ;
-(NSString *)currentStateDebugString;
@end

