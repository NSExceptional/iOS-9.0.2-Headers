/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicNoContentViewDelegate;
@class UIButton, _UIBackdropView, UIImage, UIView, UILabel, NSString;

@interface MusicNoContentView : UIView {

	UIButton* _actionButton;
	_UIBackdropView* _backdropView;
	UIImage* _buttonBackgroundImage;
	UIView* _containerView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;
	id<MusicNoContentViewDelegate> _delegate;
	NSString* _title;
	NSString* _message;
	NSString* _buttonTitle;

}

@property (assign,nonatomic,__weak) id<MusicNoContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
+(void)_beginApplicationTranslucency;
+(void)_endApplicationTranslucency;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MusicNoContentViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<MusicNoContentViewDelegate>)delegate;
-(NSString *)title;
-(NSString *)message;
-(id)_titleLabel;
-(void)setMessage:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)_actionButton;
-(id)_messageLabel;
-(void)_actionButtonTapped:(id)arg1 ;
-(id)_baseTextColor;
-(id)_buttonBackgroundImage;
@end

