/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebCookieStorageObjCAdapter : NSObject {

	/*function pointer*/void* m_cookieChangeCallback;

}
-(void)notifyCookiesChangedOnMainThread;
-(void)cookiesChangedNotificationHandler:(id)arg1 ;
-(void)startListeningForCookieChangeNotificationsWithCallback:(/*function pointer*/void*)arg1 ;
-(void)stopListeningForCookieChangeNotifications;
@end

