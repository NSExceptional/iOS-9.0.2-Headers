/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	long long _request;
	long long _objectAnchor;

}

@property (readonly) long long status; 
@property (readonly) long long request; 
@property (readonly) long long objectAnchor;              //@synthesize objectAnchor=_objectAnchor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(long long)objectAnchor;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 objectAnchor:(long long)arg3 ;
@end

