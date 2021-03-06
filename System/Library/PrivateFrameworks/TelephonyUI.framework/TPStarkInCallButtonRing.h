/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TPStarkInCallButtonRing : UIView {

	BOOL _dimmed;
	BOOL _selected;
	BOOL _highlighted;
	BOOL _toggledOn;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                      //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                 //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL toggledOn;                   //@synthesize toggledOn=_toggledOn - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(BOOL)highlighted;
-(BOOL)selected;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(BOOL)toggledOn;
-(void)setToggledOn:(BOOL)arg1 ;
@end

