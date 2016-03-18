/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOLocationShiftFunctionResponse : NSObject {

	SCD_Struct_GE16 _originalCoordinate;
	SCD_Struct_GE16 _shiftedCoordinate;
	double _creationTime;
	double _params[9];
	double _radius;
	BOOL _isPolyLocationShift;
	BOOL _shouldUsePolyShiftFunction;

}

@property (assign,nonatomic) SCD_Struct_GE16 originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
-(SCD_Struct_GE16)originalCoordinate;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE16)arg2 ;
-(id)initWithLocationShiftResponse:(id)arg1 originalCoordinate:(SCD_Struct_GE16)arg2 ;
-(void)setOriginalCoordinate:(SCD_Struct_GE16)arg1 ;
-(BOOL)isValidForCoordinate:(SCD_Struct_GE16)arg1 ;
-(SCD_Struct_GE16)shiftedCoordinateForCoordinate:(SCD_Struct_GE16)arg1 accuracy:(double*)arg2 ;
@end

