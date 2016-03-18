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

@interface GEORouteDetails : PBCodable <NSCopying> {

	double _timeSinceRouteResponse;
	int _resultIndex;
	unsigned _stepID;
	BOOL _isNearCurrentlyDisplayedStep;
	BOOL _isNearRoute;
	BOOL _isUserTrackingOn;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                   //@synthesize resultIndex=_resultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearRoute; 
@property (assign,nonatomic) BOOL isNearRoute;                                  //@synthesize isNearRoute=_isNearRoute - In the implementation block
@property (assign,nonatomic) BOOL hasIsNearCurrentlyDisplayedStep; 
@property (assign,nonatomic) BOOL isNearCurrentlyDisplayedStep;                 //@synthesize isNearCurrentlyDisplayedStep=_isNearCurrentlyDisplayedStep - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserTrackingOn; 
@property (assign,nonatomic) BOOL isUserTrackingOn;                             //@synthesize isUserTrackingOn=_isUserTrackingOn - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceRouteResponse; 
@property (assign,nonatomic) double timeSinceRouteResponse;                     //@synthesize timeSinceRouteResponse=_timeSinceRouteResponse - In the implementation block
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(BOOL)arg3 nearCurrentlyDisplayedStep:(BOOL)arg4 userTrackingOn:(BOOL)arg5 timeSinceResponse:(double)arg6 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 ;
+(id)routeDetailsWithResultIndex:(int)arg1 ;
-(id)initWithResultIndex:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(unsigned)stepID;
-(BOOL)hasStepID;
-(void)setTimeSinceRouteResponse:(double)arg1 ;
-(void)setIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(BOOL)hasIsNearRoute;
-(BOOL)hasIsUserTrackingOn;
-(void)setHasIsNearCurrentlyDisplayedStep:(BOOL)arg1 ;
-(BOOL)isUserTrackingOn;
-(int)resultIndex;
-(double)timeSinceRouteResponse;
-(void)setResultIndex:(int)arg1 ;
-(void)setHasResultIndex:(BOOL)arg1 ;
-(void)setIsUserTrackingOn:(BOOL)arg1 ;
-(void)setHasTimeSinceRouteResponse:(BOOL)arg1 ;
-(void)setIsNearRoute:(BOOL)arg1 ;
-(BOOL)hasIsNearCurrentlyDisplayedStep;
-(void)setHasIsNearRoute:(BOOL)arg1 ;
-(BOOL)isNearCurrentlyDisplayedStep;
-(void)setHasIsUserTrackingOn:(BOOL)arg1 ;
-(BOOL)hasResultIndex;
-(BOOL)hasTimeSinceRouteResponse;
-(BOOL)isNearRoute;
-(BOOL)readFrom:(id)arg1 ;
@end

