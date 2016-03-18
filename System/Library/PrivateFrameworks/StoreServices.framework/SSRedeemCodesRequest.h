/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSAuthenticationContext, NSArray, NSString;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {

	SSAuthenticationContext* _authenticationContext;
	NSArray* _redeemCodes;
	BOOL _headless;
	BOOL _cameraRecognized;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) BOOL headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) BOOL cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(void)setCameraRecognized:(BOOL)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(void)setHeadless:(BOOL)arg1 ;
-(void)startWithRedeemResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)cameraRecognized;
-(NSArray *)redeemCodes;
-(BOOL)headless;
-(SSAuthenticationContext *)authenticationContext;
@end

