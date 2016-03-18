/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GKLocalPlayer, NSDate, UIViewController;

@interface GKLocalPlayerAuthenticator : NSObject {

	NSString* _username;
	NSString* _password;
	GKLocalPlayer* _resultantLocalPlayer;
	GKLocalPlayer* _inputLocalPlayer;
	BOOL _authenticated;
	BOOL _authenticating;
	BOOL _forceAuthentication;
	NSDate* _lastAuthDate;
	NSString* _lastAuthPlayerID;
	UIViewController* _presentingViewController;

}

@property (getter=isAuthenticated) BOOL authenticated;                       //@synthesize authenticated=_authenticated - In the implementation block
@property (getter=isAuthenticating) BOOL authenticating;                     //@synthesize authenticating=_authenticating - In the implementation block
@property (retain) NSDate * lastAuthDate;                                    //@synthesize lastAuthDate=_lastAuthDate - In the implementation block
@property (retain) NSString * lastAuthPlayerID;                              //@synthesize lastAuthPlayerID=_lastAuthPlayerID - In the implementation block
@property (copy) NSString * username;                                        //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign) BOOL forceAuthentication;                                 //@synthesize forceAuthentication=_forceAuthentication - In the implementation block
@property (retain) GKLocalPlayer * resultantLocalPlayer;                     //@synthesize resultantLocalPlayer=_resultantLocalPlayer - In the implementation block
@property (retain) GKLocalPlayer * inputLocalPlayer;                         //@synthesize inputLocalPlayer=_inputLocalPlayer - In the implementation block
+(id)authenticatorForExistingPlayer:(id)arg1 ;
+(id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 ;
+(id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2 ;
+(void)postURL:(id)arg1 postBody:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(void)reset;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setInputLocalPlayer:(GKLocalPlayer *)arg1 ;
-(void)_authenticateUsingAuthUI:(BOOL)arg1 authUIDismissHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)forceAuthentication;
-(void)setForceAuthentication:(BOOL)arg1 ;
-(void)setAuthenticating:(BOOL)arg1 ;
-(GKLocalPlayer *)resultantLocalPlayer;
-(void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(/*^block*/id)arg3 ;
-(GKLocalPlayer *)inputLocalPlayer;
-(void)setLastAuthDate:(NSDate *)arg1 ;
-(void)setResultantLocalPlayer:(GKLocalPlayer *)arg1 ;
-(void)authenticateUsingAuthUIWithAuthUIDismissHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateUsingAuthUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)authenticationDidComplete;
-(NSDate *)lastAuthDate;
-(NSString *)lastAuthPlayerID;
-(void)setLastAuthPlayerID:(NSString *)arg1 ;
-(void)authenticateUsingAuthUIAllowingAppleIDCreation:(BOOL)arg1 usernameEditable:(BOOL)arg2 dismissHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)isAuthenticating;
-(NSString *)username;
-(BOOL)isAuthenticated;
@end
