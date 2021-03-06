/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {

	void* _addressBook;
	NSMutableDictionary* _peopleByFirstName;
	NSMutableDictionary* _peopleByLastName;
	NSMutableDictionary* _peopleByOrganization;

}
+(BOOL)isAutoLinkingEnabled;
+(BOOL)isLinkDataValidForAddressBook:(void*)arg1 ;
+(void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(BOOL)arg2 ;
-(void)makeInitialLinks;
-(void)linkRecentlyAddedPeople;
-(id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2 ;
-(BOOL)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(BOOL)arg4 ;
-(void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(int)arg3 ;
-(void)removeAllLinks;
-(void)presortPeople:(id)arg1 ;
-(id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2 ;
-(void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(BOOL)arg2 countingOuterIterations:(unsigned long long*)arg3 ;
-(void)makeInitialLinksCountingOuterIterations:(unsigned long long*)arg1 ;
-(id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(long long)arg2 ;
-(BOOL)linkRecentlyAddedPeopleWithLimit:(long long)arg1 ;
-(id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(BOOL)arg2 ;
-(void)linkNewlyAddedPerson:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithAddressBook:(void*)arg1 ;
@end

