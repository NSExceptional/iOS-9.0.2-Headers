/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoListProvider.h>

@protocol BLTSectionInfoListProviderDelegate;
@class NSDate, NSString;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListProvider> {

	opaque_pthread_mutex_t _lock;
	NSDate* _lastKnownBridgeSettingsChangeDate;
	id<BLTSectionInfoListProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_reloadUpdatedOverrides;
-(void)_reloadUpdatedOverridesWithCompletion:(/*^block*/id)arg1 ;
-(id)_loadOverridesChangedSince:(id)arg1 ;
@end

