/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class CNContactStore, NSString;

@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch> {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)charactersThreshold;
-(id)initWithContactStore:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)init;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)suggestedContactsForRequest:(id)arg1 error:(id*)arg2 ;
-(id)convertContacts:(id)arg1 request:(id)arg2 ;
-(/*^block*/id)resultTransformWithRequest:(id)arg1 ;
-(/*^block*/id)resultTransformWithFactory:(id)arg1 properties:(id)arg2 ;
@end

