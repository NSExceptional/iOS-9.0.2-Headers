/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentSetupFieldCell.h>

@class UIButton;

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	BOOL _showsCameraCaptureButton;
	UIButton* _cameraCaptureButton;

}

@property (assign,nonatomic) BOOL showsCameraCaptureButton;                        //@synthesize showsCameraCaptureButton=_showsCameraCaptureButton - In the implementation block
@property (nonatomic,retain,readonly) UIButton * cameraCaptureButton;              //@synthesize cameraCaptureButton=_cameraCaptureButton - In the implementation block
-(void)setShowsCameraCaptureButton:(BOOL)arg1 ;
-(UIButton *)cameraCaptureButton;
-(void)setPaymentSetupField:(id)arg1 ;
-(BOOL)showsCameraCaptureButton;
-(void)dealloc;
-(id)init;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
@end

