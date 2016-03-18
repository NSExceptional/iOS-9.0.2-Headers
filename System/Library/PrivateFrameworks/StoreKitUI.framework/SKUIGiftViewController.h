/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol SKUIGiftViewControllerDelegate;
@class SKUIClientContext, SKUIGift, SKUIGiftConfiguration, NSOperationQueue, UIViewController, SKUIGiftComposeViewController;

@interface SKUIGiftViewController : UINavigationController {

	SKUIClientContext* _clientContext;
	SKUIGift* _gift;
	id<SKUIGiftViewControllerDelegate> _giftDelegate;
	SKUIGiftConfiguration* _giftConfiguration;
	NSOperationQueue* _operationQueue;
	long long _initialBarStyle;
	UIViewController* _placeholderViewController;
	SKUIGiftComposeViewController* _rootViewController;

}

@property (nonatomic,copy,readonly) SKUIGift * gift;                                              //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                   //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIGiftViewControllerDelegate> giftDelegate;              //@synthesize giftDelegate=_giftDelegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                   //@synthesize operationQueue=_operationQueue - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)_localizedString:(id)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(void)_loadGiftConfiguration;
-(void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_finishGiftingWithResult:(BOOL)arg1 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2 ;
-(id)initWithGift:(id)arg1 ;
-(SKUIGift *)gift;
-(id<SKUIGiftViewControllerDelegate>)giftDelegate;
-(void)setGiftDelegate:(id<SKUIGiftViewControllerDelegate>)arg1 ;
@end

