/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSNumber;

@interface CacheDeleteRecentServiceInfo : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	NSNumber* _amount;

}

@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSNumber * amount;               //@synthesize amount=_amount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cacheDeleteRecentServiceInfo:(id)arg1 timestamp:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setAmount:(NSNumber *)arg1 ;
-(NSNumber *)amount;
-(id)initWithAmount:(id)arg1 timestamp:(id)arg2 ;
-(BOOL)validateTimeStamp:(double)arg1 ;
@end

