/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScreen, _UIHostedWindow, UISnapshotView, QLPreviewViewController, NSTimer;

@interface QLAirPlayController : NSObject {

	int _mode;
	UIScreen* _screen;
	_UIHostedWindow* _airPlayWindow;
	UISnapshotView* _snapshotView;
	QLPreviewViewController* _previewViewController;
	NSTimer* _refreshTimer;

}

@property (retain) QLPreviewViewController * previewViewController; 
@property (retain) UIScreen * screen; 
@property (assign) int mode; 
-(void)updateGeometryForPreviewViewController:(id)arg1 ;
-(QLPreviewViewController *)previewViewController;
-(void)setPreviewViewController:(QLPreviewViewController *)arg1 ;
-(void)refreshSnapshot;
-(void)_stopUsingPreviewController;
-(void)_startUsingPreviewController;
-(void)_updateWindowSize;
-(void)_createAirPlayWindowIfNeeded;
-(void)_removeAirPlayWindow;
-(double)_screenAspectRatioForPreviewViewController:(id)arg1 ;
-(double)_screenScaleFactorForPreviewViewController:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)update;
@end

