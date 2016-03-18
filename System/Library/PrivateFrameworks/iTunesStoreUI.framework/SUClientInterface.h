/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegatePrivate, OS_dispatch_queue;
@class NSString, SUUIAppearance, UIColor, NSObject, SUPurchaseManager, SUQueueSessionManager, NSMutableDictionary, SUViewControllerFactory, SUPreviewOverlayViewController, SUTabBarController;

@interface SUClientInterface : NSObject {

	NSString* _askToBuyApprovalPrompt;
	SUUIAppearance* _appearance;
	BOOL _inAskToBuyApprovalFlow;
	NSString* _clientIdentifier;
	UIColor* _darkKeyColor;
	id<SUClientInterfaceDelegatePrivate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _ignoresExpectedClientsProtocol;
	UIColor* _lightKeyColor;
	NSString* _localStoragePath;
	SUPurchaseManager* _purchaseManager;
	SUQueueSessionManager* _queueSessionManager;
	NSMutableDictionary* _urlBagKeys;
	NSString* _userAgent;
	SUViewControllerFactory* _viewControllerFactory;
	BOOL _wasLaunchedFromLibrary;
	BOOL inAskToBuyApprovalFlow;

}

@property (copy) NSString * clientIdentifier; 
@property (assign,nonatomic) id<SUClientInterfaceDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (copy) SUUIAppearance * appearance; 
@property (copy) NSString * localStoragePath; 
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlay; 
@property (retain) SUPurchaseManager * purchaseManager; 
@property (retain) SUQueueSessionManager * queueSessionManager; 
@property (nonatomic,readonly) SUTabBarController * tabBarController; 
@property (copy) NSString * userAgent; 
@property (retain) SUViewControllerFactory * viewControllerFactory;                                                                              //@synthesize viewControllerFactory=_viewControllerFactory - In the implementation block
@property (assign) BOOL wasLaunchedFromLibrary; 
@property (assign) BOOL inAskToBuyApprovalFlow; 
@property (nonatomic,copy) NSString * askToBuyApprovalPrompt;                                                                                    //@synthesize askToBuyApprovalPrompt=_askToBuyApprovalPrompt - In the implementation block
@property (nonatomic,copy) UIColor * darkKeyColor;                                                                                               //@synthesize darkKeyColor=_darkKeyColor - In the implementation block
@property (nonatomic,copy) UIColor * lightKeyColor;                                                                                              //@synthesize lightKeyColor=_lightKeyColor - In the implementation block
@property (setter=_setIgnoresExpectedClientsProtocol:,getter=_ignoresExpectedClientsProtocol) BOOL _ignoresExpectedClientsProtocol; 
-(void)setDelegate:(id<SUClientInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SUClientInterfaceDelegate>)delegate;
-(SUUIAppearance *)appearance;
-(SUTabBarController *)tabBarController;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setDarkKeyColor:(UIColor *)arg1 ;
-(void)setLightKeyColor:(UIColor *)arg1 ;
-(void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)URLBagKeyForIdentifier:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(void)setInAskToBuyApprovalFlow:(BOOL)arg1 ;
-(void)setAskToBuyApprovalPrompt:(NSString *)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(void)setViewControllerFactory:(SUViewControllerFactory *)arg1 ;
-(NSString *)clientIdentifier;
-(SUViewControllerFactory *)viewControllerFactory;
-(UIColor *)darkKeyColor;
-(UIColor *)lightKeyColor;
-(void)_hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(void)_dispatchXEvent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentDialog:(id)arg1 ;
-(BOOL)inAskToBuyApprovalFlow;
-(NSString *)askToBuyApprovalPrompt;
-(SUPreviewOverlayViewController *)previewOverlay;
-(void)_exitStoreWithReason:(long long)arg1 ;
-(void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2 ;
-(BOOL)_ignoresExpectedClientsProtocol;
-(id)_newScriptInterface;
-(SUQueueSessionManager *)queueSessionManager;
-(void)setQueueSessionManager:(SUQueueSessionManager *)arg1 ;
-(NSString *)localStoragePath;
-(void)setLocalStoragePath:(NSString *)arg1 ;
-(SUPurchaseManager *)purchaseManager;
-(id)_newUIAlertView;
-(void)_dismissViewControllerFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3 ;
-(void)_returnToLibrary;
-(void)_setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(void)_setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)wasLaunchedFromLibrary;
-(void)_setIgnoresExpectedClientsProtocol:(BOOL)arg1 ;
-(void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAppearance:(SUUIAppearance *)arg1 ;
-(void)setWasLaunchedFromLibrary:(BOOL)arg1 ;
@end

