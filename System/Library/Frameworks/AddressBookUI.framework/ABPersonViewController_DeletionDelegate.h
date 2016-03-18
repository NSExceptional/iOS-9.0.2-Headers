/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@class ABPersonViewControllerHelper, NSString;

@interface ABPersonViewController_DeletionDelegate : NSObject <UIActionSheetDelegate> {

	ABPersonViewControllerHelper* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPersonViewController:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

