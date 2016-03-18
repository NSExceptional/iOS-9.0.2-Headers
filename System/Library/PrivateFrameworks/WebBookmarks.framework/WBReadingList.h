/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WBReadingListPrivate, NSObject;

@interface WBReadingList : NSObject {

	WBReadingListPrivate* _private;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(BOOL)supportsURL:(id)arg1 ;
+(id)defaultReadingList;
-(id)init;
-(id)_init;
-(BOOL)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4 ;
@end

