/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBackdropView.h>

@class UIImageView, _UIBackdropView;

@interface UICalloutBarBackground : _UIBackdropView {

	double m_dividerOffsets[24];
	UIImageView* _blurMaskView;
	UIImageView* _tintMaskView;
	_UIBackdropView* _separatorView;
	CGRect _highlightRect;

}

@property (nonatomic,retain) UIImageView * blurMaskView;                   //@synthesize blurMaskView=_blurMaskView - In the implementation block
@property (nonatomic,retain) UIImageView * tintMaskView;                   //@synthesize tintMaskView=_tintMaskView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * separatorView;              //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic) CGRect highlightRect;                         //@synthesize highlightRect=_highlightRect - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(_UIBackdropView *)separatorView;
-(void)setSeparatorView:(_UIBackdropView *)arg1 ;
-(CGRect)highlightRect;
-(void)setHighlightRect:(CGRect)arg1 ;
-(void)setDividerOffsets:(double*)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forFrame:(CGRect)arg2 ;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(UIImageView *)blurMaskView;
-(void)setBlurMaskView:(UIImageView *)arg1 ;
-(UIImageView *)tintMaskView;
-(void)setTintMaskView:(UIImageView *)arg1 ;
@end

