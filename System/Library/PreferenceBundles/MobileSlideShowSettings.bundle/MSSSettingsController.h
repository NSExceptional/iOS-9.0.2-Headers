/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSlideShowSettings.bundle/MobileSlideShowSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSCloudStorageOffersManagerDelegate.h>
#import <libobjc.A.dylib/CPLStatusDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class PSSpecifier, NSArray, AAUIGenericTermsRemoteUI, UIProgressHUD, RadiosPreferences, PSCloudStorageOffersManager, CPLStatus, NSString;

@interface MSSSettingsController : PSListController <PSCloudStorageOffersManagerDelegate, CPLStatusDelegate, RadiosPreferencesDelegate> {

	PSSpecifier* _iCloudPhotosSwitchSpecifier;
	NSArray* _allCloudPhotosSpecifiers;
	NSArray* _photoStreamSwitchSpecifiers;
	NSArray* _sharedStreamsSwitchSpecifiers;
	NSArray* _iCloudPhotoLibraryConditionalSpecifiers;
	NSArray* _photoStreamAvalancheSpecifiers;
	AAUIGenericTermsRemoteUI* _termsController;
	UIProgressHUD* _displayedSpinner;
	RadiosPreferences* _radiosPreferences;
	unsigned char _originalCellFlag;
	unsigned char _originalWiFiFlag;
	long long _wifiAvailable;
	BOOL _cloudPhotosEnabled;
	BOOL _avalancheAllowed;
	BOOL _accountModificationAllowed;
	unsigned _showAirplaneModeAlertWhenViewLoads : 1;
	unsigned _showWifiUnavailableWhenViewLoads : 1;
	unsigned _inAirplaneMode : 1;
	unsigned _observingNetworkChanges : 1;
	unsigned _stoppedObservingNetworkChangesBecauseUIDisappeared : 1;
	unsigned _photoStreamEnabled : 1;
	unsigned _sharedStreamsEnabled : 1;
	unsigned _shownFromAccountSettings : 1;
	PSCloudStorageOffersManager* _offersManager;
	BOOL _requireStorageUpgradeForCPL;
	CPLStatus* _cplStatus;
	BOOL _isCPLInExitMode;
	long long _rampStatus;
	BOOL _performingRampStatusUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPhotoStreamsEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoStreamsEnabledFromBuddyWorkflow:(id)arg1 ;
+(void)setPhotoSharingEnabledFromAccountSettings:(id)arg1 ;
+(void)setPhotoSharingEnabledFromBuddyWorkflow:(id)arg1 ;
+(BOOL)shouldOfferHyperionInBuddy;
-(id)specifiers;
-(void)_continueWithoutStoragePurchase:(id)arg1 ;
-(void)manager:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)manager:(id)arg1 loadDidFailWithError:(id)arg2 ;
-(void)managerDidCancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)_shownFromAccountSettings;
-(void)_wifiReachabilityChanged:(id)arg1 ;
-(void)_clearCachedSpecifiers;
-(void)_initializeUserAccountAndSpecifiers;
-(void)_updateCloudPhotoFooterTextAnimated:(BOOL)arg1 ;
-(void)_updateKeepOriginalsFooterTextAnimated:(BOOL)arg1 ;
-(void)_hideDisplayedSpinner;
-(void)_setPhotoStreamEnabled:(BOOL)arg1 ;
-(BOOL)_photoStreamAssetsWillBeDeletedIfTurnedOff;
-(void)_showSpinnerForDuration:(double)arg1 withText:(id)arg2 ;
-(void)_confirmWithTitle:(id)arg1 message:(id)arg2 confirmationButtonTitle:(id)arg3 cancelButtonTtle:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_setSharedStreamsEnabled:(BOOL)arg1 ;
-(void)_enableCloudPhotosIgnoringStorageLimits:(BOOL)arg1 ;
-(void)_beginCloudPhotosDisableFlow;
-(BOOL)_avalancheUploadOnlyPicks;
-(void)_updateAvalancheFooterTextAnimated:(BOOL)arg1 ;
-(void)_saveUserAccount;
-(void)_setDisplayedSpinner:(id)arg1 ;
-(id)_CPLStorageFooterText;
-(id)_CPLSwitchFooterText;
-(id)_uploadBurstFooterText;
-(id)_removeNonPhotoStreamSettingFromSpecifier:(id)arg1 ;
-(id)_photoStreamSwitchName;
-(void)_setRecordVideoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordVideoConfiguration:(id)arg1 ;
-(void)_setRecordSlomoConfiguration:(id)arg1 specifier:(id)arg2 ;
-(id)_recordSlomoConfiguration:(id)arg1 ;
-(void)_updatePauseUnpauseButtonName;
-(id)_showSpinnerWithText:(id)arg1 ;
-(id)_nonLocalResourceInfo;
-(void)_disableCloudPhotos;
-(void)_confirmCloudPhotosDisableWithSyncInProgress;
-(void)_confirmCloudPhotosDisableWhilePrunedWithNonLocalResourceInfo:(id)arg1 ;
-(void)_confirmCloudPhotosDisableWithNonLocalResourceInfo:(id)arg1 ;
-(void)_cancelDisableCloudPhotos;
-(void)_confirmDeletePrunedResourcesWithNonLocalResourceInfo:(id)arg1 ;
-(void)_enableKeepOriginalsWithNonLocalResourceInfo:(id)arg1 ;
-(void)_showManageStorage;
-(void)keepOriginals:(id)arg1 ;
-(void)_updatePhotoStreamSwitchNameAnimated:(BOOL)arg1 ;
-(void)_showStorageOptions;
-(void)photoStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)photoStreamEnabled:(id)arg1 ;
-(id)sharedStreamsEnabled:(id)arg1 ;
-(void)sharedStreamsSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(id)cloudPhotosEnabled:(id)arg1 ;
-(void)cloudPhotosEnableWasToggled:(id)arg1 specifier:(id)arg2 ;
-(void)pauseCloudPhotos:(id)arg1 ;
-(void)dumpCloudStatus:(id)arg1 ;
-(void)optimizeStorage:(id)arg1 ;
-(id)uploadBurstPhotos:(id)arg1 ;
-(void)uploadBurstPhotosSwitchWasToggled:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_sharedStreamsAssetsWillBeDeletedIfTurnedOff;
-(void)_updatePhotoStreamSwitchEnabled;
-(id)_personID;
-(void)airplaneModeChanged;
-(void)statusDidChange:(id)arg1 ;
-(void)pushController:(id)arg1 ;
@end

