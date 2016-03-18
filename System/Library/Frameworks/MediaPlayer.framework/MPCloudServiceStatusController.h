/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSVPlaybackLeaseDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SSVFairPlaySubscriptionController, SSVSubscriptionStatus, SSVPlaybackLease, NSString;

@interface MPCloudServiceStatusController : NSObject <SSVPlaybackLeaseDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _accountStoreChangeObservationCount;
	unsigned long long _automaticLeaseRefreshCount;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	unsigned long long _cloudLibraryObservationCount;
	unsigned long long _fairPlaySubscriptionStatusObservationCount;
	SSVFairPlaySubscriptionController* _fairPlaySubscriptionController;
	BOOL _hasLoadedMatchStatus;
	BOOL _hasLoadedURLBag;
	SSVSubscriptionStatus* _lastKnownSubscriptionStatus;
	unsigned long long _matchStatusObservationCount;
	unsigned long long _matchStatus;
	BOOL _observingNetworkReachability;
	SSVPlaybackLease* _playbackLease;
	BOOL _hasSubscriptionLease;
	unsigned long long _purchaseHistoryObservationCount;
	BOOL _shouldPlaybackRequireSubscriptionLease;
	unsigned long long _shouldPlaybackRequireSubscriptionLeaseObservationCount;
	BOOL _subscriptionAvailable;
	unsigned long long _subscriptionAvailabilityObservationCount;
	unsigned long long _subscriptionLeaseUsageCount;
	unsigned long long _subscriptionStatusObservationCount;
	unsigned long long _URLBagObservationCount;

}

@property (nonatomic,readonly) unsigned long long matchStatus; 
@property (nonatomic,readonly) SSVPlaybackLease * playbackLease; 
@property (getter=isSubscriptionAvailable,nonatomic,readonly) BOOL subscriptionAvailable; 
@property (nonatomic,copy,readonly) SSVSubscriptionStatus * subscriptionStatus; 
@property (nonatomic,readonly) BOOL hasSubscriptionLease; 
@property (nonatomic,readonly) BOOL hasSubscriptionSlot; 
@property (nonatomic,readonly) BOOL shouldPlaybackRequireSubscriptionLease; 
@property (getter=isCloudLibraryEnabled,nonatomic,readonly) BOOL cloudLibraryEnabled; 
@property (getter=isPurchaseHistoryEnabled,nonatomic,readonly) BOOL purchaseHistoryEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)beginObservingSubscriptionLease;
-(void)beginObservingSubscriptionStatus;
-(void)beginObservingShouldPlaybackRequireSubscriptionLease;
-(void)endAutomaticallyRefreshingSubscriptionLease;
-(void)endObservingShouldPlaybackRequireSubscriptionLease;
-(void)endObservingSubscriptionLease;
-(void)endObservingSubscriptionStatus;
-(void)getSubscriptionStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(void)acquireSubscriptionLeaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshSubscriptionLeaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasSubscriptionLease;
-(void)beginAutomaticallyRefreshingSubscriptionLease;
-(BOOL)shouldPlaybackRequireSubscriptionLease;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(void)getHasSubscriptionLease:(BOOL*)arg1 hasSubscriptionSlot:(BOOL*)arg2 ;
-(BOOL)hasSubscriptionSlot;
-(id)_currentFairPlaySubscriptionStatus;
-(void)_setHasSubscriptionLease:(BOOL)arg1 endReasonType:(unsigned long long)arg2 ;
-(BOOL)_currentCloudLibraryEnabled;
-(BOOL)_currentPurchaseHistoryEnabled;
-(void)_beginUsingSubscriptionLease;
-(void)_endUsingSubscriptionLease;
-(BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL*)arg1 ;
-(void)_beginObservingAccountStoreDidChange;
-(id)_fairPlaySubscriptionController;
-(void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateMatchStatus;
-(void)_updateForNetworkReachabilityObserversCountChange;
-(void)_beginObservingURLBag;
-(void)_endObservingAccountStoreDidChange;
-(void)_endObservingURLBag;
-(void)_reloadURLBag;
-(void)_storeFrontDidChangeNotification:(id)arg1 ;
-(id)_activeAccount;
-(void)_updateWithURLBagDictionary:(id)arg1 ;
-(void)_networkReachabilityDidChangeNotification:(id)arg1 ;
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3 ;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2 ;
-(BOOL)isCloudLibraryEnabled;
-(BOOL)isPurchaseHistoryEnabled;
-(BOOL)isSubscriptionAvailable;
-(unsigned long long)matchStatus;
-(SSVPlaybackLease *)playbackLease;
-(void)beginObservingCloudLibraryEnabled;
-(void)beginObservingFairPlaySubscriptionStatus;
-(void)beginObservingMatchStatus;
-(void)beginObservingPurchaseHistoryEnabled;
-(void)beginObservingSubscriptionAvailability;
-(void)endObservingCloudLibraryEnabled;
-(void)endObservingFairPlaySubscriptionStatus;
-(void)endObservingMatchStatus;
-(void)endObservingPurchaseHistoryEnabled;
-(void)endObservingSubscriptionAvailability;
-(void)endSubscriptionLease;
-(void)getSubscriptionAssetWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cloudClientAuthenticationDidChange;
-(void)dealloc;
-(id)init;
-(void)_accountStoreChangedNotification:(id)arg1 ;
@end

