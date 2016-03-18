/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
@optional
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1;

@required
-(void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
-(BOOL)historyStoreShouldRemoveItemsWithURLStringsThatAreNotValidURLs:(id)arg1;

@end

