/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)urlString;
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
-(id)urlRequest;
@end

