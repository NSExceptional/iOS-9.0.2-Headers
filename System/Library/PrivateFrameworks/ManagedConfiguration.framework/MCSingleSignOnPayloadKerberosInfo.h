/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MCSingleSignOnPayloadKerberosInfo : NSObject {

	NSString* _principalName;
	NSString* _realm;
	NSString* _certificateUUID;
	NSArray* _URLPrefixMatches;
	NSArray* _appIdentifierMatches;
	NSString* _accountGUID;
	NSString* _accountTypeGUID;

}

@property (nonatomic,retain) NSString * principalName;                    //@synthesize principalName=_principalName - In the implementation block
@property (nonatomic,retain) NSString * realm;                            //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                  //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,retain) NSArray * URLPrefixMatches;                  //@synthesize URLPrefixMatches=_URLPrefixMatches - In the implementation block
@property (nonatomic,retain) NSArray * appIdentifierMatches;              //@synthesize appIdentifierMatches=_appIdentifierMatches - In the implementation block
@property (nonatomic,retain) NSString * accountGUID;                      //@synthesize accountGUID=_accountGUID - In the implementation block
@property (nonatomic,retain) NSString * accountTypeGUID;                  //@synthesize accountTypeGUID=_accountTypeGUID - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSString *)certificateUUID;
-(void)setCertificateUUID:(NSString *)arg1 ;
-(NSString *)principalName;
-(NSArray *)URLPrefixMatches;
-(NSArray *)appIdentifierMatches;
-(BOOL)validateAppIdentifierMatch:(id)arg1 outError:(id*)arg2 ;
-(BOOL)validateURLPrefixMatch:(id)arg1 outNormalizedString:(id*)arg2 outError:(id*)arg3 ;
-(NSString *)accountGUID;
-(NSString *)accountTypeGUID;
-(void)setPrincipalName:(NSString *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(void)setURLPrefixMatches:(NSArray *)arg1 ;
-(void)setAppIdentifierMatches:(NSArray *)arg1 ;
-(void)setAccountGUID:(NSString *)arg1 ;
-(void)setAccountTypeGUID:(NSString *)arg1 ;
-(NSString *)realm;
@end

