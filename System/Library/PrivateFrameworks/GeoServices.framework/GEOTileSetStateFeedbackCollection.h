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

@interface GEOTileSetStateFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	double _durationInOldState;
	double _newCoverage;
	double _oldCoverage;
	double _sessionRelativeTimestamp;
	int _tileSetStateType;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;               //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                     //@synthesize durationInOldState=_durationInOldState - In the implementation block
@property (assign,nonatomic) BOOL hasTileSetStateType; 
@property (assign,nonatomic) int tileSetStateType;                          //@synthesize tileSetStateType=_tileSetStateType - In the implementation block
@property (assign,nonatomic) BOOL hasOldCoverage; 
@property (assign,nonatomic) double oldCoverage;                            //@synthesize oldCoverage=_oldCoverage - In the implementation block
@property (assign,nonatomic) BOOL hasNewCoverage; 
@property (assign,nonatomic) double newCoverage;                            //@synthesize newCoverage=_newCoverage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasTileSetStateType;
-(void)setHasNewCoverage:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(BOOL)hasNewCoverage;
-(void)setNewCoverage:(double)arg1 ;
-(double)sessionRelativeTimestamp;
-(void)setHasTileSetStateType:(BOOL)arg1 ;
-(void)setDurationInOldState:(double)arg1 ;
-(BOOL)hasOldCoverage;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(void)setTileSetStateType:(int)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(double)newCoverage;
-(double)oldCoverage;
-(void)setOldCoverage:(double)arg1 ;
-(void)setHasOldCoverage:(BOOL)arg1 ;
-(double)durationInOldState;
-(int)tileSetStateType;
-(BOOL)readFrom:(id)arg1 ;
@end

