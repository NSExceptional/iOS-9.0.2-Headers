/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableArray, NSString;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {

	NSMutableArray* _alerts;
	NSMutableArray* _dialogs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(void)presentDialog:(id)arg1 ;
@end

