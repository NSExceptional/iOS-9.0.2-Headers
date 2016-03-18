/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerVehicleDelegate.h>
#import <libobjc.A.dylib/MKLocationProvider.h>

@protocol MKLocationProviderDelegate;
@class NSBundle, NSString, CLLocationManager, NSLock;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider> {

	CLLocationManager* _clLocationManager;
	id<MKLocationProviderDelegate> _delegate;
	BOOL _locationServicesPreferencesDialogEnabled;
	int _authorizationStatus;
	NSBundle* _effectiveBundle;
	NSString* _effectiveBundleIdentifier;
	/*^block*/id _authorizationRequestBlock;
	BOOL _waitingForAuthorization;
	BOOL _hasQueriedAuthorization;
	NSLock* _authorizationLock;
	BOOL _alternate;

}

@property (nonatomic,readonly) CLLocationManager * _clLocationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL isSimulation; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
-(NSString *)effectiveBundleIdentifier;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(double)distanceFilter;
-(void)setAuthorizationRequestBlock:(id)arg1 ;
-(void)setEffectiveBundle:(NSBundle *)arg1 ;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(BOOL)usesCLMapCorrection;
-(void)stopUpdatingVehicleSpeed;
-(void)_resetForNewEffectiveBundle;
-(double)expectedGpsUpdateInterval;
-(void)setEffectiveBundleIdentifier:(NSString *)arg1 ;
-(void)startUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(int)headingOrientation;
-(double)desiredAccuracy;
-(double)timeScale;
-(BOOL)isTracePlayer;
-(BOOL)matchInfoEnabled;
-(void)stopUpdatingVehicleHeading;
-(BOOL)isSimulation;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)dismissHeadingCalibrationDisplay;
-(void)_createCLLocationManager;
-(CLLocationManager *)_clLocationManager;
-(void)setActivityType:(long long)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2 ;
-(id)authorizationRequestBlock;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2 ;
-(void)_updateAuthorizationStatus;
-(void)requestWhenInUseAuthorization;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setDelegate:(id<MKLocationProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MKLocationProviderDelegate>)delegate;
-(long long)activityType;
-(NSBundle *)effectiveBundle;
-(int)authorizationStatus;
-(void)startUpdatingHeading;
-(void)stopUpdatingHeading;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateHeading:(id)arg2 ;
-(BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end
