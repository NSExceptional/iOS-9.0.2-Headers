/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDSpotlightItemUtils : NSObject
+(id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4 ;
+(id)interactionForSearchableItem:(id)arg1 ;
+(id)expectedUTIsForMechanism:(long long)arg1 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2 ;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2 ;
+(id)_contactsForPersons:(id)arg1 ;
+(id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2 ;
+(BOOL)shouldFilterEmailAddress:(id)arg1 ;
+(id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)expectedSupportedUTIs;
+(id)knowledgeEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
@end

