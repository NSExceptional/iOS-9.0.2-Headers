/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <FTServices/IDSFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSNumber;

@interface IDSRelayUpdateMessage : IDSFaceTimeMessage <NSCopying> {

	NSData* _selfPushToken;
	NSData* _selfRelayBlob;
	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSData* _relayConnectionID;
	NSData* _relayTransactionIDAlloc;
	NSData* _relayTokenAllocRes;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _selfRelayNATIP;
	NSNumber* _selfRelayNATPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSData * selfRelayBlob;                        //@synthesize selfRelayBlob=_selfRelayBlob - In the implementation block
@property (copy) NSString * peerID;                             //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                        //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * relayType;                          //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSData * relayConnectionID;                    //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (copy) NSData * relayTransactionIDAlloc;              //@synthesize relayTransactionIDAlloc=_relayTransactionIDAlloc - In the implementation block
@property (copy) NSData * relayTokenAllocRes;                   //@synthesize relayTokenAllocRes=_relayTokenAllocRes - In the implementation block
@property (copy) NSData * selfRelayIP;                          //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                      //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * selfRelayNATIP;                       //@synthesize selfRelayNATIP=_selfRelayNATIP - In the implementation block
@property (copy) NSNumber * selfRelayNATPort;                   //@synthesize selfRelayNATPort=_selfRelayNATPort - In the implementation block
@property (copy) NSData * peerRelayIP;                          //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                      //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)relayType;
-(NSData *)relayConnectionID;
-(NSData *)selfRelayIP;
-(NSNumber *)selfRelayPort;
-(NSData *)peerRelayIP;
-(NSNumber *)peerRelayPort;
-(void)setRelayType:(NSNumber *)arg1 ;
-(void)setRelayConnectionID:(NSData *)arg1 ;
-(void)setSelfRelayIP:(NSData *)arg1 ;
-(void)setSelfRelayPort:(NSNumber *)arg1 ;
-(void)setPeerRelayIP:(NSData *)arg1 ;
-(void)setPeerRelayPort:(NSNumber *)arg1 ;
-(NSData *)selfPushToken;
-(NSData *)relayTransactionIDAlloc;
-(NSData *)relayTokenAllocRes;
-(NSData *)selfRelayNATIP;
-(NSNumber *)selfRelayNATPort;
-(NSData *)selfRelayBlob;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfRelayBlob:(NSData *)arg1 ;
-(void)setRelayTransactionIDAlloc:(NSData *)arg1 ;
-(void)setRelayTokenAllocRes:(NSData *)arg1 ;
-(void)setSelfRelayNATIP:(NSData *)arg1 ;
-(void)setSelfRelayNATPort:(NSNumber *)arg1 ;
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end

