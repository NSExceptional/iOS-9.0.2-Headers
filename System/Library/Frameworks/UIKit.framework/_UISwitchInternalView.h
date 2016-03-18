/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UISwitchInternalViewProtocol.h>

@class UIColor, UIImage, UIImageView, UIView, CALayer, NSString;

@interface _UISwitchInternalView : UIView <_UISwitchInternalViewProtocol> {

	UIImage* _colorMask;
	UIImage* _shapeMask;
	UIImage* _shapeShadow;
	UIImage* _thumb;
	UIImage* _thumbPressed;
	double _position;
	BOOL _pressed;
	UIImageView* _colorView;
	UIImageView* _thumbView;
	UIImageView* _labelView;
	UIColor* _onTintColor;
	UIColor* _tintColor;
	UIColor* _thumbTintColor;
	UIColor* _nonAlternateColor;
	UIImage* _onImage;
	UIImage* _offImage;
	BOOL _on;
	BOOL _sendAction;
	BOOL _useAlternateColor;
	BOOL _animating;
	UIImageView* _idleImageView;
	UIView* _interactiveView;
	CALayer* _backgroundLayer;

}

@property (nonatomic,retain) UIColor * onTintColor;                 //@synthesize onTintColor=_onTintColor - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                   //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * thumbTintColor;              //@synthesize thumbTintColor=_thumbTintColor - In the implementation block
@property (nonatomic,retain) UIImage * onImage; 
@property (nonatomic,retain) UIImage * offImage; 
@property (assign,nonatomic) BOOL on;                               //@synthesize on=_on - In the implementation block
@property (assign,nonatomic) BOOL useAlternateColor;                //@synthesize useAlternateColor=_useAlternateColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_defaultOnTintColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setThumbTintColor:(UIColor *)arg1 ;
-(UIColor *)thumbTintColor;
-(void)_setPressed:(BOOL)arg1 ;
-(void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3 ;
-(id)_labelImage;
-(id)_colorImage;
-(void)_cleanUpAfterAnimating;
-(void)_setOnTintColor:(id)arg1 ;
-(void)_setupThumbImages;
-(void)_setupBackgroundLayer;
-(void)_buildControl;
-(id)_snapshotImage;
-(void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_setProgress:(double)arg1 animated:(BOOL)arg2 withDuration:(double)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5 ;
-(void)_sendActions;
-(void)_setProgress:(double)arg1 ;
-(void)_prepareForInteraction;
-(void)setSendAction:(BOOL)arg1 ;
-(void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(UIColor *)onTintColor;
-(void)setOnTintColor:(UIColor *)arg1 ;
-(UIImage *)onImage;
-(void)setOnImage:(UIImage *)arg1 ;
-(UIImage *)offImage;
-(void)setOffImage:(UIImage *)arg1 ;
-(BOOL)on;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)useAlternateColor;
-(void)setUseAlternateColor:(BOOL)arg1 ;
-(BOOL)sendAction;
@end

