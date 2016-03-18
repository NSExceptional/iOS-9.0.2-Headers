/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationCalloutControllerDelegate <NSObject>
@optional
-(void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1;

@required
-(CGRect*)calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2;
-(void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(SCD_Struct_MK1)arg3 completionHandler:(/*^block*/id)arg4;
-(void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inCalloutController:(id)arg2;

@end
