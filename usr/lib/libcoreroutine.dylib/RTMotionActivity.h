/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface RTMotionActivity : NSObject <NSCopying> {

	unsigned long long _type;
	unsigned long long _confidence;
	NSDate* _startDate;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
-(NSDate *)startDate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)confidence;
-(id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 startDate:(id)arg3 ;
-(id)initWithMotionActivity:(id)arg1 ;
@end

