/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapViewDelegate <NSObject>
@optional
-(void)mapLayerDidStartLoadingTiles:(id)arg1;
-(void)mapLayerDidFinishInitialTrackingAnimation:(id)arg1;
-(void)mapLayer:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)mapLayerDidReloadStylesheet:(id)arg1;
-(void)mapLayerDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
-(void)mapLayerDidBecomePartiallyDrawn:(id)arg1;
-(void)mapLayerDidFinishLoadingTiles:(id)arg1;
-(void)mapLayerDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
-(void)mapLayerDidDraw:(id)arg1;
-(void)mapLayerDidChangeVisibleRegion:(id)arg1;
-(void)mapLayer:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(id)mapLayer:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)mapLayer:(id)arg1 annotationMarker:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
-(id)mapLayer:(id)arg1 painterForOverlay:(id)arg2;
-(void)mapLayer:(id)arg1 didFinishChangingMapDisplayStyle:(SCD_Struct_MK4)arg2;
-(void)mapLayerLabelsDidLayout:(id)arg1;
-(void)mapLayer:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
-(void)mapLayer:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
-(void)mapLayer:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapLayerWillStartFlyoverTour:(id)arg1;
-(void)mapLayer:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)mapLayer:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapLayer:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
-(void)mapLayer:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
-(void)mapLayer:(id)arg1 flyoverModeWillChange:(int)arg2;

@end

