/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTPingSubscribing.h>

@protocol BLTPingService;
@class NSMutableDictionary, NSString;

@interface BLTPingSubscriber : NSObject <BLTPingSubscribing> {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _pingHandlers;
	NSMutableDictionary* _bulletinHandlers;
	id<BLTPingService> _service;

}

@property (nonatomic,retain) NSMutableDictionary * pingHandlers;                  //@synthesize pingHandlers=_pingHandlers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bulletinHandlers;              //@synthesize bulletinHandlers=_bulletinHandlers - In the implementation block
@property (nonatomic,retain) id<BLTPingService> service;                          //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(id)sectionIDs;
-(id)sectionIDsForPings;
-(id)sectionIDsForBulletins;
-(void)pingSubscriberDidLoad;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withPingHandler:(/*^block*/id)arg2 ;
-(void)subscribeToSectionID:(id)arg1 withBulletinHandler:(/*^block*/id)arg2 ;
-(void)sendBulletinSummary:(id)arg1 forBulletin:(id)arg2 destinations:(unsigned long long)arg3 ;
-(NSMutableDictionary *)pingHandlers;
-(void)setPingHandlers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)bulletinHandlers;
-(void)setBulletinHandlers:(NSMutableDictionary *)arg1 ;
-(id<BLTPingService>)service;
-(id)initWithService:(id)arg1 ;
-(void)setService:(id<BLTPingService>)arg1 ;
@end
