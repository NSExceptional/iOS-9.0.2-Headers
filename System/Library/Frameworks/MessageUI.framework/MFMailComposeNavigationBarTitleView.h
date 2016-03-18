/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface MFMailComposeNavigationBarTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * title; 
-(void)setSubtitleText:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(id)_subtitleTextColor;
-(double)_verticalOffsetForSubtitleWhenMini:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

