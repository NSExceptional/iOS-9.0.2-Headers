/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class SKUIShapeView, UIImageView;

@interface SKUIPreviewProgressIndicator : UIControl {

	SKUIShapeView* _backgroundView;
	UIImageView* _cancelImageView;
	SKUIShapeView* _foregroundView;
	BOOL _isIndeterminate;
	float _progress;

}

@property (getter=isIndeterminate,nonatomic,readonly) BOOL indeterminate;              //@synthesize isIndeterminate=_isIndeterminate - In the implementation block
@property (assign,nonatomic) float progress;                                           //@synthesize progress=_progress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(BOOL)isIndeterminate;
-(void)reloadWithPlayerStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)beginIndeterminateAnimation;
-(void)_beginIndeterminateAnimation;
-(void)endIndeterminateAnimation;
-(id)_newShapeViewWithBounds:(CGRect)arg1 lineWidth:(double)arg2 ;
@end

