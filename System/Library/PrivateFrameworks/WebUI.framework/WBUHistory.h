/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory
-(id)init;
-(void)_removeAllVisitedLinks;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
@end

