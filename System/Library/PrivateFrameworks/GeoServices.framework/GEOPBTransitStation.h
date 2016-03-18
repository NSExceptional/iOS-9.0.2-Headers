/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitNamedItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSString, NSMutableArray;

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying> {

	unsigned long long _muid;
	GEOLatLng* _location;
	NSString* _nameDisplayString;
	unsigned _stationIndex;
	int _structureType;
	NSMutableArray* _zoomNames;
	SCD_Struct_GE49 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                     //@synthesize stationIndex=_stationIndex - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                   //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasStructureType; 
@property (assign,nonatomic) int structureType;                         //@synthesize structureType=_structureType - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoomNames;                //@synthesize zoomNames=_zoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;              //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
-(id)bestName;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)location;
-(id)dictionaryRepresentation;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(void)setStationIndex:(unsigned)arg1 ;
-(unsigned)stationIndex;
-(BOOL)hasLocation;
-(BOOL)hasMuid;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasStationIndex;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(BOOL)hasNameDisplayString;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(NSString *)nameDisplayString;
-(void)setZoomNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zoomNames;
-(void)clearZoomNames;
-(id)zoomNameAtIndex:(unsigned long long)arg1 ;
-(void)addZoomName:(id)arg1 ;
-(unsigned long long)zoomNamesCount;
-(void)setStructureType:(int)arg1 ;
-(void)setHasStructureType:(BOOL)arg1 ;
-(BOOL)hasStructureType;
-(int)structureType;
-(BOOL)readFrom:(id)arg1 ;
@end

