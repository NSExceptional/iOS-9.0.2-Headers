/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying> {

	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
+(id)roadAccessInfoForPlaceData:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(void)addRoadAccessPoint:(id)arg1 ;
-(void)clearRoadAccessPoints;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(BOOL)readFrom:(id)arg1 ;
@end

