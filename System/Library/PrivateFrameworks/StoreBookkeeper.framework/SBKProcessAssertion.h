/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSProcessAssertion;

@interface SBKProcessAssertion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _expirationBlock;
	unsigned long long _identifier;
	BKSProcessAssertion* _bkProcessAssertion;
	id _expirationObserver;

}

@property (readonly) unsigned long long identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) BKSProcessAssertion * bkProcessAssertion;              //@synthesize bkProcessAssertion=_bkProcessAssertion - In the implementation block
@property (retain) id expirationObserver;                                 //@synthesize expirationObserver=_expirationObserver - In the implementation block
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned long long)identifier;
-(void)setBkProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/id)arg1 debugDescription:(id)arg2 ;
-(BKSProcessAssertion *)bkProcessAssertion;
-(id)expirationObserver;
-(void)_expireBackgroundTask;
@end

