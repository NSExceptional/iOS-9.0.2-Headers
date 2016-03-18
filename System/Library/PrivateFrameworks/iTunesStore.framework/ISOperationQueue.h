/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(long long)maxConcurrentOperationCount;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)operations;
-(long long)operationCount;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
@end

