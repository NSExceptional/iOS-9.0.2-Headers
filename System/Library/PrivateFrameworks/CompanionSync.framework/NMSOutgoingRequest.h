/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSData, NSString, NSDictionary, NMSMessageCenter;

@interface NMSOutgoingRequest : NSObject <NMSObfuscatableDescriptionProviding> {

	BOOL _shouldEncrypt;
	unsigned short _messageID;
	NSData* _data;
	NSString* _idsIdentifier;
	unsigned long long _priority;
	double _sendTimeout;
	double _responseTimeout;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;
	id _pbRequest;

}

@property (nonatomic,retain) NSData * data;                                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                             //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                               //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (assign,nonatomic) BOOL shouldEncrypt;                                   //@synthesize shouldEncrypt=_shouldEncrypt - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) id pbRequest;                                         //@synthesize pbRequest=_pbRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithMessageID:(unsigned short)arg1 ;
-(id)init;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned short)messageID;
-(void)setShouldEncrypt:(BOOL)arg1 ;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(BOOL)shouldEncrypt;
-(NSDictionary *)extraIDSOptions;
-(id)CPObfuscatedDescriptionObject;
-(void)setSendTimeout:(double)arg1 ;
-(void)setResponseTimeout:(double)arg1 ;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(double)responseTimeout;
@end

