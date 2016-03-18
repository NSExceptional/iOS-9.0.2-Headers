/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _maxNumberOfTracks;

}

@property (assign,nonatomic) unsigned long long maxNumberOfTracks;              //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
-(void)cancel;
-(id)init;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
@end

