/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDBrowseCategory, GEOPDAutocompleteEntry, NSArray, NSString, GEOFeatureStyleAttributes, NSURL, NSData;

@interface GEOSearchCategory : NSObject <NSSecureCoding> {

	GEOPDBrowseCategory* _browseCategory;
	GEOPDAutocompleteEntry* _autocompleteEntry;
	NSArray* _subcategories;

}

@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) NSString * shortDisplayString; 
@property (nonatomic,readonly) NSString * popularTokenString; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) NSArray * subcategories;                                                           //@synthesize subcategories=_subcategories - In the implementation block
@property (nonatomic,readonly) NSURL * mapsURL; 
@property (getter=_suggestionEntryMetadata,nonatomic,readonly) NSData * suggestionEntryMetadata; 
@property (getter=_autocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
+(void)sendFeedbackForVisibleCategories:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)categoryForURL:(id)arg1 ;
-(void)sendFeedback;
-(id)initWithStorage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)displayString;
-(NSURL *)mapsURL;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(id)_suggestionEntryMetadata;
-(id)_autocompleteEntry;
-(id)initWithAutocompleteEntry:(id)arg1 ;
-(NSString *)popularTokenString;
-(id)initWithBrowseCategory:(id)arg1 ;
-(NSArray *)subcategories;
-(id)_browseCategory;
-(NSString *)shortDisplayString;
@end

