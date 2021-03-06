/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTEventStark : RTEvent <NSSecureCoding> {

	long long _starkState;

}

@property (nonatomic,readonly) long long starkState;              //@synthesize starkState=_starkState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromStarkState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)starkState;
-(id)initWithDeviceStarkState:(long long)arg1 source:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 locationIdentifier:(id)arg5 ;
@end

