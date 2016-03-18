/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLFacebookLoginInfoViewControllerDelegate;
@class SLFacebookLoginInfoFooter;

@interface SLFacebookLoginInfoViewController : UITableViewController {

	SLFacebookLoginInfoFooter* _footerView;
	id<SLFacebookLoginInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookLoginInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelTapped:(id)arg1 ;
-(void)_signInTapped:(id)arg1 ;
-(void)setDelegate:(id<SLFacebookLoginInfoViewControllerDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SLFacebookLoginInfoViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end

