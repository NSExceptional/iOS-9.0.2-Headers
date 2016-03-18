/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PLCloudBackgroundTransferMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _pendingBGTransfers;

}
+(id)sharedInstance;
+(id)identifierForResource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)completeBackgroundTransferForResource:(id)arg1 withError:(id)arg2 ;
-(void)completeBackgroundTransferWithIdentifier:(id)arg1 withError:(id)arg2 ;
-(void)abandonAllBackgroundTransfers;
-(void)abandonTransfersForItemIdentifier:(id)arg1 ;
-(void)onCompletedResource:(id)arg1 invokeBlock:(/*^block*/id)arg2 ;
@end

