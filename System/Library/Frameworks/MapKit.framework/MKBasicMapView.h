/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, VKMapView;

@interface MKBasicMapView : UIView {

	UIView* _hostView;
	VKMapView* _mapView;
	double _mapModeStartTime;
	double _trafficStartTime;
	BOOL _changingViewSize;

}

@property (nonatomic,readonly) VKMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) BOOL rendersInBackground; 
@property (assign,nonatomic) double mapModeStartTime;                                        //@synthesize mapModeStartTime=_mapModeStartTime - In the implementation block
@property (assign,nonatomic) double trafficStartTime;                                        //@synthesize trafficStartTime=_trafficStartTime - In the implementation block
@property (getter=isChangingViewSize,nonatomic,readonly) BOOL changingViewSize;              //@synthesize changingViewSize=_changingViewSize - In the implementation block
-(void)setRendersInBackground:(BOOL)arg1 ;
-(BOOL)rendersInBackground;
-(SCD_Struct_MK1)convertPoint:(CGPoint)arg1 toCoordinateFromView:(id)arg2 ;
-(CGPoint)convertCoordinate:(SCD_Struct_MK1)arg1 toPointToView:(id)arg2 ;
-(void)setMapModeStartTime:(double)arg1 ;
-(double)trafficStartTime;
-(double)mapModeStartTime;
-(void)addCalloutSubview:(id)arg1 ;
-(CGSize)calloutContainerCanvasSize;
-(void)_updateMapViewHidden;
-(CGPoint)convertCoordinate:(SCD_Struct_MK1)arg1 toCameraModelPointToView:(id)arg2 ;
-(void)_enterBackground:(id)arg1 ;
-(void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andGlobe:(BOOL)arg2 shouldRasterize:(BOOL)arg3 ;
-(void)updateStatsForSwitchingToMapType:(long long)arg1 ;
-(BOOL)isChangingViewSize;
-(void)_updateStatsForTrafficEnabledTime:(BOOL)arg1 ;
-(BOOL)isPointValidForGesturing:(CGPoint)arg1 ;
-(void)updateStatsForTrafficEnabledTime;
-(void)setTrafficStartTime:(double)arg1 ;
-(void)_enterForeground:(id)arg1 ;
-(void)_animateCanvasForBounds:(CGRect)arg1 ;
-(void)updateStatsForEnablingTraffic:(BOOL)arg1 ;
-(void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg1 ignoreIfViewInWindow:(BOOL)arg2 ;
-(double)calloutContainerCanvasScale;
-(void)_finishedSnapshot:(id)arg1 ;
-(void)_updateForCurrentScreen;
-(VKMapView *)mapView;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)willMoveToWindow:(id)arg1 ;
@end

