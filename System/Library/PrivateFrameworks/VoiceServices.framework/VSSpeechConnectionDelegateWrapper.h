/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechServiceDelegate.h>

@protocol VSSpeechConnectionDelegate;
@class VSSpeechRequest, VSSpeechConnection, NSString;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {

	id<VSSpeechConnectionDelegate> _delegate;
	VSSpeechRequest* _request;
	VSSpeechConnection* _connection;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) VSSpeechConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(id<VSSpeechConnectionDelegate>)delegate;
-(VSSpeechRequest *)request;
-(VSSpeechConnection *)connection;
-(void)setConnection:(VSSpeechConnection *)arg1 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2 ;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
@end

