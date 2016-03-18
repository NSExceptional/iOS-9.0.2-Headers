/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACMBaseAuthenticationRequest.h>

@class NSString, NSNumber;

@interface ACMBaseAuthenticationRequestImpl : NSObject <ACMBaseAuthenticationRequest> {

	NSString* _realm;
	NSString* _username;
	NSNumber* _appID;
	NSString* _appIDKey;
	NSNumber* _serverResponseTimeout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * realm;                                //@synthesize realm=_realm - In the implementation block
@property (retain) NSString * userName;                             //@synthesize username=_username - In the implementation block
@property (retain) NSNumber * appID;                                //@synthesize appID=_appID - In the implementation block
@property (retain) NSString * appIDKey;                             //@synthesize appIDKey=_appIDKey - In the implementation block
@property (retain) NSNumber * serverResponseTimeout;                //@synthesize serverResponseTimeout=_serverResponseTimeout - In the implementation block
-(NSString *)userName;
-(void)dealloc;
-(void)setAppID:(NSNumber *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)realm;
-(void)setAppIDKey:(NSString *)arg1 ;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(NSNumber *)arg1 ;
@end

