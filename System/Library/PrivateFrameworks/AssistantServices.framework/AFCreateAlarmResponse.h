/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse {

	NSString* _alarmIdentifier;

}

@property (nonatomic,copy) NSString * alarmIdentifier;              //@synthesize alarmIdentifier=_alarmIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAlarmIdentifier:(NSString *)arg1 ;
-(NSString *)alarmIdentifier;
@end

