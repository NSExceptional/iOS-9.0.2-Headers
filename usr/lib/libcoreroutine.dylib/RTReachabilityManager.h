/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTNotifier.h>

@interface RTReachabilityManager : RTNotifier {

	SCNetworkReachabilityRef _reachabilityRef;
	long long _currentReachability;

}

@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,readonly) long long currentReachability;                       //@synthesize currentReachability=_currentReachability - In the implementation block
+(id)sharedInstance;
+(long long)_processReachabilityChange:(unsigned)arg1 ;
+(id)reachabilityToString:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(long long)currentReachability;
-(void)setCurrentReachability:(long long)arg1 ;
-(void)fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(SCNetworkReachabilityRef)reachabilityRef;
-(BOOL)_getCurrentReachability:(unsigned*)arg1 ;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(id)currentReachabilityString;
-(void)_fetchCurrentReachability:(/*^block*/id)arg1 ;
-(void)processReachabilityChange:(unsigned)arg1 ;
@end

