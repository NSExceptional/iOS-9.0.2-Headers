/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol AAUIAccountRepairRemoteUIDelegate;
@class UINavigationController, UIViewController, RUILoader, NSMutableArray, ACAccount, ACAccountStore, UIAlertView, NSString, NSDictionary;

@interface AAUIAccountRepairRemoteUI : NSObject <RUIObjectModelDelegate> {

	UINavigationController* _parentNavController;
	UIViewController* _originatingViewController;
	UINavigationController* _accountRepairUIViewController;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	BOOL _isModal;
	UIAlertView* _tcConfirmationAlert;
	NSString* _agreeURL;
	/*^block*/id _linkLoadCompletion;
	NSDictionary* _cookieHeadersForRepairRequest;
	id<AAUIAccountRepairRemoteUIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIAccountRepairRemoteUIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 inStore:(id)arg2 ;
-(void)presentFromViewController:(id)arg1 modal:(BOOL)arg2 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<AAUIAccountRepairRemoteUIDelegate>)arg1 ;
-(id<AAUIAccountRepairRemoteUIDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_cleanUpAndDismissWithSuccess:(BOOL)arg1 ;
-(void)_cleanupRUILoader;
-(void)useCookieHeadersForInitialRequest:(id)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

