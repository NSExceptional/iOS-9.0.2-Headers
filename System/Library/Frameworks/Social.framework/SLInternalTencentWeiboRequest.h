/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLRequest.h>

@interface SLInternalTencentWeiboRequest : SLRequest {

	BOOL _shouldSign;

}

@property (assign) BOOL shouldSign;              //@synthesize shouldSign=_shouldSign - In the implementation block
-(BOOL)shouldSign;
-(id)signedTencentRequestFromRequest:(id)arg1 ;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(void)setShouldSign:(BOOL)arg1 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
@end

