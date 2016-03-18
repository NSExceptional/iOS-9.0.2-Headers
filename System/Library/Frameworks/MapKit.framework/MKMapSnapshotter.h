/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator, NSXPCConnection;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;
	NSXPCConnection* _snapshotService;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(void)_enterBackground:(id)arg1 ;
-(void)_cleanupSnapshotCreator;
-(void)_exitBackground:(id)arg1 ;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performSnapshot;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isLoading;
-(void)_cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_failWithError:(id)arg1 ;
@end

