/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOStructuredAddress, NSString, NSMutableArray, GEOLatLng;

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {

	unsigned long long _muid;
	int _addressGeocodeAccuracyHint;
	GEOStructuredAddress* _addressHint;
	NSString* _externalItemId;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _placeTypeHint;
	int _resultProviderId;
	NSString* _vendorId;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                                    //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                 //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId;                                     //@synthesize vendorId=_vendorId - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId;                               //@synthesize externalItemId=_externalItemId - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;                      //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                                //@synthesize placeNameHint=_placeNameHint - In the implementation block
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints;              //@synthesize formattedAddressLineHints=_formattedAddressLineHints - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint;                                       //@synthesize placeTypeHint=_placeTypeHint - In the implementation block
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint;                          //@synthesize addressGeocodeAccuracyHint=_addressGeocodeAccuracyHint - In the implementation block
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE16)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 contentProvider:(id)arg3 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(void)setResultProviderId:(int)arg1 ;
-(BOOL)hasResultProviderId;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(GEOLatLng *)locationHint;
-(int)addressGeocodeAccuracyHint;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(NSMutableArray *)formattedAddressLineHints;
-(int)placeTypeHint;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(BOOL)hasLocationHint;
-(BOOL)hasPlaceTypeHint;
-(BOOL)hasPlaceNameHint;
-(NSString *)placeNameHint;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(BOOL)hasAddressHint;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(void)clearFormattedAddressLineHints;
-(GEOStructuredAddress *)addressHint;
-(BOOL)hasExternalItemId;
-(NSString *)vendorId;
-(NSString *)externalItemId;
-(void)setExternalItemId:(NSString *)arg1 ;
-(BOOL)hasVendorId;
-(void)setVendorId:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end
