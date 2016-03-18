/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UsageFeedDelegate.h>
#import <libobjc.A.dylib/PSSpecifierGroupController.h>

@class NSArray, NSNumber, PSExpandableAppListGroupController, NSDictionary, NSString;

@interface PSUIAppCellularUsageGroupController : NSObject <UsageFeedDelegate, PSSpecifierGroupController> {

	NSArray* _cellularDataSwitches;
	BOOL _showInternalDetails;
	BOOL _cancelled;
	BOOL _enabled;
	NSNumber* _totalBytesUsed;
	NSNumber* _totalRoamingBytesUsed;
	PSExpandableAppListGroupController* _appGroupController;
	NSDictionary* _systemServiceCategoryNames;
	NSArray* _managedBundleIDs;

}

@property (nonatomic,retain) NSNumber * totalBytesUsed;                                            //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (nonatomic,retain) NSNumber * totalRoamingBytesUsed;                                     //@synthesize totalRoamingBytesUsed=_totalRoamingBytesUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasManagedCellularData; 
@property (nonatomic,retain) PSExpandableAppListGroupController * appGroupController;              //@synthesize appGroupController=_appGroupController - In the implementation block
@property (assign,nonatomic) BOOL showInternalDetails;                                             //@synthesize showInternalDetails=_showInternalDetails - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                                     //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSDictionary * systemServiceCategoryNames;                            //@synthesize systemServiceCategoryNames=_systemServiceCategoryNames - In the implementation block
@property (nonatomic,retain) NSArray * managedBundleIDs;                                           //@synthesize managedBundleIDs=_managedBundleIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)cancel;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appCellularDataEnabledForSpecifier:(id)arg1 ;
-(void)setWorkspaceInformation:(id)arg1 ;
-(BOOL)hasManagedCellularData;
-(void)setSwitchesEnabled:(BOOL)arg1 ;
-(NSNumber *)totalBytesUsed;
-(NSNumber *)totalRoamingBytesUsed;
-(void)setTotalBytesUsed:(NSNumber *)arg1 ;
-(id)managedCellularDataBundleIdentifiers;
-(void)setShowInternalDetails:(BOOL)arg1 ;
-(PSExpandableAppListGroupController *)appGroupController;
-(void)_calculateUsageForSubscriberIdentifier:(id)arg1 inWorkspace:(id)arg2 ;
-(NSArray *)managedBundleIDs;
-(id)dataUsageForApplicationSpecifier:(id)arg1 ;
-(NSDictionary *)systemServiceCategoryNames;
-(void)setSystemServiceCategoryNames:(NSDictionary *)arg1 ;
-(id)nameForSpecialCategory:(id)arg1 ;
-(void)setTotalRoamingBytesUsed:(NSNumber *)arg1 ;
-(id)forcedBundleIdentiferForBundleIdentifier:(id)arg1 ;
-(id)alwaysDisplayedBundleIdentifiers;
-(void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2 ;
-(void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4 ;
-(void)_categorizeApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)specifierForApp:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)showInternalDetails;
-(id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2 ;
-(void)setAppGroupController:(PSExpandableAppListGroupController *)arg1 ;
-(void)setManagedBundleIDs:(NSArray *)arg1 ;
@end

