/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTBatteryManagerNotificationChargerConnected : RTNotification {

	BOOL _connected;

}

@property (nonatomic,readonly) BOOL connected;              //@synthesize connected=_connected - In the implementation block
+(id)notificationName;
-(BOOL)connected;
-(id)initWithChargerConnected:(BOOL)arg1 ;
@end

