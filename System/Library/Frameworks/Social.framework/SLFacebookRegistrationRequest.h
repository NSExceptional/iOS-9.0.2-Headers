/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLFacebookRequest.h>

@class SLFacebookRegistrationInfo;

@interface SLFacebookRegistrationRequest : SLFacebookRequest {

	SLFacebookRegistrationInfo* _registrationInfo;

}
-(id)_urlEncodedString:(id)arg1 ;
-(id)_tokenSecret;
-(void)_prepareRequestForValidation;
-(id)_sha1HashForString:(id)arg1 ;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
@end

