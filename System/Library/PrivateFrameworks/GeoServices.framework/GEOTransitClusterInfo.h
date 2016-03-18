/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOInstructionSet;

@interface GEOTransitClusterInfo : PBCodable <NSCopying> {

	SCD_Struct_GE52* _routeDetailsPrimaryArtworkIndexs;
	SCD_Struct_GE52* _steppingArtworkIndexs;
	GEOInstructionSet* _instructions;
	unsigned _routeDetailsSecondaryArtworkIndex;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) BOOL hasInstructions; 
@property (nonatomic,retain) GEOInstructionSet * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) unsigned long long routeDetailsPrimaryArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* routeDetailsPrimaryArtworkIndexs; 
@property (nonatomic,readonly) unsigned long long steppingArtworkIndexsCount; 
@property (nonatomic,readonly) unsigned* steppingArtworkIndexs; 
@property (assign,nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex; 
@property (assign,nonatomic) unsigned routeDetailsSecondaryArtworkIndex;                              //@synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)routeDetailsPrimaryArtworkIndexsCount;
-(unsigned long long)steppingArtworkIndexsCount;
-(unsigned)steppingArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned*)steppingArtworkIndexs;
-(void)addRouteDetailsPrimaryArtworkIndex:(unsigned)arg1 ;
-(void)clearSteppingArtworkIndexs;
-(void)setInstructions:(GEOInstructionSet *)arg1 ;
-(GEOInstructionSet *)instructions;
-(BOOL)hasInstructions;
-(unsigned)routeDetailsSecondaryArtworkIndex;
-(unsigned)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setRouteDetailsSecondaryArtworkIndex:(unsigned)arg1 ;
-(void)setSteppingArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasRouteDetailsSecondaryArtworkIndex:(BOOL)arg1 ;
-(void)setRouteDetailsPrimaryArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addSteppingArtworkIndex:(unsigned)arg1 ;
-(void)clearRouteDetailsPrimaryArtworkIndexs;
-(BOOL)hasRouteDetailsSecondaryArtworkIndex;
-(unsigned*)routeDetailsPrimaryArtworkIndexs;
-(BOOL)readFrom:(id)arg1 ;
@end

