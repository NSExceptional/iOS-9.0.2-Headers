/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class SKUIRedeemTextField, SKUIRedeemCameraLandingView, UIView, UIScrollView, UIButton, UIImage, NSString;

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {

	id<SKUIRedeemCameraViewDelegate> _delegate;
	SKUIRedeemTextField* _inputAccessoryTextField;
	SKUIRedeemCameraLandingView* _landingView;
	UIView* _redeemerView;
	UIScrollView* _scrollView;
	UIButton* _termsButton;
	SKUIRedeemTextField* _textField;

}

@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<SKUIRedeemCameraViewDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(void)start;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)showKeyboard;
-(id)initWithClientContext:(id)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_landingButtonAction:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)_hideKeyboard;
-(void)keyboardDidChange:(id)arg1 ;
@end

