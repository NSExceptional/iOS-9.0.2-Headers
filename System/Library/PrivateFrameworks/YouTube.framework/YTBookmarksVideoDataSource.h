/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTVideoDataSource.h>

@class NSMutableArray, YTSearchRequest;

@interface YTBookmarksVideoDataSource : YTVideoDataSource {

	NSMutableArray* _bookmarkedShortIDs;
	YTSearchRequest* _bookmarksSearchRequest;
	BOOL _lastReloadWasAccountsFavorites;

}
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(BOOL)isLoading;
-(void)searchRequest:(id)arg1 foundBatchURL:(id)arg2 ;
-(void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned)arg3 videosRemaining:(unsigned)arg4 ;
-(unsigned)maxVideosToSave;
-(void)_nextBatch;
-(void)addVideo:(id)arg1 ;
@end

