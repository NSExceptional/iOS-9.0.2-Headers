/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/MPUSystemMediaControlsDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class MPUSystemMediaControlsViewController, NSString;

@interface NowPlayingArtPluginController : SBAwayViewPluginController <MPUSystemMediaControlsDelegate, SBLockScreenBundleController> {

	MPUSystemMediaControlsViewController* _systemMediaController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)showDateView;
-(/*^block*/id)_disableTransitionBlock;
-(/*^block*/id)enableTransitionBlock;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)shouldDisableOnUnlock;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)wantsAutomaticFullscreenTimer;
-(BOOL)_tapHandler:(id)arg1 ;
@end

