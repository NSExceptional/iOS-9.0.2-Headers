/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray;

@interface RadioGetTrackEventsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _stationTrackIDs;

}
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStationTrackIDs:(id)arg1 ;
@end

