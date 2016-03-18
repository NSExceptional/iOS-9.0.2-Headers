/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSArray;

@interface RadioShareInfoRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	long long _shareType;
	long long _stationID;
	NSString* _stationHash;
	NSArray* _acceptedMIMETypes;

}

@property (nonatomic,copy) NSArray * acceptedMIMETypes;              //@synthesize acceptedMIMETypes=_acceptedMIMETypes - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)acceptedMIMETypes;
-(void)startWithShareInformationCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithStation:(id)arg1 shareType:(long long)arg2 ;
-(void)setAcceptedMIMETypes:(NSArray *)arg1 ;
@end

