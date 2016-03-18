/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>

@class UILabel, UIView;

@interface MFComposeFromView : MFComposeHeaderView {

	UILabel* _accountLabel;
	UIView* _background;
	BOOL _accountHasUnsafeDomain;

}

@property (assign,nonatomic) BOOL accountHasUnsafeDomain;              //@synthesize accountHasUnsafeDomain=_accountHasUnsafeDomain - In the implementation block
-(void)setAccountLabel:(id)arg1 ;
-(void)setLabelHighlighted:(BOOL)arg1 ;
-(CGRect)accountLabelRect;
-(void)setAccountHasUnsafeDomain:(BOOL)arg1 ;
-(id)_accountLabel;
-(void)_setBackgroundVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)accountHasUnsafeDomain;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
@end
