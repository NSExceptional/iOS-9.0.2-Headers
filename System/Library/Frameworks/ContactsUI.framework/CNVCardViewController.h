/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>

@protocol CNVCardViewControllerDelegate;
@class NSArray, CNContactNavigationController, NSString;

@interface CNVCardViewController : UIViewController <CNContactNavigationControllerDelegate> {

	id<CNVCardViewControllerDelegate> _delegate;
	NSArray* _contacts;

}

@property (assign,nonatomic,__weak) id<CNVCardViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContactNavigationController * contactNavigationController; 
@property (nonatomic,retain) NSArray * contacts;                                                         //@synthesize contacts=_contacts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)contacts;
-(void)contactNavigationControllerDidComplete:(id)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(long long)arg3 ;
-(CNContactNavigationController *)contactNavigationController;
-(void)setDelegate:(id<CNVCardViewControllerDelegate>)arg1 ;
-(id<CNVCardViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)setContacts:(NSArray *)arg1 ;
-(id)initWithVCardData:(id)arg1 ;
@end

