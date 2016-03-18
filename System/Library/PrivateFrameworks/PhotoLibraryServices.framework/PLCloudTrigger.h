/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PLCloudTrigger : NSObject {

	NSObject*<OS_dispatch_queue> _triggerQueue;
	NSMutableDictionary* _subscriptions;

}
-(void)dealloc;
-(id)init;
-(void)activate;
-(void)triggerWithContextObject:(id)arg1 ;
-(void)subscribeWithInstance:(id)arg1 selector:(SEL)arg2 ;
-(void)unsubscribeWithInstance:(id)arg1 ;
@end

