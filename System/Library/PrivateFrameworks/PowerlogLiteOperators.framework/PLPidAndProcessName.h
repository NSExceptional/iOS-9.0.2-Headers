/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface PLPidAndProcessName : NSObject {

	NSNumber* _pid;
	NSString* _processName;

}

@property (retain) NSNumber * pid;                      //@synthesize pid=_pid - In the implementation block
@property (retain) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(id)description;
-(NSString *)processName;
-(void)setPid:(NSNumber *)arg1 ;
-(NSNumber *)pid;
-(void)setProcessName:(NSString *)arg1 ;
@end
