/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation {

	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	/*^block*/id _modifySubscriptionsCompletionBlock;
	NSMutableArray* _savedSubscriptions;
	NSMutableArray* _deletedSubscriptionIDs;
	NSMutableDictionary* _subscriptionsBySubscriptionIDs;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,copy) NSArray * subscriptionsToSave;                                       //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDsToDelete;                                   //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,copy) id modifySubscriptionsCompletionBlock;                               //@synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * savedSubscriptions;                               //@synthesize savedSubscriptions=_savedSubscriptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedSubscriptionIDs;                           //@synthesize deletedSubscriptionIDs=_deletedSubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionIDs;              //@synthesize subscriptionsBySubscriptionIDs=_subscriptionsBySubscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                          //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)subscriptionsBySubscriptionIDs;
-(NSMutableDictionary *)subscriptionErrors;
-(NSMutableArray *)deletedSubscriptionIDs;
-(NSMutableArray *)savedSubscriptions;
-(id)modifySubscriptionsCompletionBlock;
-(void)setSavedSubscriptions:(NSMutableArray *)arg1 ;
-(void)setDeletedSubscriptionIDs:(NSMutableArray *)arg1 ;
-(void)setSubscriptionsBySubscriptionIDs:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(id)init;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(void)setModifySubscriptionsCompletionBlock:(id)arg1 ;
@end

