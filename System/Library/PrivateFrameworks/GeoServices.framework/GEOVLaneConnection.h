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

@interface GEOVLaneConnection : PBCodable <NSCopying> {

	unsigned _firstLaneIndex;
	unsigned _firstRoadIndex;
	unsigned _secondLaneIndex;
	unsigned _secondRoadIndex;

}

@property (assign,nonatomic) unsigned firstRoadIndex;               //@synthesize firstRoadIndex=_firstRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned firstLaneIndex;               //@synthesize firstLaneIndex=_firstLaneIndex - In the implementation block
@property (assign,nonatomic) unsigned secondRoadIndex;              //@synthesize secondRoadIndex=_secondRoadIndex - In the implementation block
@property (assign,nonatomic) unsigned secondLaneIndex;              //@synthesize secondLaneIndex=_secondLaneIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSecondRoadIndex:(unsigned)arg1 ;
-(unsigned)firstRoadIndex;
-(unsigned)firstLaneIndex;
-(unsigned)secondLaneIndex;
-(void)setFirstLaneIndex:(unsigned)arg1 ;
-(void)setFirstRoadIndex:(unsigned)arg1 ;
-(unsigned)secondRoadIndex;
-(void)setSecondLaneIndex:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

