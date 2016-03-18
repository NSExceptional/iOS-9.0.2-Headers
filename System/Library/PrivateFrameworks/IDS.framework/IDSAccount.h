/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSAccount, NSString, NSArray, NSDictionary, NSData, NSDate;

@interface IDSAccount : NSObject {

	_IDSAccount* _internal;

}

@property (nonatomic,retain) NSString * loginID; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,retain,readonly) NSArray * devices; 
@property (nonatomic,retain,readonly) NSArray * nearbyDevices; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * aliasStrings; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSDictionary * profileInfo; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,retain,readonly) NSString * uniqueID; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) int registrationStatus; 
@property (nonatomic,readonly) NSArray * registeredURIs; 
@property (nonatomic,readonly) NSData * registrationCertificate; 
@property (nonatomic,readonly) NSDate * dateRegistered; 
@property (nonatomic,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,readonly) NSData * pushToken; 
@property (nonatomic,readonly) NSString * regionID; 
@property (nonatomic,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,readonly) NSString * profileID; 
@property (nonatomic,retain,readonly) NSString * primaryServiceName; 
-(BOOL)_validateIDSAccount;
-(id)_internal;
-(NSArray *)registeredURIs;
-(void)setPassword:(id)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(BOOL)_isEnabled;
-(NSString *)displayName;
-(NSString *)regionID;
-(NSString *)uniqueID;
-(int)accountType;
-(NSData *)pushToken;
-(void)setAuthToken:(id)arg1 ;
-(NSArray *)devices;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSArray *)aliasStrings;
-(id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(NSString *)primaryServiceName;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(NSString *)profileID;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(NSDictionary *)profileInfo;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)addAliases:(id)arg1 ;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(NSString *)loginID;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 ;
-(void)passwordUpdated;
-(NSData *)registrationCertificate;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(NSDictionary *)accountInfo;
-(void)removeDelegate:(id)arg1 ;
-(int)registrationStatus;
@end

