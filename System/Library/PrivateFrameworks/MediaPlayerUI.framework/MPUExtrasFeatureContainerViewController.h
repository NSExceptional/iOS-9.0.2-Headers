/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPUExtrasVideoPlaybackViewController;
@class UIViewController, NSLayoutConstraint, MPUExtrasContext, UIView;

@interface MPUExtrasFeatureContainerViewController : UIViewController {

	UIViewController*<MPUExtrasVideoPlaybackViewController> _videoPlaybackViewController;
	NSLayoutConstraint* _overlayViewAdjustmentConstraint;
	MPUExtrasContext* _context;
	UIView* _menuBarView;
	double _collectionViewHeight;

}

@property (nonatomic,__weak,readonly) MPUExtrasContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController * videoPlaybackViewController;              //@synthesize videoPlaybackViewController=_videoPlaybackViewController - In the implementation block
@property (assign,nonatomic,__weak) UIView * menuBarView;                                 //@synthesize menuBarView=_menuBarView - In the implementation block
@property (assign,nonatomic) double collectionViewHeight;                                 //@synthesize collectionViewHeight=_collectionViewHeight - In the implementation block
-(void)dealloc;
-(MPUExtrasContext *)context;
-(void)viewDidLoad;
-(id)initWithContext:(id)arg1 ;
-(UIView *)menuBarView;
-(void)setVideoPlaybackViewController:(UIViewController *)arg1 ;
-(double)collectionViewHeight;
-(void)setMenuBarView:(UIView *)arg1 ;
-(void)setCollectionViewHeight:(double)arg1 ;
-(void)_menuBarHeightChange:(id)arg1 ;
-(UIViewController *)videoPlaybackViewController;
@end

