/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBKTransactionControllerDelegate <NSObject>
@optional
-(BOOL)transactionController:(id)arg1 shouldScheduleTransaction:(id)arg2;

@required
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end

