/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, TIMobileAssetMediator, NSMutableDictionary, TIMobileAssetTimer;

@interface TIAssetManager : NSObject {

	NSMutableArray* _notificationTokens;
	BOOL _assetDownloadingEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	TIMobileAssetMediator* _mobileAssetMediator;
	NSMutableDictionary* _assetsByInputMode;
	NSMutableDictionary* _assetsByInputModeLevel;
	TIMobileAssetTimer* _timer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) TIMobileAssetMediator * mobileAssetMediator;               //@synthesize mobileAssetMediator=_mobileAssetMediator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputMode;                   //@synthesize assetsByInputMode=_assetsByInputMode - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputModeLevel;              //@synthesize assetsByInputModeLevel=_assetsByInputModeLevel - In the implementation block
@property (nonatomic,retain) TIMobileAssetTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) BOOL assetDownloadingEnabled;                              //@synthesize assetDownloadingEnabled=_assetDownloadingEnabled - In the implementation block
+(id)sharedAssetManager;
-(void)addAssets:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)recursiveDescription;
-(id)enabledInputModes;
-(void)setTimer:(TIMobileAssetTimer *)arg1 ;
-(TIMobileAssetTimer *)timer;
-(void)registerForNotifications;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)unregisterForNotifications;
-(void)performMaintenance;
-(id)levelsForInputMode:(id)arg1 ;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 ;
-(BOOL)assetDownloadingEnabled;
-(long long)amountOfPurgeableAssetsWithUrgency:(int)arg1 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(void)registerCacheDeleteCallbacks;
-(void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 ;
-(NSMutableDictionary *)assetsByInputModeLevel;
-(void)gatherStatistics:(id)arg1 ;
-(id)purgeableAssets;
-(id)updateInputModesAndGetNewLevels;
-(void)newAssetInstalled:(id)arg1 ;
-(void)didUpdateAssets;
-(BOOL)purgeAsset:(id)arg1 ;
-(void)updateInstalledAssets;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(TIMobileAssetMediator *)mobileAssetMediator;
-(void)submitStatistics:(id)arg1 ;
-(void)updateAssetDownloadingEnabled;
-(id)activeInputModeLevels;
-(NSMutableDictionary *)assetsByInputMode;
-(void)scheduleNextDownload;
-(long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2 ;
-(id)defaultEnabledInputModes;
@end

