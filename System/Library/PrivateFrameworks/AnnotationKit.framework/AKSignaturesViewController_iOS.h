/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/AKSignatureCreationControllerDelegate.h>

@protocol AKSignaturesViewControllerDelegate;
@class AKController, UITableView, UINavigationBar, NSArray, NSString;

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate> {

	BOOL _presentedInAlert;
	AKController* _controller;
	id<AKSignaturesViewControllerDelegate> _delegate;
	UITableView* _tableView;
	UINavigationBar* _navBar;
	NSArray* _rightBarItems;
	NSArray* _editingLeftBarItems;
	NSArray* _leftBarItems;

}

@property (assign,nonatomic,__weak) AKController * controller;                                    //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) id<AKSignaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double idealHeight; 
@property (assign,nonatomic) BOOL presentedInAlert;                                               //@synthesize presentedInAlert=_presentedInAlert - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                             //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navBar;                                            //@synthesize navBar=_navBar - In the implementation block
@property (nonatomic,retain) NSArray * rightBarItems;                                             //@synthesize rightBarItems=_rightBarItems - In the implementation block
@property (nonatomic,retain) NSArray * editingLeftBarItems;                                       //@synthesize editingLeftBarItems=_editingLeftBarItems - In the implementation block
@property (nonatomic,retain) NSArray * leftBarItems;                                              //@synthesize leftBarItems=_leftBarItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 ;
-(void)setDelegate:(id<AKSignaturesViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<AKSignaturesViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(id)_signatures;
-(void)setNavBar:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navBar;
-(void)signatureCreationControllerDidCreateSignature:(id)arg1 ;
-(void)setPresentedInAlert:(BOOL)arg1 ;
-(double)idealHeight;
-(BOOL)presentedInAlert;
-(void)_configureUI;
-(void)_continueToCreateSignature:(id)arg1 ;
-(void)_cancelPicker:(id)arg1 ;
-(void)setRightBarItems:(NSArray *)arg1 ;
-(void)setLeftBarItems:(NSArray *)arg1 ;
-(NSArray *)leftBarItems;
-(NSArray *)rightBarItems;
-(void)_deleteSignature:(id)arg1 ;
-(NSArray *)editingLeftBarItems;
-(void)setEditingLeftBarItems:(NSArray *)arg1 ;
@end

