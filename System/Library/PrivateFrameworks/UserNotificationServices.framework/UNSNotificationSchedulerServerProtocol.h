/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UNSNotificationSchedulerServerProtocol <NSObject>
@required
-(void)scheduledLocalNotificationsForBundleIdentifier:(id)arg1 withResult:(/*^block*/id)arg2;
-(void)addScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)setScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cancelScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)scheduleForBundleIdentifier:(id)arg1 fetchRequest:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)snoozeScheduledLocalNotifications:(id)arg1 forBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)setObservingScheduledLocalNotifications:(BOOL)arg1 forBundleIdentifier:(id)arg2;

@end

