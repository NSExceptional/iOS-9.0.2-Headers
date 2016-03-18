/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (nonatomic,retain) NSString * tzid; 
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
-(id)description;
-(id)initWithValue:(id)arg1 ;
-(id)components;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(BOOL)hasFloatingTimeZone;
-(NSString *)tzid;
-(BOOL)hasTimeComponent;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(void)setTzid:(NSString *)arg1 ;
@end

