/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <IMCore/IMLocationManager.h>
@class CLLocation, NSError;


@protocol IMLocationManager <NSObject>
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
@property (nonatomic,retain,readonly) CLLocation * location; 
@property (nonatomic,retain,readonly) NSError * error; 
@required
-(NSError *)error;
-(CLLocation *)location;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1;
-(BOOL)locationAuthorizationDenied;

@end


@class CLLocation, NSError, CLLocationManager, NSMutableArray, NSTimer, NSDate, NSString;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager> {

	CLLocationManager* _locationManager;
	NSMutableArray* _handlers;
	NSTimer* _timeoutHandler;
	CLLocation* _location;
	NSError* _error;
	NSDate* _locateStartTime;
	NSTimer* _locationUpdateTimer;

}

@property (nonatomic,retain) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSTimer * locationUpdateTimer;                    //@synthesize locationUpdateTimer=_locationUpdateTimer - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;                        //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,retain) NSDate * locateStartTime;                         //@synthesize locateStartTime=_locateStartTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL locationAuthorizationDenied; 
+(id)sharedInstance;
+(Class)__CLLocationManagerClass;
+(id)locationShifter;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)handlers;
-(NSError *)error;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)startUpdatingCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(BOOL)locationAuthorizationDenied;
-(NSTimer *)locationUpdateTimer;
-(void)setLocationUpdateTimer:(NSTimer *)arg1 ;
-(void)setLocateStartTime:(NSDate *)arg1 ;
-(void)_locationUpdateTimerFired:(id)arg1 ;
-(void)_fireCompletionHandlers;
-(void)_locationManagerTimedOut;
-(NSDate *)locateStartTime;
-(void)shiftedLocationWithLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setError:(NSError *)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

