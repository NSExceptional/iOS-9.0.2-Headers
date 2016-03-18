/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation, GEOQuickETATransitDeparturesInfo, NSMutableArray;

@interface GEOQuickETAResponse : NSObject {

	GEOLocation* _sourceLocation;
	GEOLocation* _destinationLocation;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	double _distance;
	GEOQuickETATransitDeparturesInfo* _transitDeparturesInfo;
	double _distanceToDepartureStop;
	double _walkingDurationToDepartureStop;
	NSMutableArray* _sortedETAs;

}

@property (nonatomic,readonly) GEOLocation * sourceLocation;                                          //@synthesize sourceLocation=_sourceLocation - In the implementation block
@property (nonatomic,readonly) GEOLocation * destinationLocation;                                     //@synthesize destinationLocation=_destinationLocation - In the implementation block
@property (nonatomic,readonly) unsigned responseETASeconds;                                           //@synthesize responseETASeconds=_responseETASeconds - In the implementation block
@property (nonatomic,readonly) unsigned baselineETASeconds;                                           //@synthesize baselineETASeconds=_baselineETASeconds - In the implementation block
@property (nonatomic,readonly) double distance;                                                       //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) GEOQuickETATransitDeparturesInfo * transitDeparturesInfo;              //@synthesize transitDeparturesInfo=_transitDeparturesInfo - In the implementation block
@property (nonatomic,readonly) double distanceToDepartureStop;                                        //@synthesize distanceToDepartureStop=_distanceToDepartureStop - In the implementation block
@property (nonatomic,readonly) double walkingDurationToDepartureStop;                                 //@synthesize walkingDurationToDepartureStop=_walkingDurationToDepartureStop - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedETAs;                                           //@synthesize sortedETAs=_sortedETAs - In the implementation block
-(void)dealloc;
-(GEOLocation *)destinationLocation;
-(NSMutableArray *)sortedETAs;
-(double)walkingDurationToDepartureStop;
-(id)initWithETAResult:(id)arg1 fromRequest:(id)arg2 ;
-(GEOLocation *)sourceLocation;
-(unsigned)responseETASeconds;
-(GEOQuickETATransitDeparturesInfo *)transitDeparturesInfo;
-(unsigned)baselineETASeconds;
-(double)distanceToDepartureStop;
-(id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2 ;
-(double)distance;
@end

