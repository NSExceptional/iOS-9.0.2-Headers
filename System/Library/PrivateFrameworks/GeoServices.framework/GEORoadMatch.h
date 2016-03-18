/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString;

@interface GEORoadMatch : NSObject {

	SCD_Struct_GE114* _roadFeature;
	NSString* _roadName;
	SCD_Struct_GE16 _coordinateOnRoad;
	double _courseOnRoad;
	double _distanceFromRoad;
	double _roadWidth;
	double _distanceFromJunction;
	double _junctionRadius;

}

@property (nonatomic,readonly) SCD_Struct_GE114* roadFeature;               //@synthesize roadFeature=_roadFeature - In the implementation block
@property (nonatomic,copy) NSString * roadName;                             //@synthesize roadName=_roadName - In the implementation block
@property (assign,nonatomic) SCD_Struct_GE16 coordinateOnRoad;              //@synthesize coordinateOnRoad=_coordinateOnRoad - In the implementation block
@property (assign,nonatomic) double courseOnRoad;                           //@synthesize courseOnRoad=_courseOnRoad - In the implementation block
@property (assign,nonatomic) double distanceFromRoad;                       //@synthesize distanceFromRoad=_distanceFromRoad - In the implementation block
@property (assign,nonatomic) double roadWidth;                              //@synthesize roadWidth=_roadWidth - In the implementation block
@property (assign,nonatomic) double distanceFromJunction;                   //@synthesize distanceFromJunction=_distanceFromJunction - In the implementation block
@property (assign,nonatomic) double junctionRadius;                         //@synthesize junctionRadius=_junctionRadius - In the implementation block
-(void)dealloc;
-(NSString *)roadName;
-(double)roadWidth;
-(void)setRoadFeature:(SCD_Struct_GE114*)arg1 ;
-(void)setDistanceFromRoad:(double)arg1 ;
-(SCD_Struct_GE114*)roadFeature;
-(void)setRoadWidth:(double)arg1 ;
-(double)courseOnRoad;
-(double)distanceFromRoad;
-(double)distanceFromJunction;
-(SCD_Struct_GE16)coordinateOnRoad;
-(void)setJunctionRadius:(double)arg1 ;
-(void)setCourseOnRoad:(double)arg1 ;
-(void)setCoordinateOnRoad:(SCD_Struct_GE16)arg1 ;
-(void)setDistanceFromJunction:(double)arg1 ;
-(void)setRoadName:(NSString *)arg1 ;
-(double)junctionRadius;
@end

