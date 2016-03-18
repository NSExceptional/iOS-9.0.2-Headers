/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, UNLocationMonitorDelegate;
@class NSString, CLLocationManager, NSObject;

@interface UNLocationMonitor : NSObject <CLLocationManagerDelegate> {

	NSString* _bundleIdentifier;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _queue;
	id<UNLocationMonitorDelegate> _delegate;

}

@property (assign,nonatomic) id<UNLocationMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1 ;
-(void)setDelegate:(id<UNLocationMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<UNLocationMonitorDelegate>)delegate;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)startMonitoringForRegion:(id)arg1 ;
-(void)stopMonitoringForRegion:(id)arg1 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
-(void)markAsHavingReceivedLocation;
-(void)_queue_markAsHavingReceivedLocation;
-(void)_queue_startMonitoringForRegion:(id)arg1 ;
-(void)_queue_stopMonitoringForRegion:(id)arg1 ;
-(void)_queue_didEnterRegion:(id)arg1 ;
-(void)_queue_didExitRegion:(id)arg1 ;
@end

