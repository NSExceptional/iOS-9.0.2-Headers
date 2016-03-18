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

@class NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	SCD_Struct_GE80* _geoIds;
	int _geoType;
	NSString* _matchedToken;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSString * matchedToken;                       //@synthesize matchedToken=_matchedToken - In the implementation block
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType;                                   //@synthesize geoType=_geoType - In the implementation block
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long*)geoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)clearGeoIds;
-(void)addGeoId:(unsigned long long)arg1 ;
-(unsigned long long)geoIdsCount;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(int)geoType;
-(BOOL)hasGeoType;
-(NSString *)matchedToken;
-(BOOL)readFrom:(id)arg1 ;
@end

