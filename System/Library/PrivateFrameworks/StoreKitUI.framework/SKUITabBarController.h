/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITabBarController.h>
#import <libobjc.A.dylib/SKUIMoreNavigationControllerDelegate.h>

@class SKUIFloatingOverlayView, UIViewController, SKUITabBarBackgroundView, NSString;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {

	SKUIFloatingOverlayView* _floatingOverlayView;
	UIViewController* _floatingOverlayViewController;
	SKUITabBarBackgroundView* _tabBarBackgroundView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_moreNavigationControllerClass;
-(id)init;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_backdropGroupName;
-(id)moreNavigationController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectedViewController:(id)arg1 ;
-(void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)setTabBarBackdropStyle:(long long)arg1 ;
-(void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)floatingOverlayViewController;
-(void)_layoutFloatingOverlayView;
-(void)cancelTransientViewController:(id)arg1 ;
@end

