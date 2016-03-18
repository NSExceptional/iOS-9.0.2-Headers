/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	long long _proximity;
	double _accuracy;
	long long _rssi;

}

@property (nonatomic,readonly) NSUUID * proximityUUID;              //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * major;                    //@synthesize major=_major - In the implementation block
@property (nonatomic,readonly) NSNumber * minor;                    //@synthesize minor=_minor - In the implementation block
@property (nonatomic,readonly) long long proximity;                 //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,readonly) double accuracy;                     //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) long long rssi;                      //@synthesize rssi=_rssi - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(long long)arg4 accuracy:(double)arg5 rssi:(long long)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)accuracy;
-(NSUUID *)proximityUUID;
-(long long)proximity;
-(long long)rssi;
-(NSNumber *)major;
-(NSNumber *)minor;
@end

