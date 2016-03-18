/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class ABVCardValueSetter, ABVCardLexer, NSData, NSString, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface ABVCardParser : NSObject {

	ABVCardValueSetter* _valueSetter;
	void* _source;
	ABVCardLexer* _lexer;
	NSData* _data;
	unsigned long long _defaultEncoding;
	BOOL _hasImportErrors;
	BOOL _30vCard;
	NSString* _first;
	NSString* _last;
	NSString* _org;
	NSString* _formattedName;
	NSMutableArray* _emails;
	NSMutableArray* _dates;
	NSMutableArray* _phones;
	NSMutableArray* _addresses;
	NSMutableArray* _aims;
	NSMutableArray* _jabbers;
	NSMutableArray* _msns;
	NSMutableArray* _yahoos;
	NSMutableArray* _icqs;
	NSMutableArray* _untypedIMs;
	NSMutableArray* _instantMessengers;
	NSMutableArray* _socialProfiles;
	NSMutableArray* _relatedNames;
	NSMutableArray* _urls;
	NSMutableDictionary* _activityAlerts;
	NSMutableString* _notes;
	NSMutableString* _otherNotes;
	NSMutableDictionary* _extensions;
	NSString* _uid;
	NSData* _imageData;
	NSString* _imageURI;
	int _cropRectX;
	int _cropRectY;
	int _cropRectWidth;
	int _cropRectHeight;
	NSData* _cropRectChecksum;
	NSMutableArray* _itemParameters;
	NSString* _grouping;
	unsigned long long _encoding;
	BOOL _quotedPrintable;
	BOOL _base64;

}

@property (assign,nonatomic) void* source; 
+(CFArrayRef)supportedProperties;
-(BOOL)_usesArrayForExternalPropKey:(id)arg1 ;
-(void)cleanUpCardState;
-(id)defaultLabel;
-(void)setLocalRecordHasAdditionalProperties:(BOOL)arg1 ;
-(int)_addIMHandles:(id)arg1 toService:(CFStringRef)arg2 multiValue:(void*)arg3 uniquenessCheckingMultiValue:(void*)arg4 ;
-(int)_addIMPPProfiles:(id)arg1 multiValue:(void*)arg2 uniquenessCheckingMultiValue:(void*)arg3 ;
-(BOOL)_setPersonSounds:(void*)arg1 identifier:(int)arg2 fromActivity:(id)arg3 alert:(id)arg4 otherValue:(id)arg5 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(void)addMultiValues:(id)arg1 toProperty:(unsigned)arg2 valueComparator:(/*^block*/id)arg3 ;
-(BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)_genericLabel;
-(id)parseSingleValue;
-(id)genericLabel;
-(id)phoneLabel;
-(id)_socialProfileService;
-(id)_socialProfileUsername;
-(id)_socialProfileUserId;
-(id)_socialProfileDisplayName;
-(id)parseInstantMessengerProfile:(id)arg1 ;
-(id)parseRemainingLine;
-(BOOL)parseUID;
-(BOOL)parseTEL;
-(BOOL)parseADR;
-(BOOL)parseORG;
-(id)parseURL;
-(id)defaultURLLabel;
-(BOOL)parseADD;
-(BOOL)parseEMAIL;
-(BOOL)addIMValueTo:(id)arg1 ;
-(BOOL)parsePhoto:(id)arg1 ;
-(BOOL)parseN;
-(BOOL)parseVERSION;
-(BOOL)parseABUID;
-(BOOL)parseABExtensionType:(id)arg1 ;
-(BOOL)parseBDAY;
-(BOOL)parseIMPP;
-(BOOL)parseNICKNAME;
-(BOOL)parseABDATE;
-(void)parseABOrder;
-(void)parseABPhoto;
-(BOOL)parseAlternateBirthday;
-(void)parseABShowAs;
-(BOOL)parseABMaiden;
-(BOOL)parseSocialProfiles;
-(BOOL)parseABReleatedNames;
-(BOOL)parseActivityAlerts;
-(id)parseValueArray;
-(BOOL)_usesRemainingLineForExternalPropKey:(id)arg1 ;
-(BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(BOOL)importToValueSetter:(id)arg1 ;
-(BOOL)parseItem;
-(BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 valueComparator:(/*^block*/id)arg3 ;
-(void)addAddressMultiValues;
-(void)addSocialProfileMultiValues;
-(void)addInstantMessageMultiValues;
-(void)addActivityAlertMultiValues;
-(void)noteLackOfValueForImageData;
-(BOOL)importToPerson:(void*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(void*)copyNextPersonWithLength:(int*)arg1 foundProperties:(const _CFArray*)arg2 ;
-(CFArrayRef)peopleAndProperties:(const _CFArray*)arg1 ;
-(BOOL)hasImportErrors;
-(BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2 ;
-(BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned)arg2 ;
-(id)defaultADRLabel;
-(id)_valueSetter;
-(id)sortedPeopleAndProperties:(const _CFArray*)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void*)source;
-(void)setSource:(void*)arg1 ;
-(void)finalize;
-(id)dateFromISO8601String:(id)arg1 ;
@end

