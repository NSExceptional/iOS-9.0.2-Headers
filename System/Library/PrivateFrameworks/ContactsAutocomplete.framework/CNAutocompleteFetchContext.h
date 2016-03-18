/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface CNAutocompleteFetchContext : NSObject <NSCopying> {

	BOOL _predictsBasedOnOutgoingInteraction;
	NSString* _sendingAddress;
	NSString* _sendingAddressAccountIdentifier;
	NSString* _domainIdentifier;
	NSArray* _relatedContacts;
	NSArray* _otherAddressesAlreadyChosen;
	NSDate* _date;
	NSString* _locationUUID;
	NSString* _title;
	NSArray* _bundleIdentifiers;

}

@property (copy) NSString * sendingAddress;                               //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (copy) NSString * sendingAddressAccountIdentifier;              //@synthesize sendingAddressAccountIdentifier=_sendingAddressAccountIdentifier - In the implementation block
@property (copy) NSString * domainIdentifier;                             //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (copy) NSArray * relatedContacts;                               //@synthesize relatedContacts=_relatedContacts - In the implementation block
@property (copy) NSArray * otherAddressesAlreadyChosen;                   //@synthesize otherAddressesAlreadyChosen=_otherAddressesAlreadyChosen - In the implementation block
@property (copy) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (copy) NSString * locationUUID;                                 //@synthesize locationUUID=_locationUUID - In the implementation block
@property (copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (copy) NSArray * bundleIdentifiers;                             //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign) BOOL predictsBasedOnOutgoingInteraction;               //@synthesize predictsBasedOnOutgoingInteraction=_predictsBasedOnOutgoingInteraction - In the implementation block
-(void)setLocationUUID:(NSString *)arg1 ;
-(void)setSendingAddressAccountIdentifier:(NSString *)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
-(NSArray *)otherAddressesAlreadyChosen;
-(NSString *)sendingAddressAccountIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setOtherAddressesAlreadyChosen:(NSArray *)arg1 ;
-(void)setPredictsBasedOnOutgoingInteraction:(BOOL)arg1 ;
-(NSString *)domainIdentifier;
-(BOOL)predictsBasedOnOutgoingInteraction;
-(NSArray *)relatedContacts;
-(void)setRelatedContacts:(NSArray *)arg1 ;
-(NSString *)locationUUID;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
@end

