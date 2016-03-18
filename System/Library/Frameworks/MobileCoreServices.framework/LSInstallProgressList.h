/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)progressForBundleID:(id)arg1 ;
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
-(void)removeProgressForBundleID:(id)arg1 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

