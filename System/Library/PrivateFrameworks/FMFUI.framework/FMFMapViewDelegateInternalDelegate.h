/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapViewDelegateInternalDelegate <NSObject>
@required
-(UIEdgeInsets*)edgeInsets;
-(BOOL)canSelectAnnotation:(id)arg1;
-(void)setShouldZoomToFitNewLocations:(BOOL)arg1;
-(id)_internalAnnotationTintColor;
-(BOOL)shouldZoomToFitMeAndLocations;
-(void)didSelectLocation:(id)arg1;
-(void)didDeselectLocation:(id)arg1;
-(void)regionWillChangeAnimated:(BOOL)arg1;
-(void)regionDidChangeAnimated:(BOOL)arg1;
-(void)reZoomToFit;
-(void)didUpdateUserLocation:(id)arg1;
-(void)mapViewDidFinishRenderingMap;
-(BOOL)viewWillAppearCalled;
-(BOOL)alwaysShowAccuracy;
-(id)annotationImageForAnnotation:(id)arg1 andHandle:(id)arg2;

@end

