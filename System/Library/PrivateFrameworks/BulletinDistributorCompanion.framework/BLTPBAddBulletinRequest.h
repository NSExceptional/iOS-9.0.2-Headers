/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BLTPBBulletin;

@interface BLTPBAddBulletinRequest : PBRequest <NSCopying> {

	double _date;
	BLTPBBulletin* _bulletin;
	unsigned _updateType;
	BOOL _shouldPlayLightsAndSirens;
	SCD_Struct_BL6 _has;

}

@property (nonatomic,readonly) BOOL hasBulletin; 
@property (nonatomic,retain) BLTPBBulletin * bulletin;                       //@synthesize bulletin=_bulletin - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPlayLightsAndSirens; 
@property (assign,nonatomic) BOOL shouldPlayLightsAndSirens;                 //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateType; 
@property (assign,nonatomic) unsigned updateType;                            //@synthesize updateType=_updateType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)shouldPlayLightsAndSirens;
-(void)setShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasBulletin;
-(void)setHasShouldPlayLightsAndSirens:(BOOL)arg1 ;
-(BOOL)hasShouldPlayLightsAndSirens;
-(void)setHasUpdateType:(BOOL)arg1 ;
-(BOOL)hasUpdateType;
-(BLTPBBulletin *)bulletin;
-(void)setBulletin:(BLTPBBulletin *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasDate;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUpdateType:(unsigned)arg1 ;
-(unsigned)updateType;
@end
