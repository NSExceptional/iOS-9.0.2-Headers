/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface RTAuthorizationManager : RTNotifier <CLLocationManagerDelegate> {

	BOOL _supported;
	BOOL _enabled;
	BOOL _magicalMomentsLocationEnabled;
	CLLocationManager* _magicalMomentsLocationManager;

}

@property (assign,nonatomic) BOOL supported;                                                 //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) CLLocationManager * magicalMomentsLocationManager;              //@synthesize magicalMomentsLocationManager=_magicalMomentsLocationManager - In the implementation block
@property (assign,nonatomic) BOOL magicalMomentsLocationEnabled;                             //@synthesize magicalMomentsLocationEnabled=_magicalMomentsLocationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)fetchRoutineEnabledWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isLocationServicesEnabled;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)isCoreRoutineLocationClientEnabled;
-(void)_handleMagicalMomentsLocationAuthChange:(int)arg1 ;
-(BOOL)supported;
-(BOOL)magicalMomentsLocationEnabled;
-(void)setMagicalMomentsLocationEnabled:(BOOL)arg1 ;
-(void)fetchBBPluginSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)fetchMagicalMomentsLocationUsageEnabled:(/*^block*/id)arg1 ;
-(void)fetchRoutineSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)setRoutineEnabled:(BOOL)arg1 ;
-(void)updateRoutineEnabled:(BOOL)arg1 ;
-(void)handleAppResetChangeNotification;
-(CLLocationManager *)magicalMomentsLocationManager;
-(void)setMagicalMomentsLocationManager:(CLLocationManager *)arg1 ;
@end

