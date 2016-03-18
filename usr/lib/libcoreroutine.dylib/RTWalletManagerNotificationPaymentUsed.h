/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSDate, CLLocation;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification {

	NSString* _identifier;
	NSDate* _date;
	CLLocation* _location;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(id)notificationName;
-(id)init;
-(NSString *)identifier;
-(NSDate *)date;
-(CLLocation *)location;
-(id)initWithIdentifier:(id)arg1 date:(id)arg2 location:(id)arg3 ;
@end

