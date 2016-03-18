/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSharesOperation : CKDatabaseOperation {

	NSArray* _shareIDs;
	NSArray* _zoneIDs;
	/*^block*/id _fetchSharesCompletionBlock;
	NSMutableDictionary* _sharesByShareID;
	NSMutableDictionary* _shareIDErrors;
	NSMutableDictionary* _zoneIDErrors;

}

@property (nonatomic,readonly) NSArray * shareIDs;                               //@synthesize shareIDs=_shareIDs - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDs;                                //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id fetchSharesCompletionBlock;                        //@synthesize fetchSharesCompletionBlock=_fetchSharesCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sharesByShareID;              //@synthesize sharesByShareID=_sharesByShareID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareIDErrors;                //@synthesize shareIDErrors=_shareIDErrors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDErrors;                 //@synthesize zoneIDErrors=_zoneIDErrors - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)sharesByShareID;
-(void)setSharesByShareID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)shareIDErrors;
-(void)setShareIDErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)zoneIDErrors;
-(void)setZoneIDErrors:(NSMutableDictionary *)arg1 ;
-(id)fetchSharesCompletionBlock;
-(id)init;
-(void)setFetchSharesCompletionBlock:(id)arg1 ;
-(NSArray *)zoneIDs;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)shareIDs;
-(id)initWithShareIDs:(id)arg1 ;
-(id)initWithZoneIDs:(id)arg1 ;
@end

