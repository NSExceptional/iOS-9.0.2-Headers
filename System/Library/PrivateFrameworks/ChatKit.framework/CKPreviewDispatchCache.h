/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)mapThumbnailQueue;
+(id)detailsPreviewCache;
+(id)transcriptPreviewCache;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)didReceiveMemoryWarning;
-(void)resume;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(id)notificationCenter;
-(void)transferRemoved:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)endGeneratingForKey:(id)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(CKDispatchCache *)dispatchCache;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(CKMultiDict *)pendingBlocks;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
@end

