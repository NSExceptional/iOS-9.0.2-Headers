/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@protocol OS_dispatch_semaphore;
@class NSObject, UILocalNotification, NSString, NSDictionary;

@interface UIHandleLocalNotificationAction : BSAction {

	NSObject*<OS_dispatch_semaphore> _decodeSemaphore;
	UILocalNotification* _cachedNotification;

}

@property (nonatomic,copy,readonly) UILocalNotification * notification; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,copy,readonly) NSDictionary * userResponse; 
-(long long)UIActionType;
-(UILocalNotification *)notification;
-(NSString *)action;
-(NSDictionary *)userResponse;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithNotification:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithNotification:(id)arg1 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
@end

