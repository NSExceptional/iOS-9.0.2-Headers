/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKResponse.h>

@class SBKSyncResponseData;

@interface SBKSyncResponse : SBKResponse {

	SBKSyncResponseData* _syncResponseData;

}

@property (readonly) SBKSyncResponseData * syncResponseData;              //@synthesize syncResponseData=_syncResponseData - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
-(SBKSyncResponseData *)syncResponseData;
@end

