/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingService.h>

@protocol BLTPingSubscribing;
@class BLTBulletinDistributorSubscriber, NSString;

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService> {

	id<BLTPingSubscribing> _delegate;
	BLTBulletinDistributorSubscriber* _subscriber;

}

@property (assign,nonatomic,__weak) id<BLTPingSubscribing> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BLTBulletinDistributorSubscriber * subscriber;              //@synthesize subscriber=_subscriber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<BLTPingSubscribing>)arg1 ;
-(id<BLTPingSubscribing>)delegate;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)pingWithBulletin:(id)arg1 ;
-(void)unsubscribeFromSectionID:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg1 forFullBulletins:(BOOL)arg2 ;
-(void)sendBulletinSummary:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg1 ;
-(BLTBulletinDistributorSubscriber *)subscriber;
-(void)setSubscriber:(BLTBulletinDistributorSubscriber *)arg1 ;
@end

