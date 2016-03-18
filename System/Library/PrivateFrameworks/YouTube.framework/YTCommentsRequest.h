/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSMutableString, YTVideo;

@interface YTCommentsRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _comments;
	unsigned _startIndex;
	unsigned _totalResults;
	NSMutableString* _moreCommentsURLString;
	YTVideo* _video;

}
+(unsigned)commentsPerRequest;
-(int)parseData:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)dealloc;
-(void)didParseData;
-(void)_requestCommentsFromURL:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(void)requestMoreComments;
-(id)initRequestingCommentsForVideo:(id)arg1 withDelegate:(id)arg2 ;
@end

