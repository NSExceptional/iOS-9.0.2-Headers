/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSPortDeathWatcher, NSMutableArray, NSLock;

@interface SBSpringBoardDiedDeactivationHandler : NSObject {

	BSPortDeathWatcher* _portDeathWatcher;
	NSMutableArray* _handlerBlockArray;
	NSLock* _lock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)addDeactivationBlock:(/*^block*/id)arg1 ;
@end
