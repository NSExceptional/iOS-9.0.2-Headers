/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
+(id)sortByNameKey;
-(id)bundleID;
-(id)description;
-(id)category;
-(id)companyName;
-(id)accountIdentifier;
-(id)iconURL;
-(long long)contentRatingFlags;
-(id)iconTitle;
-(BOOL)isFamilyShareable;
-(BOOL)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
@end

