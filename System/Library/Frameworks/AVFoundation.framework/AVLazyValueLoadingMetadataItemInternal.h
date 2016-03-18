/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
@class AVMetadataItemValueRequest, NSError, NSMutableArray, NSObject;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {

	id<NSObject><NSCopying> value;
	AVMetadataItemValueRequest* valueRequest;
	/*^block*/id valueLoadingHandler;
	long long valueStatus;
	NSError* valueLoadingError;
	NSMutableArray* loadingCompletionHandlers;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

