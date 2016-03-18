/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {

	ABFavoritesListManager* _favoritesListManager;

}
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
+(id)sharedInstance;
-(void)addEntry:(id)arg1 ;
-(void)_applicationWillSuspend:(id)arg1 ;
-(id)entriesForPerson:(void*)arg1 ;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)recacheIdentitiesSoon;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(BOOL)isFull;
-(void)save;
-(void)dealloc;
-(id)entries;
-(id)initWithAddressBook:(void*)arg1 ;
@end

