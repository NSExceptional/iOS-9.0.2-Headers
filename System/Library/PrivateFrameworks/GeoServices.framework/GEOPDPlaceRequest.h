/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, NSMutableArray, NSString, GEOPDPlaceRequestParameters;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceRequestParameters* _placeRequestParameters;
	int _requestType;
	NSMutableArray* _requestedComponents;
	NSMutableArray* _spokenLanguages;
	BOOL _suppressResultsRequiringAttribution;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                          //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                              //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                                 //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                          //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenLanguages;                                  //@synthesize spokenLanguages=_spokenLanguages - In the implementation block
@property (nonatomic,retain) NSMutableArray * requestedComponents;                              //@synthesize requestedComponents=_requestedComponents - In the implementation block
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution;                          //@synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                   //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters;              //@synthesize placeRequestParameters=_placeRequestParameters - In the implementation block
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 traits:(id)arg3 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 suppressResultsRequiringAttribution:(BOOL)arg6 includeETA:(BOOL)arg7 traits:(id)arg8 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 ;
-(id)initForCategoryListWithTraits:(id)arg1 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)_initWithTraits:(id)arg1 ;
-(id)initWithComponents:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 ;
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 includeEntryPoints:(BOOL)arg2 includeETA:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned)arg2 ;
-(id)initWithCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(BOOL)isMerchantRequest;
-(id)initForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)initWithSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(BOOL)isCanonicalLocationSearchRequest;
-(id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithTraits:(id)arg1 count:(unsigned)arg2 includeETA:(BOOL)arg3 includeEntryPoints:(BOOL)arg4 ;
-(id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(BOOL)isForwardGeocoderRequest;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(BOOL)shouldConsiderCaching;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(int)requestType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(unsigned long long)displayLanguagesCount;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(NSMutableArray *)requestedComponents;
-(void)setRequestedComponents:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)addSpokenLanguage:(id)arg1 ;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(BOOL)hasPlaceRequestParameters;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(NSMutableArray *)spokenLanguages;
-(void)clearSpokenLanguages;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)clearRequestedComponents;
-(void)clearDisplayLanguages;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(NSString *)displayRegion;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(NSMutableArray *)displayLanguages;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(unsigned long long)requestedComponentsCount;
-(BOOL)hasClientMetadata;
-(BOOL)suppressResultsRequiringAttribution;
-(void)addRequestedComponent:(id)arg1 ;
-(id)requestedComponentAtIndex:(unsigned long long)arg1 ;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(GEOPDClientMetadata *)clientMetadata;
-(BOOL)readFrom:(id)arg1 ;
@end

