/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@protocol PKPaymentConfirmationAlertControllerDelegate;
@interface PKPaymentConfirmationAlertController : UIAlertController {

	long long _confirmationMethod;
	id<PKPaymentConfirmationAlertControllerDelegate> _delegate;

}

@property (nonatomic,readonly) long long confirmationMethod;                                         //@synthesize confirmationMethod=_confirmationMethod - In the implementation block
@property (assign,nonatomic) id<PKPaymentConfirmationAlertControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithConfirmationMethod:(long long)arg1 pass:(id)arg2 isPayment:(BOOL)arg3 ;
-(long long)confirmationMethod;
-(void)setDelegate:(id<PKPaymentConfirmationAlertControllerDelegate>)arg1 ;
-(id<PKPaymentConfirmationAlertControllerDelegate>)delegate;
@end

