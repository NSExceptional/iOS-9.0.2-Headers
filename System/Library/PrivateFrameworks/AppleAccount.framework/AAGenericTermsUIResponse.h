/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString, NSData;

@interface AAGenericTermsUIResponse : AAResponse {

	NSDictionary* _responseTermsDictionary;
	NSString* _responseAgreeURL;
	NSData* _responseData;

}

@property (nonatomic,readonly) NSData * responseData; 
@property (nonatomic,readonly) NSString * agreeURL; 
@property (nonatomic,readonly) NSDictionary * termsDictionary; 
-(NSDictionary *)termsDictionary;
-(NSString *)agreeURL;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSData *)responseData;
@end

