/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) SCD_Struct_CL1 center; 
@property (nonatomic,readonly) double radius; 
+(id)circularRegionFromMapRegion:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCenter:(SCD_Struct_CL1)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CL1)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsCoordinate:(SCD_Struct_CL1)arg1 ;
-(double)radius;
@end

