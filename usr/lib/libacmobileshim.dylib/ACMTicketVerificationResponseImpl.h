/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError, NSString;

@interface ACMTicketVerificationResponseImpl : NSObject <ACMTicketVerificationResponse> {

	NSDictionary* _rawResponseData;
	NSError* _error;
	id _userInfo;

}

@property (retain) id userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDictionary * rawResponseData;                  //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSNumber * personDSID; 
-(NSError *)error;
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(void)setError:(NSError *)arg1 ;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(NSDictionary *)rawResponseData;
-(NSNumber *)personDSID;
@end

