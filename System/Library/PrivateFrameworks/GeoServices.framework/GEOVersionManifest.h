/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOVersionManifest : PBCodable <NSCopying> {

	NSMutableArray* _serviceVersions;

}

@property (nonatomic,retain) NSMutableArray * serviceVersions;              //@synthesize serviceVersions=_serviceVersions - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addServiceVersion:(id)arg1 ;
-(NSMutableArray *)serviceVersions;
-(id)serviceVersionAtIndex:(unsigned long long)arg1 ;
-(void)clearServiceVersions;
-(unsigned long long)serviceVersionsCount;
-(void)setServiceVersions:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

