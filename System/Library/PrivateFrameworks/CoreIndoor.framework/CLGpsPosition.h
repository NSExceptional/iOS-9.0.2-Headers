/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLGpsPosition : NSObject <NSSecureCoding> {

	float _horzUncSemiMaj;
	float _horzUncSemiMin;
	float _horzUncSemiMajAz;
	double _deltaDistance;
	double _deltaDistanceAccuracy;
	double _timestampGps;
	SCD_Struct_CL3 _gpsLocation;

}

@property (assign,nonatomic) SCD_Struct_CL4 gpsLocation;                //@synthesize gpsLocation=_gpsLocation - In the implementation block
@property (assign,nonatomic) double deltaDistance;                      //@synthesize deltaDistance=_deltaDistance - In the implementation block
@property (assign,nonatomic) double deltaDistanceAccuracy;              //@synthesize deltaDistanceAccuracy=_deltaDistanceAccuracy - In the implementation block
@property (assign,nonatomic) double timestampGps;                       //@synthesize timestampGps=_timestampGps - In the implementation block
@property (assign,nonatomic) float horzUncSemiMaj;                      //@synthesize horzUncSemiMaj=_horzUncSemiMaj - In the implementation block
@property (assign,nonatomic) float horzUncSemiMin;                      //@synthesize horzUncSemiMin=_horzUncSemiMin - In the implementation block
@property (assign,nonatomic) float horzUncSemiMajAz;                    //@synthesize horzUncSemiMajAz=_horzUncSemiMajAz - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(SCD_Struct_CL4)gpsLocation;
-(id)initWithLocation:(const SCD_Struct_CL4*)arg1 andPrivateLocation:(const SCD_Struct_CL5*)arg2 ;
-(void)setGpsLocation:(SCD_Struct_CL4)arg1 ;
-(double)deltaDistance;
-(void)setDeltaDistance:(double)arg1 ;
-(double)deltaDistanceAccuracy;
-(void)setDeltaDistanceAccuracy:(double)arg1 ;
-(double)timestampGps;
-(void)setTimestampGps:(double)arg1 ;
-(float)horzUncSemiMaj;
-(void)setHorzUncSemiMaj:(float)arg1 ;
-(float)horzUncSemiMin;
-(void)setHorzUncSemiMin:(float)arg1 ;
-(float)horzUncSemiMajAz;
-(void)setHorzUncSemiMajAz:(float)arg1 ;
@end

