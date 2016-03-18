/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSDownloadSession.h>

@class NSString, NSNumber;

@interface SSDownloadHandlerSession : SSDownloadSession {

	NSString* _downloadPhase;
	NSNumber* _duetTimeoutInterval;

}

@property (readonly) NSString * downloadPhase; 
@property (readonly) NSNumber * duetTimeoutInterval;              //@synthesize duetTimeoutInterval=_duetTimeoutInterval - In the implementation block
@property (assign) BOOL blocksOtherDownloads; 
@property (assign) BOOL canBePaused; 
@property (assign) BOOL needsPowerAssertion; 
-(void)releaseSessionControl;
-(void)setCanBePaused:(BOOL)arg1 ;
-(void)setStatusDescription:(id)arg1 ;
-(void)dealloc;
-(void)setPercentComplete:(float)arg1 ;
-(NSString *)downloadPhase;
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(void)_finishWithType:(int)arg1 error:(id)arg2 ;
-(void)_setBool:(BOOL)arg1 forSessionProperty:(const char*)arg2 ;
-(BOOL)blocksOtherDownloads;
-(BOOL)canBePaused;
-(void)disavowSessionWithError:(id)arg1 ;
-(void)finishSessionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)needsPowerAssertion;
-(void)setBlocksOtherDownloads:(BOOL)arg1 ;
-(void)setNeedsPowerAssertion:(BOOL)arg1 ;
-(NSNumber *)duetTimeoutInterval;
@end

