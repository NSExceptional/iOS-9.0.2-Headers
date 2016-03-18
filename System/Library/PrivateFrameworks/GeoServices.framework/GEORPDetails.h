/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion, GEORPUpdatedLabel, NSString, NSMutableArray;

@interface GEORPDetails : PBCodable <NSCopying> {

	int _directionsType;
	GEOMapRegion* _displayRegion;
	int _displayStyle;
	GEORPUpdatedLabel* _label;
	NSString* _localizedDescription;
	NSString* _localizedTitle;
	int _mapType;
	NSMutableArray* _places;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle;                             //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,retain) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedDescription; 
@property (nonatomic,retain) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion;                 //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * places;                      //@synthesize places=_places - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) GEORPUpdatedLabel * label;                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasDirectionsType; 
@property (assign,nonatomic) int directionsType;                           //@synthesize directionsType=_directionsType - In the implementation block
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType;                                  //@synthesize mapType=_mapType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORPUpdatedLabel *)label;
-(void)setLabel:(GEORPUpdatedLabel *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDisplayRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasDisplayRegion;
-(GEOMapRegion *)displayRegion;
-(int)mapType;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(void)setHasMapType:(BOOL)arg1 ;
-(void)addPlace:(id)arg1 ;
-(BOOL)hasDirectionsType;
-(void)setHasDirectionsType:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(int)displayStyle;
-(BOOL)hasLabel;
-(void)clearPlaces;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setPlaces:(NSMutableArray *)arg1 ;
-(BOOL)hasLocalizedTitle;
-(void)setDisplayStyle:(int)arg1 ;
-(BOOL)hasLocalizedDescription;
-(int)directionsType;
-(id)placeAtIndex:(unsigned long long)arg1 ;
-(void)setDirectionsType:(int)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(NSMutableArray *)places;
-(unsigned long long)placesCount;
-(BOOL)readFrom:(id)arg1 ;
@end

