/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKKnowledgeStore;

@interface HMDDuetEventManager : NSObject {

	_DKKnowledgeStore* _store;

}

@property (nonatomic,retain) _DKKnowledgeStore * store;              //@synthesize store=_store - In the implementation block
+(id)sharedInstance;
+(id)actionSetTypeToUUIDMap;
+(id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2 ;
+(id)eventStreamForType:(unsigned long long)arg1 ;
-(_DKKnowledgeStore *)store;
-(void)setStore:(_DKKnowledgeStore *)arg1 ;
-(id)init;
-(void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
@end

