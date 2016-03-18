/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMHTTPAuthenticationHandler.h>

@class NSString;

@interface ACMHTTPExternalAuthenticationHandler : ACMHTTPAuthenticationHandler {

	NSString* _password;

}

@property (nonatomic,copy) NSString * password;              //@synthesize password=_password - In the implementation block
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)updatePublicKeyWithResponse:(id)arg1 ;
-(void)didStopWithResponse:(id)arg1 ;
@end

