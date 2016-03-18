/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSCloudAvailability, OS_dispatch_queue;
@class NSObject, SSVMediaContentTasteController, HSCloudClient;

@interface MPCloudController : NSObject {

	NSObject*<HSCloudAvailability> _cloudAvailabilityController;
	SSVMediaContentTasteController* _contentTasteController;
	BOOL _isUpdateInProgress;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isInitialImport;
	BOOL _isCloudEnabled;
	BOOL _jaliscoGeniusEnabled;
	HSCloudClient* _cloudClient;

}

@property (nonatomic,readonly) BOOL canShowCloudDownloadButtons; 
@property (nonatomic,readonly) BOOL canDefaultMediaLibraryShowCloudContent; 
@property (nonatomic,readonly) BOOL canShowCloudMusic; 
@property (nonatomic,readonly) BOOL canShowCloudVideo; 
@property (nonatomic,readonly) BOOL isCloudEnabled;                                                  //@synthesize isCloudEnabled=_isCloudEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudLockerAccount; 
@property (nonatomic,readonly) BOOL hasPurchaseHistoryAccount; 
@property (nonatomic,readonly) HSCloudClient * cloudClient;                                          //@synthesize cloudClient=_cloudClient - In the implementation block
@property (nonatomic,readonly) BOOL isUpdateInProgress;                                              //@synthesize isUpdateInProgress=_isUpdateInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isInitialImport;                                                 //@synthesize isInitialImport=_isInitialImport - In the implementation block
@property (nonatomic,readonly) BOOL isGeniusEnabled; 
@property (getter=isJaliscoGeniusEnabled,nonatomic,readonly) BOOL jaliscoGeniusEnabled;              //@synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled - In the implementation block
@property (nonatomic,readonly) BOOL enablingJaliscoGeniusRequiresTerms; 
+(id)sharedCloudController;
+(BOOL)isMediaApplication;
+(void)migrateCellularDataPreferencesIfNeeded;
-(void)resignActive;
-(void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2 ;
-(void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3 ;
-(BOOL)isCloudEnabled;
-(void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isGeniusEnabled;
-(void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)uploadCloudItemProperties;
-(void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 ;
-(void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uploadCloudPlaylistProperties;
-(void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2 ;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isCloudLibraryEnabled;
-(void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1 ;
-(void)canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)isCellularDataRestrictedDidChangeNotification:(id)arg1 ;
-(BOOL)isCellularDataRestricted;
-(BOOL)shouldProhibitActionsForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)becomeActiveAndWaitUntilDone:(BOOL)arg1 ;
-(void)becomeActive;
-(void)_initializeUpdateInProgressState;
-(void)loadUpdateProgressWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 ;
-(void)evaluateKeepLocalRulesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canDefaultMediaLibraryShowCloudContent;
-(void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasPurchaseHistoryAccount;
-(BOOL)hasCloudLockerAccount;
-(BOOL)isInitialImport;
-(BOOL)isUpdateInProgress;
-(void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)disableCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)enablingJaliscoGeniusRequiresTerms;
-(void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(HSCloudClient *)cloudClient;
-(BOOL)isJaliscoGeniusEnabled;
-(void)dealloc;
-(id)init;
@end

