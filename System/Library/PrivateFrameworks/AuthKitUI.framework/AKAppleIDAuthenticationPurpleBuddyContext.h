/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, UIViewController, UINavigationController, NSString;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {

	NSDictionary* _overrideFirstActionSignal;
	UIViewController* _topViewControllerOnLoadStart;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSString * usernameForCreating; 
@property (nonatomic,readonly) NSString * passwordForCreating; 
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(int*)arg3 ;
-(id)init;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)usernameForCreating;
-(NSString *)passwordForCreating;
@end

