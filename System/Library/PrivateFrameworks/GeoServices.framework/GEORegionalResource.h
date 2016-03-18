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

@class NSMutableArray;

@interface GEORegionalResource : PBCodable <NSCopying> {

	SCD_Struct_GE88* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	SCD_Struct_GE52* _validSubManifestVersions;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,x,nonatomic) unsigned x;                                                    //@synthesize x=_x - In the implementation block
@property (assign,nonatomic) BOOL hasY; 
@property (assign,y,nonatomic) unsigned y;                                                    //@synthesize y=_y - In the implementation block
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,z,nonatomic) unsigned z;                                                    //@synthesize z=_z - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                          //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                   //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                  //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE88* tileRanges; 
@property (nonatomic,readonly) unsigned long long validSubManifestVersionsCount; 
@property (nonatomic,readonly) unsigned* validSubManifestVersions; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(void)setX:(unsigned)arg1 ;
-(unsigned)y;
-(void)setY:(unsigned)arg1 ;
-(unsigned)z;
-(void)setZ:(unsigned)arg1 ;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icons;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearAttributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(unsigned long long)attributionsCount;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(NSMutableArray *)attributions;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconsCount;
-(void)addIconChecksum:(id)arg1 ;
-(void)clearIconChecksums;
-(void)clearIcons;
-(unsigned long long)iconChecksumsCount;
-(NSMutableArray *)iconChecksums;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)clearTileRanges;
-(void)setHasX:(BOOL)arg1 ;
-(void)addTileRange:(SCD_Struct_GE88)arg1 ;
-(SCD_Struct_GE88*)tileRanges;
-(void)setValidSubManifestVersions:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasX;
-(unsigned)validSubManifestVersionAtIndex:(unsigned long long)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(unsigned long long)validSubManifestVersionsCount;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(unsigned*)validSubManifestVersions;
-(SCD_Struct_GE88)tileRangeAtIndex:(unsigned long long)arg1 ;
-(void)clearValidSubManifestVersions;
-(unsigned long long)tileRangesCount;
-(void)addValidSubManifestVersion:(unsigned)arg1 ;
-(BOOL)hasZ;
-(void)setTileRanges:(SCD_Struct_GE88*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
@end

