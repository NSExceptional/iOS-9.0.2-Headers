/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftConfirmView, SKUIGiftPurchaseRequest, SKUIFocusedTouchGestureRecognizer;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {

	SKUIGiftConfirmView* _confirmView;
	BOOL _isShowingConfirmation;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	SKUIFocusedTouchGestureRecognizer* _touchRecognizer;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_termsButtonAction:(id)arg1 ;
-(void)_buyButtonAction:(id)arg1 ;
-(void)_purchaseGift;
-(void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(void)_cancelBuyConfirmation:(id)arg1 ;
-(void)_showSuccessPage;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
@end

