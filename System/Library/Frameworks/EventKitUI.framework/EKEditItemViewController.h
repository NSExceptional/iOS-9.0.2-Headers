/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEditItemViewControllerProtocol.h>

@protocol EKStyleProvider, EKEditItemViewControllerDelegate;
@class EKUIRecurrenceAlertController;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol> {

	CGRect _initialFrame;
	unsigned long long _subitem;
	BOOL _modal;
	id<EKStyleProvider> _styleProvider;
	id<EKEditItemViewControllerDelegate> _editDelegate;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _showsDoneButton;

}

@property (assign,nonatomic) unsigned long long subitem;                                            //@synthesize subitem=_subitem - In the implementation block
@property (assign,nonatomic) BOOL modal;                                                            //@synthesize modal=_modal - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                  //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate;              //@synthesize editDelegate=_editDelegate - In the implementation block
@property (assign,nonatomic) BOOL presentModally; 
@property (assign,nonatomic) BOOL editItemShouldBeAskedForInjectableViewController; 
-(void)setEditDelegate:(id<EKEditItemViewControllerDelegate>)arg1 ;
-(void)setModal:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)popIfNonModal;
-(void)setCell:(id)arg1 checked:(BOOL)arg2 ;
-(BOOL)fitsPopoverWhenKeyboardActive;
-(void)saveAndDismiss;
-(void)saveAndDismissWithExtremePrejudice;
-(id<EKEditItemViewControllerDelegate>)editDelegate;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(void)_saveAndDismissWithForce:(BOOL)arg1 ;
-(unsigned long long)subitem;
-(void)setSubitem:(unsigned long long)arg1 ;
-(BOOL)modal;
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(double)marginForTableView:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
@end

