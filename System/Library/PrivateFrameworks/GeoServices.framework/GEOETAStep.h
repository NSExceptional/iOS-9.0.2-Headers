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

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying> {

	unsigned _distanceRemaining;
	unsigned _expectedTime;
	unsigned _stepID;
	GEOTimeCheckpoints* _timeCheckpoints;
	int _zilchPointIndex;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) BOOL hasDistanceRemaining; 
@property (assign,nonatomic) unsigned distanceRemaining; 
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                             //@synthesize expectedTime=_expectedTime - In the implementation block
@property (assign,nonatomic) BOOL hasZilchPointIndex; 
@property (assign,nonatomic) int zilchPointIndex;                               //@synthesize zilchPointIndex=_zilchPointIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeCheckpoints; 
@property (nonatomic,retain) GEOTimeCheckpoints * timeCheckpoints;              //@synthesize timeCheckpoints=_timeCheckpoints - In the implementation block
-(BOOL)hasDistanceRemaining;
-(void)setHasDistanceRemaining:(BOOL)arg1 ;
-(void)setDistanceRemaining:(unsigned)arg1 ;
-(unsigned)distanceRemaining;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasExpectedTime:(BOOL)arg1 ;
-(BOOL)hasExpectedTime;
-(unsigned)expectedTime;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(GEOTimeCheckpoints *)timeCheckpoints;
-(void)setHasStepID:(BOOL)arg1 ;
-(unsigned)stepID;
-(BOOL)hasStepID;
-(void)setTimeCheckpoints:(GEOTimeCheckpoints *)arg1 ;
-(BOOL)hasTimeCheckpoints;
-(int)zilchPointIndex;
-(void)setZilchPointIndex:(int)arg1 ;
-(void)setHasZilchPointIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPointIndex;
-(BOOL)readFrom:(id)arg1 ;
@end

