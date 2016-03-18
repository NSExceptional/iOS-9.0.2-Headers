/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class _UIButtonBar, UIScrollView, NSArray, NSString;

@interface _UIButtonGroupViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	_UIButtonBar* _originalOwner;
	_UIButtonBar* _buttonBar;
	UIScrollView* _scrollView;
	NSArray* _barButtonItemGroups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)_cleanupForDismissal;
-(id)initWithBarButtonItemGroups:(id)arg1 fromButtonBar:(id)arg2 ;
-(void)dismissIfNecessary;
@end

