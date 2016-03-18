/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
-(NSArray *)containerPrivacySettings;
-(BOOL)requiresTokenRegistration;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
-(int)operationType;
@end

