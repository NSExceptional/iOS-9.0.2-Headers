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

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable <NSCopying> {

	NSMutableArray* _photoInfos;
	int _photoType;
	NSString* _uid;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) BOOL hasPhotoType; 
@property (assign,nonatomic) int photoType;                            //@synthesize photoType=_photoType - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoInfos;              //@synthesize photoInfos=_photoInfos - In the implementation block
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid;                           //@synthesize uid=_uid - In the implementation block
-(id)initWithPlaceDataPhoto:(id)arg1 ;
-(id)_photoInfoForSize:(int)arg1 includeSmallerSizes:(BOOL)arg2 ;
-(id)_bestURLForSize:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasUid;
-(void)setUid:(NSString *)arg1 ;
-(void)addPhotoInfo:(id)arg1 ;
-(void)clearPhotoInfos;
-(void)setHasPhotoType:(BOOL)arg1 ;
-(void)setPhotoType:(int)arg1 ;
-(void)setPhotoInfos:(NSMutableArray *)arg1 ;
-(BOOL)hasPhotoType;
-(NSMutableArray *)photoInfos;
-(int)photoType;
-(id)photoInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)photoInfosCount;
-(BOOL)readFrom:(id)arg1 ;
@end

