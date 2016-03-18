/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifyRecordAccessOperation : CKDatabaseOperation {

	/*^block*/id _recordAccessGrantedBlock;
	/*^block*/id _recordAccessRevokedBlock;
	/*^block*/id _recordAccessCompletionBlock;
	NSArray* _recordIDsToGrant;
	NSArray* _recordIDsToRevoke;
	NSMutableDictionary* _recordErrors;
	NSMutableArray* _grantedRecordIDs;
	NSMutableArray* _revokedRecordIDs;

}

@property (nonatomic,copy) id recordAccessGrantedBlock;                       //@synthesize recordAccessGrantedBlock=_recordAccessGrantedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessRevokedBlock;                       //@synthesize recordAccessRevokedBlock=_recordAccessRevokedBlock - In the implementation block
@property (nonatomic,copy) id recordAccessCompletionBlock;                    //@synthesize recordAccessCompletionBlock=_recordAccessCompletionBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToGrant;                      //@synthesize recordIDsToGrant=_recordIDsToGrant - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToRevoke;                     //@synthesize recordIDsToRevoke=_recordIDsToRevoke - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;              //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableArray * grantedRecordIDs;               //@synthesize grantedRecordIDs=_grantedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * revokedRecordIDs;               //@synthesize revokedRecordIDs=_revokedRecordIDs - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)grantedRecordIDs;
-(id)recordAccessGrantedBlock;
-(NSMutableArray *)revokedRecordIDs;
-(id)recordAccessRevokedBlock;
-(id)recordAccessCompletionBlock;
-(void)setRecordAccessGrantedBlock:(id)arg1 ;
-(void)setRecordAccessRevokedBlock:(id)arg1 ;
-(void)setGrantedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setRevokedRecordIDs:(NSMutableArray *)arg1 ;
-(id)initWithRecordIDsToGrantAccess:(id)arg1 recordIDsToRevokeAccess:(id)arg2 ;
-(void)setRecordAccessCompletionBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)recordIDsToGrant;
-(NSArray *)recordIDsToRevoke;
-(void)setRecordIDsToGrant:(NSArray *)arg1 ;
-(void)setRecordIDsToRevoke:(NSArray *)arg1 ;
@end

