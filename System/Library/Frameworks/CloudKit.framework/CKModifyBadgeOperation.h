/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation {

	unsigned long long _badgeValue;
	/*^block*/id _modifyBadgeCompletionBlock;

}

@property (assign,nonatomic) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
@property (nonatomic,copy) id modifyBadgeCompletionBlock;                //@synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(id)modifyBadgeCompletionBlock;
-(void)setModifyBadgeCompletionBlock:(id)arg1 ;
-(id)init;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(unsigned long long)badgeValue;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
@end

