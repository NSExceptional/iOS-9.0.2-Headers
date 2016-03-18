/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SPComplicationData : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	double _timeToLive;

}

@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timeToLive;               //@synthesize timeToLive=_timeToLive - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)timeToLive;
-(void)setTimeToLive:(double)arg1 ;
@end

