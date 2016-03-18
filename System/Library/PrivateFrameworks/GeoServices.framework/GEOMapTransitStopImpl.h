/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapTransitNodeBaseImpl.h>
#import <libobjc.A.dylib/GEOMapTransitStop.h>

@protocol GEOMapTransitHall;
@class NSString;

@interface GEOMapTransitStopImpl : GEOMapTransitNodeBaseImpl <GEOMapTransitStop> {

	id<GEOMapTransitHall> _hall;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE57 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long hallID; 
-(void)dealloc;
-(id)findLinksOut:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findLinksIn:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findHall:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hallID;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

