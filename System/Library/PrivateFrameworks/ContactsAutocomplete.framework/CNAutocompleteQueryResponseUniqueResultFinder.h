/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDictionary, NSIndexSet, NSMutableIndexSet;

@interface CNAutocompleteQueryResponseUniqueResultFinder : NSObject {

	NSMutableArray* _uniqueResults;
	NSMutableArray* _hashes;
	NSDictionary* _hashIndex;
	NSIndexSet* _firstIndexes;
	NSMutableIndexSet* _uniqueResultIndexes;
	/*^block*/id _duplicateResultHandler;

}
+(id)findUniqueResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(id)initWithResults:(id)arg1 duplicateResultHandler:(/*^block*/id)arg2 ;
-(id)findUniqueResults;
-(void)generateHashes;
-(void)indexHashes;
-(void)removeDuplicateResults;
-(void)resolveDuplicatesWithinIndexes:(id)arg1 ;
@end

