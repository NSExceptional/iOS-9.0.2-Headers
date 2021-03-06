/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetWriterHelper, NSObject, AVKeyPathDependencyManager;

@interface AVAssetWriterInternal : NSObject {

	AVWeakReference* weakReference;
	AVAssetWriterHelper* helper;
	NSObject*<OS_dispatch_queue> helperReadWriteQueue;
	AVKeyPathDependencyManager* keyPathDependencyManager;

}
@end

