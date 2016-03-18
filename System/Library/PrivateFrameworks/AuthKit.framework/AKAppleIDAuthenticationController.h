/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, _AKAppleIDAuthenticationContextManager, NSObject, NSLock;

@interface AKAppleIDAuthenticationController : NSObject {

	NSString* _serviceID;
	NSXPCConnection* _authenticationServiceConnection;
	_AKAppleIDAuthenticationContextManager* _contextManager;
	NSObject*<OS_dispatch_queue> _replyHandlingQueue;
	NSLock* _connectionLock;

}

@property (assign,nonatomic,__weak) id<AKAppleIDAuthenticationDelegate> delegate; 
-(void)setDelegate:(id<AKAppleIDAuthenticationDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AKAppleIDAuthenticationDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 ;
-(id)_authenticationServiceConnection;
-(void)checkSecurityUpgradeEligibilityForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateLoginCodeWithCompletion:(/*^block*/id)arg1 ;
-(void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)reportSignOutForAllAppleIDsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAppleIDWithAltDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)setAppleIDWithDSID:(id)arg1 inUse:(BOOL)arg2 forService:(long long)arg3 ;
-(void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

