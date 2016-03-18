/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface CAMPowerController : NSObject {

	BOOL __isBackgrounded;
	int __assertionIdentifierGenerator;
	NSMutableDictionary* __assertionsByIdentifier;
	NSObject*<OS_dispatch_queue> __assertionsQueue;
	unsigned long long __backgroundTaskIdentifier;

}

@property (nonatomic,readonly) int _assertionIdentifierGenerator;                                               //@synthesize _assertionIdentifierGenerator=__assertionIdentifierGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _assertionsByIdentifier;                                   //@synthesize _assertionsByIdentifier=__assertionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _assertionsQueue;                                   //@synthesize _assertionsQueue=__assertionsQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long _backgroundTaskIdentifier;                                    //@synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier - In the implementation block
@property (assign,setter=_setBackgrounded:,getter=_isBackgrounded,nonatomic) BOOL _isBackgrounded;              //@synthesize _isBackgrounded=__isBackgrounded - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(NSMutableDictionary *)_assertionsByIdentifier;
-(unsigned long long)_backgroundTaskIdentifier;
-(BOOL)_isBackgrounded;
-(NSObject*<OS_dispatch_queue>)_assertionsQueue;
-(void)_setBackgrounded:(BOOL)arg1 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(unsigned)generateAssertionIdentifier;
-(void)addAssertionForIndentifier:(unsigned)arg1 withReason:(unsigned short)arg2 ;
-(void)removeAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned short)arg2 ;
-(int)_assertionIdentifierGenerator;
@end

