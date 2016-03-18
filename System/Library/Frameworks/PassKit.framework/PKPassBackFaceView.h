/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPassFaceView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class UIRefreshControl, UILabel, UIButton, PKLinkedAppView, UIView, UITableView, PKSettingTableCell, NSArray, NSMutableDictionary, NSTimer, BluetoothManager, NSString;

@interface PKPassBackFaceView : PKPassFaceView <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {

	UIRefreshControl* _refreshControl;
	BOOL _tall;
	UILabel* _updateDateLabel;
	UIButton* _doneButton;
	PKLinkedAppView* _linkedApp;
	UIView* _locationHelpView;
	UITableView* _bodyTable;
	PKSettingTableCell* _automaticUpdates;
	PKSettingTableCell* _showInLockScreen;
	PKSettingTableCell* _automaticSelection;
	NSArray* _rowCountBySection;
	unsigned long long _settingsSection;
	unsigned long long _automaticSelectionSection;
	unsigned long long _linkedAppSection;
	unsigned long long _fieldsSection;
	NSMutableDictionary* _fieldCellsByIndexPath;
	NSTimer* _refreshTimeoutTimer;
	BluetoothManager* _btManager;
	BOOL _isBluetoothEnabled;
	BOOL _isLocationEnabled;
	BOOL _isWifiEnabled;
	BOOL _showsDelete;
	BOOL _showsLinkedApp;
	BOOL _showsSettings;
	BOOL _showsLinks;

}

@property (assign,nonatomic) BOOL showsSettings;                       //@synthesize showsSettings=_showsSettings - In the implementation block
@property (assign,nonatomic) BOOL showsDelete;                         //@synthesize showsDelete=_showsDelete - In the implementation block
@property (assign,nonatomic) BOOL showsLinks;                          //@synthesize showsLinks=_showsLinks - In the implementation block
@property (assign,nonatomic) BOOL showsLinkedApp;                      //@synthesize showsLinkedApp=_showsLinkedApp - In the implementation block
@property (assign,nonatomic) PKLinkedAppView * linkedApp;              //@synthesize linkedApp=_linkedApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isWifiEnabled;
+(id)_linkColor;
+(id)_linkTextAttributes;
-(void)_passSettingsChanged:(id)arg1 ;
-(id)initTall:(BOOL)arg1 ;
-(BOOL)isFrontFace;
-(id)_relevantBuckets;
-(void)createBodyInvariantViews;
-(void)_wifiChanged:(id)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg1 ;
-(BOOL)showsLinks;
-(id)_locationRelevancyHelpText;
-(PKLinkedAppView *)linkedApp;
-(id)_settingsCellForRow:(unsigned long long)arg1 ;
-(id)_automaticSelectionCell;
-(id)_fieldCellForIndexPath:(id)arg1 ;
-(id)_locationHelpViewForTableView:(id)arg1 ;
-(id)_fieldForIndexPath:(id)arg1 ;
-(void)pushSettingsFromViewToModel;
-(void)_refreshTimeoutFired;
-(id)_updateLabelAttributedStringWithDate:(id)arg1 ;
-(id)_updateLabelAttributedStringWithString:(id)arg1 ;
-(BOOL)shouldAllowRefresh;
-(void)refreshControlValueChanged:(id)arg1 ;
-(BOOL)showsDelete;
-(void)_deleteButtonPressed:(id)arg1 ;
-(BOOL)deleteEnabled;
-(BOOL)showUpdateDateLabel;
-(BOOL)_linkedAppAvailable;
-(BOOL)_settingsAvailable;
-(void)setupRefreshControl:(id)arg1 ;
-(void)setShowsLinks:(BOOL)arg1 ;
-(BOOL)_isBluetoothEnabled;
-(BOOL)showBackgroundMatte;
-(void)setShowsDelete:(BOOL)arg1 ;
-(BOOL)showsLinkedApp;
-(void)setShowsLinkedApp:(BOOL)arg1 ;
-(BOOL)showsSettings;
-(void)setShowsSettings:(BOOL)arg1 ;
-(void)setLinkedApp:(PKLinkedAppView *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(CGSize)contentSize;
-(void)willMoveToSuperview:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)_doneButtonPressed:(id)arg1 ;
@end

