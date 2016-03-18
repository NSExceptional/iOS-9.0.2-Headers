/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute;

@interface GEORouteMapMatcher : NSObject {

	GEOComposedRoute* _route;

}

@property (nonatomic,readonly) GEOComposedRoute * route;              //@synthesize route=_route - In the implementation block
-(GEOComposedRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(SCD_Struct_GE16)_locationCoordinateFromRouteCoordinate:(const PolylineCoordinate*)arg1 ;
-(void)_closestPointFromCoordinate:(const SCD_Struct_GE16*)arg1 toSegmentStart:(const PolylineCoordinate*)arg2 toSegmentEnd:(const PolylineCoordinate*)arg3 outRouteCoordinate:(PolylineCoordinate*)arg4 outLocationCoordinate:(SCD_Struct_GE16*)arg5 outDistanceFromSegment:(double*)arg6 ;
-(SCD_Struct_GE178)_updateParamsForStepProgression:(const SCD_Struct_GE178*)arg1 trackedLocation:(id)arg2 minNumMatchesToAdvanceStep:(unsigned long long)arg3 minDistanceAlongStepToAdvance:(double)arg4 ;
-(double)_modifiedHorizontalAccuracy:(double)arg1 routeIndex:(unsigned)arg2 ;
-(BOOL)isLocationCoordinate:(SCD_Struct_GE16)arg1 withinDistance:(double)arg2 alongRoute:(double)arg3 ;
-(BOOL)_clampSegment:(PolylineCoordinate*)arg1 endCoord:(PolylineCoordinate*)arg2 outSegmentLength:(double*)arg3 firstAllowedMatch:(PolylineCoordinate)arg4 maxDistance:(double)arg5 ;
-(id)matchToRouteWithLocation:(id)arg1 trackedLocation:(id)arg2 onDate:(id)arg3 maxDistance:(double)arg4 ;
-(void)_enumerateRouteSegmentsNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(double)_closestDistanceFromCoordinate:(SCD_Struct_GE16)arg1 alongRoute:(double)arg2 ;
@end

