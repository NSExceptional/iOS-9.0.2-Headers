/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationServices.framework/UserNotificationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UNSUserNotificationRegistrar : NSObject {

	NSString* _bundleIdentifier;

}

@property (copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)bundleIdentifier;
-(void)registerUserNotificationSettings:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(id)userNotificationSettings;
-(void)requestTokenForRemoteNotificationsWithResult:(/*^block*/id)arg1 ;
-(void)invalidateTokenForRemoteNotifications;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)userNotificationSettingsWithResult:(/*^block*/id)arg1 ;
-(void)userNotificationTypesWithResult:(/*^block*/id)arg1 ;
-(unsigned long long)userNotificationTypes;
-(void)registerBadgeSetting;
@end
