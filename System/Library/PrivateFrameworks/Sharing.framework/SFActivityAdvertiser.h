/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>
#import <libobjc.A.dylib/SFActivityAdvertiserClient.h>

@protocol SFActivityAdvertiserDelegate, SFActivityAdvertiserProtocol;
@class SFInternalAdvertisement, NSString;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient> {

	id<SFActivityAdvertiserDelegate> _delegate;
	id<SFActivityAdvertiserProtocol> _connectionProxy;
	SFInternalAdvertisement* _currentAdvertisement;

}

@property (assign) id<SFActivityAdvertiserDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<SFActivityAdvertiserProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (retain) SFInternalAdvertisement * currentAdvertisement;                //@synthesize currentAdvertisement=_currentAdvertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(void)setupXPCConnection;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(void)setConnectionProxy:(id<SFActivityAdvertiserProtocol>)arg1 ;
-(id<SFActivityAdvertiserProtocol>)connectionProxy;
-(void)xpcManagerConnectionInterrupted;
-(SFInternalAdvertisement *)currentAdvertisement;
-(void)setCurrentAdvertisement:(SFInternalAdvertisement *)arg1 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end
