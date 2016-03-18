/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUNowPlayingVideoViewController.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>

@protocol OS_dispatch_source, MusicNowPlayingVideoViewControllerDelegate;
@class MPVideoPlaybackOverlayView, NSObject, NSString;

@interface MusicNowPlayingVideoViewController : MPUNowPlayingVideoViewController <MPVideoOverlayDelegate> {

	MPVideoPlaybackOverlayView* _videoOverlayView;
	NSObject*<OS_dispatch_source> _videoOverlayViewIdleTimer;
	id<MusicNowPlayingVideoViewControllerDelegate> _videoViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<MusicNowPlayingVideoViewControllerDelegate> videoViewControllerDelegate;              //@synthesize videoViewControllerDelegate=_videoViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)videoOverlayView;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(long long)arg2 ;
-(void)setPlayer:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)setItem:(id)arg1 ;
-(void)setVideoViewControllerDelegate:(id<MusicNowPlayingVideoViewControllerDelegate>)arg1 ;
-(void)_startIdleTimer:(double)arg1 ;
-(void)_cancelIdleTimer;
-(id<MusicNowPlayingVideoViewControllerDelegate>)videoViewControllerDelegate;
@end

