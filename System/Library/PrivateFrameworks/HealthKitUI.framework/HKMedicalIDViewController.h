/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardDeletionDelegate.h>
#import <libobjc.A.dylib/HKEmergencyCardRowHeightChangeDelegate.h>

@protocol HKMedicalIDViewControllerDelegate;
@class NSArray, HKEmergencyCardGroupTableItem, HKEmergencyCardContactsTableItem, _HKMedicalIDData, HKHealthStore, NSString;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate> {

	NSArray* _tableItems;
	NSArray* _presentableTableItems;
	NSArray* _footers;
	HKEmergencyCardGroupTableItem* _groupItem;
	HKEmergencyCardContactsTableItem* _contactsItem;
	BOOL _inEditMode;
	NSArray* _localeItems;
	BOOL _allowsEditing;
	BOOL _showsDismissButton;
	BOOL _showsDeleteButton;
	_HKMedicalIDData* _medicalID;
	HKHealthStore* _healthStore;
	id<HKMedicalIDViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) _HKMedicalIDData * medicalID;                                       //@synthesize medicalID=_medicalID - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                                 //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL showsDismissButton;                                            //@synthesize showsDismissButton=_showsDismissButton - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                                             //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                                        //@synthesize healthStore=_healthStore - In the implementation block
@property (assign,nonatomic,__weak) id<HKMedicalIDViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSupportedOnThisDevice;
-(void)localeDidChange:(id)arg1 ;
-(id)initInEditMode:(BOOL)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setShowsDismissButton:(BOOL)arg1 ;
-(void)setMedicalID:(_HKMedicalIDData *)arg1 ;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidDelete:(id)arg1 ;
-(void)_doneTapped:(id)arg1 ;
-(void)setDelegate:(id<HKMedicalIDViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HKMedicalIDViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)_buildTableItems;
-(void)_cancelEditingTapped:(id)arg1 ;
-(void)_doneEditingTapped:(id)arg1 ;
-(void)_editTapped:(id)arg1 ;
-(void)_contactStoreDidChange:(id)arg1 ;
-(void)_buildPresentableTableItems;
-(void)_refreshEmergencyContactsAndReload:(BOOL)arg1 ;
-(_HKMedicalIDData *)medicalID;
-(BOOL)showsDeleteButton;
-(id)_newViewForFooterInSection:(long long)arg1 ;
-(void)deletionTableItemDidTapDelete:(id)arg1 ;
-(void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
-(id)_fetchMedicalIDDataSynchronously:(BOOL*)arg1 ;
-(BOOL)showsDismissButton;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

