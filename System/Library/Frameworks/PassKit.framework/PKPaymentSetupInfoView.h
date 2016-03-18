/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, PKPaymentSetupPrivacyFooterView, UIActivityIndicatorView;

@interface PKPaymentSetupInfoView : UIView {

	UILabel* _bodyLabel;
	BOOL _requiresClearBackgroundColor;
	UIImageView* _logo;
	PKPaymentSetupPrivacyFooterView* _privacyFooter;
	long long _context;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIImageView * logo;                                           //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) PKPaymentSetupPrivacyFooterView * privacyFooter;              //@synthesize privacyFooter=_privacyFooter - In the implementation block
@property (assign,nonatomic) long long context;                                            //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL requiresClearBackgroundColor;                            //@synthesize requiresClearBackgroundColor=_requiresClearBackgroundColor - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(BOOL)isBuddyiPad;
-(void)setRequiresClearBackgroundColor:(BOOL)arg1 ;
-(PKPaymentSetupPrivacyFooterView *)privacyFooter;
-(id)_bodyFont;
-(void)setPrivacyFooter:(PKPaymentSetupPrivacyFooterView *)arg1 ;
-(BOOL)requiresClearBackgroundColor;
-(id)bodyLabel;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(void)setLogo:(UIImageView *)arg1 ;
-(UIImageView *)logo;
@end

