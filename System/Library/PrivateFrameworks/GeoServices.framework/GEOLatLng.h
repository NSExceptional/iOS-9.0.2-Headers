/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLatLng : PBCodable <NSCopying> {

	double _lat;
	double _lng;

}

@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (assign,nonatomic) double lat;                                //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                                //@synthesize lng=_lng - In the implementation block
-(SCD_Struct_GE16)coordinate;
-(id)initWithCoordinate:(SCD_Struct_GE16)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLng:(double)arg1 ;
-(double)lat;
-(double)lng;
-(void)setLat:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

