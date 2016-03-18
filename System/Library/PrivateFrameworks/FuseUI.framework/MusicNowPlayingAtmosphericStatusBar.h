/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MusicStatusBar, MPUPinningView, MusicNowPlayingAtmosphericEffectView, NSString;

@interface MusicNowPlayingAtmosphericStatusBar : UIView {

	UIView* _containerView;
	MusicStatusBar* _statusBar;
	MPUPinningView* _atmosphericContentView;
	MusicNowPlayingAtmosphericEffectView* _effectView;

}

@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) MPUPinningView * atmosphericContentView;                                    //@synthesize atmosphericContentView=_atmosphericContentView - In the implementation block
@property (assign,nonatomic,__weak) id<MusicNowPlayingAtmosphericStatusBarDelegate> delegate; 
@property (nonatomic,retain) MusicNowPlayingAtmosphericEffectView * effectView;                            //@synthesize effectView=_effectView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MusicNowPlayingAtmosphericStatusBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MusicNowPlayingAtmosphericStatusBarDelegate>)delegate;
-(void)setEffect:(long long)arg1 ;
-(MusicNowPlayingAtmosphericEffectView *)effectView;
-(void)setEffectView:(MusicNowPlayingAtmosphericEffectView *)arg1 ;
-(long long)effect;
-(MPUPinningView *)atmosphericContentView;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

