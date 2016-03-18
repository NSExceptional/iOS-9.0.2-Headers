/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface HDCodableAchievement : PBCodable <NSCopying> {

	long long _achievementType;
	double _completedDate;
	double _doubleValue;
	long long _intValue;
	NSData* _extraData;
	NSData* _uuid;
	SCD_Struct_HD31 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) long long achievementType;              //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                   //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                     //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                     //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL hasExtraData; 
@property (nonatomic,retain) NSData * extraData;                     //@synthesize extraData=_extraData - In the implementation block
-(id)decodedUUID;
-(id)decodedCreatedDate;
-(id)decodedValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)doubleValue;
-(long long)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setIntValue:(long long)arg1 ;
-(void)setAchievementType:(long long)arg1 ;
-(void)setCompletedDate:(double)arg1 ;
-(void)setExtraData:(NSData *)arg1 ;
-(long long)achievementType;
-(double)completedDate;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)extraData;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)hasExtraData;
-(BOOL)hasUuid;
@end

