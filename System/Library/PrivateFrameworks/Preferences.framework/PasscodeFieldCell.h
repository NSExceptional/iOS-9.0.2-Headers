/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@protocol KeychainSyncPasscodeFieldDelegate;
@class PSPasscodeField, NSString;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	BOOL _convertsNumeralsToASCII;
	BOOL _denyFirstResponder;
	id<KeychainSyncPasscodeFieldDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncPasscodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL convertsNumeralsToASCII;                                       //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) BOOL denyFirstResponder;                                            //@synthesize denyFirstResponder=_denyFirstResponder - In the implementation block
@property (nonatomic,readonly) PSPasscodeField * passcodeField;                                  //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cellTapped:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(BOOL)becomeFirstResponder;
-(BOOL)hasText;
-(void)deleteBackward;
-(long long)keyboardType;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(PSPasscodeField *)passcodeField;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setConvertsNumeralsToASCII:(BOOL)arg1 ;
-(BOOL)denyFirstResponder;
-(BOOL)convertsNumeralsToASCII;
-(void)_setSecureTextEntry:(BOOL)arg1 ;
-(void)setPasscodeText:(id)arg1 ;
-(id)passcodeText;
-(void)setDenyFirstResponder:(BOOL)arg1 ;
@end

