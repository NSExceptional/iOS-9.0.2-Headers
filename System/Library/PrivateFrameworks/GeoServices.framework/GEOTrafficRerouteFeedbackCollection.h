/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {

	NSData* _directionResponseID;
	unsigned _oldRouteHistoricTravelTime;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	NSData* _reroutedRouteID;
	unsigned _reroutedRouteTravelTime;
	BOOL _oldRouteBlocked;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) BOOL hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime;                           //@synthesize oldRouteTravelTime=_oldRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime;                      //@synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime;                   //@synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime;              //@synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasOldRouteBlocked; 
@property (assign,nonatomic) BOOL oldRouteBlocked;                                  //@synthesize oldRouteBlocked=_oldRouteBlocked - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents;                    //@synthesize oldRouteIncidents=_oldRouteIncidents - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID;                          //@synthesize directionResponseID=_directionResponseID - In the implementation block
@property (nonatomic,readonly) BOOL hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID;                                   //@synthesize oldRouteID=_oldRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID;                              //@synthesize reroutedRouteID=_reroutedRouteID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDirectionResponseID;
-(NSData *)directionResponseID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(unsigned)oldRouteTravelTime;
-(void)clearOldRouteIncidents;
-(NSData *)reroutedRouteID;
-(NSData *)oldRouteID;
-(void)setHasOldRouteTravelTime:(BOOL)arg1 ;
-(BOOL)hasReroutedRouteHistoricTravelTime;
-(BOOL)hasReroutedRouteID;
-(BOOL)hasReroutedRouteTravelTime;
-(void)setHasReroutedRouteHistoricTravelTime:(BOOL)arg1 ;
-(unsigned long long)oldRouteIncidentsCount;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(BOOL)hasOldRouteID;
-(void)setHasReroutedRouteTravelTime:(BOOL)arg1 ;
-(id)oldRouteIncidentsAtIndex:(unsigned long long)arg1 ;
-(unsigned)reroutedRouteTravelTime;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(unsigned)oldRouteHistoricTravelTime;
-(unsigned)reroutedRouteHistoricTravelTime;
-(BOOL)hasOldRouteHistoricTravelTime;
-(void)addOldRouteIncidents:(id)arg1 ;
-(NSMutableArray *)oldRouteIncidents;
-(void)setOldRouteID:(NSData *)arg1 ;
-(void)setHasOldRouteHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasOldRouteTravelTime;
-(void)setHasOldRouteBlocked:(BOOL)arg1 ;
-(BOOL)hasOldRouteBlocked;
-(BOOL)oldRouteBlocked;
-(void)setOldRouteBlocked:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

