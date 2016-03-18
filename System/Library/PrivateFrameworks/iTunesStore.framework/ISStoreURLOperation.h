/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISURLOperation.h>

@class NSNumber, SSVFairPlaySAPSession, SSURLBagContext;

@interface ISStoreURLOperation : ISURLOperation {

	long long _activeMachineDataStyle;
	NSNumber* _authenticatedDSID;
	BOOL _canSendGUIDParameter;
	BOOL _ignorePreexistingSecureToken;
	BOOL _isURLBagRequest;
	long long _machineDataStyle;
	BOOL _needsAuthentication;
	BOOL _needsURLBag;
	SSVFairPlaySAPSession* _sapSession;
	BOOL _shouldSendXTokenHeader;
	BOOL _urlKnownToBeTrusted;
	BOOL _useUserSpecificURLBag;

}

@property (assign) id<ISStoreURLOperationDelegate> delegate; 
@property (assign) BOOL canSendGUIDParameter; 
@property (assign) long long machineDataStyle;                                       //@synthesize machineDataStyle=_machineDataStyle - In the implementation block
@property (assign) BOOL needsURLBag;                                                 //@synthesize needsURLBag=_needsURLBag - In the implementation block
@property (assign) BOOL needsAuthentication;                                         //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (assign) BOOL performsMachineDataActions; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
@property (assign) BOOL shouldSendXTokenHeader; 
@property (assign) BOOL useUserSpecificURLBag;                                       //@synthesize useUserSpecificURLBag=_useUserSpecificURLBag - In the implementation block
@property (assign) BOOL urlKnownToBeTrusted;                                         //@synthesize urlKnownToBeTrusted=_urlKnownToBeTrusted - In the implementation block
@property (readonly) SSURLBagContext * URLBagContext; 
@property (assign,nonatomic) BOOL ignorePreexistingSecureToken; 
@property (assign,getter=isURLBagRequest,nonatomic) BOOL URLBagRequest;              //@synthesize isURLBagRequest=_isURLBagRequest - In the implementation block
@property (retain) NSNumber * authenticatedDSID;                                     //@synthesize authenticatedDSID=_authenticatedDSID - In the implementation block
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 accountIdentifier:(id)arg3 ;
+(void)_addITunesStoreHeadersToRequest:(id)arg1 withURLBag:(id)arg2 account:(id)arg3 ;
+(id)_restrictionsHeaderValue;
+(id)_authKitSession;
+(id)propertyListOperationWithURLBagKey:(id)arg1 ;
+(id)pingOperationWithUrl:(id)arg1 ;
+(void)addITunesStoreHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2 ;
+(void)handleITunesStoreResponseHeaders:(id)arg1 request:(id)arg2 withAccountIdentifier:(id)arg3 shouldRetry:(BOOL*)arg4 ;
+(id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(void)handleResponse:(id)arg1 ;
-(SSVFairPlaySAPSession *)SAPSession;
-(void)setNeedsURLBag:(BOOL)arg1 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(void)setMachineDataStyle:(long long)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(long long)machineDataStyle;
-(void)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(id)_copyAuthenticationContext;
-(BOOL)_processResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(void)_willSendRequest:(id)arg1 ;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(void)setURLBagRequest:(BOOL)arg1 ;
-(BOOL)useUserSpecificURLBag;
-(id)_account;
-(BOOL)_canSendTokenToURL:(id)arg1 ;
-(id)_urlBagForContext:(id)arg1 ;
-(BOOL)canSendGUIDParameter;
-(BOOL)shouldSendXTokenHeader;
-(id)_loadURLBagInterpreterWithRequest:(id)arg1 requestProperties:(id)arg2 ;
-(BOOL)ignorePreexistingSecureToken;
-(id)_copyAuthenticationContextForAttemptNumber:(long long)arg1 ;
-(BOOL)_authenticateWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_runURLOperation;
-(BOOL)_performMachineDataRequest:(id)arg1 ;
-(BOOL)_isErrorTokenError:(id)arg1 ;
-(void)setIgnorePreexistingSecureToken:(BOOL)arg1 ;
-(BOOL)urlKnownToBeTrusted;
-(BOOL)needsURLBag;
-(id)_resolvedURLInBagContext:(id)arg1 URLBag:(id*)arg2 ;
-(void)_addStandardQueryParametersForURL:(id)arg1 ;
-(BOOL)isURLBagRequest;
-(BOOL)performsMachineDataActions;
-(void)setCanSendGUIDParameter:(BOOL)arg1 ;
-(void)setPerformsMachineDataActions:(BOOL)arg1 ;
-(void)setShouldSendXTokenHeader:(BOOL)arg1 ;
-(void)setUseUserSpecificURLBag:(BOOL)arg1 ;
-(id)authenticatedAccountDSID;
-(BOOL)needsAuthentication;
-(void)setUrlKnownToBeTrusted:(BOOL)arg1 ;
-(id)newRequestWithURL:(id)arg1 ;
-(NSNumber *)authenticatedDSID;
-(void)setAuthenticatedDSID:(NSNumber *)arg1 ;
@end

