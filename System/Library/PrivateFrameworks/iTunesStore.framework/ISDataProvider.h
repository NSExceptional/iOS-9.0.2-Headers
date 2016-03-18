/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSAuthenticationContext, NSNumber, SSURLBagContext, NSString, ISOperation, NSURL;

@interface ISDataProvider : NSObject <NSCopying> {

	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	ISOperation* _parentOperation;
	NSURL* _redirectURL;
	long long _errorHandlerResponseType;

}

@property (retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) SSURLBagContext * bagContext;                                 //@synthesize bagContext=_bagContext - In the implementation block
@property (assign) ISOperation * parentOperation;                                //@synthesize parentOperation=_parentOperation - In the implementation block
@property (assign) long long contentLength;                                      //@synthesize contentLength=_contentLength - In the implementation block
@property (retain) NSString * contentType;                                       //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) id output;                                                    //@synthesize output=_output - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (assign) long long errorHandlerResponseType;                           //@synthesize errorHandlerResponseType=_errorHandlerResponseType - In the implementation block
+(id)provider;
-(void)setContentLength:(long long)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contentType;
-(ISOperation *)parentOperation;
-(void)setParentOperation:(ISOperation *)arg1 ;
-(long long)contentLength;
-(void)setup;
-(id)output;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(BOOL)isStream;
-(void)streamCancelled;
-(long long)streamedBytes;
-(BOOL)isStreamComplete;
-(id)closeStream;
-(long long)errorHandlerResponseType;
-(void)resetStream;
-(void)streamDidFailWithError:(id)arg1 ;
-(BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2 ;
-(SSURLBagContext *)bagContext;
-(void)setBagContext:(SSURLBagContext *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
-(BOOL)runSubOperation:(id)arg1 error:(id*)arg2 ;
-(void)setErrorHandlerResponseType:(long long)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setOutput:(id)arg1 ;
-(void)configureFromProvider:(id)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)migrateOutputFromSubProvider:(id)arg1 ;
-(BOOL)runAuthorizationDialog:(id)arg1 error:(id*)arg2 ;
-(NSNumber *)authenticatedAccountDSID;
@end

