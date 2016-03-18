/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface FTRelayCancelMessage : FTFaceTimeMessage <NSCopying> {

	NSString* _peerID;
	NSData* _peerPushToken;
	NSNumber* _relayType;
	NSNumber* _reason;
	NSData* _relayConnectionID;
	NSData* _relayCandidateID;
	NSData* _selfRelayIP;
	NSNumber* _selfRelayPort;
	NSData* _peerRelayIP;
	NSNumber* _peerRelayPort;

}

@property (copy) NSString * peerID;                       //@synthesize peerID=_peerID - In the implementation block
@property (copy) NSData * peerPushToken;                  //@synthesize peerPushToken=_peerPushToken - In the implementation block
@property (copy) NSNumber * relayType;                    //@synthesize relayType=_relayType - In the implementation block
@property (copy) NSNumber * reason;                       //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * relayConnectionID;              //@synthesize relayConnectionID=_relayConnectionID - In the implementation block
@property (copy) NSData * relayCandidateID;               //@synthesize relayCandidateID=_relayCandidateID - In the implementation block
@property (copy) NSData * selfRelayIP;                    //@synthesize selfRelayIP=_selfRelayIP - In the implementation block
@property (copy) NSNumber * selfRelayPort;                //@synthesize selfRelayPort=_selfRelayPort - In the implementation block
@property (copy) NSData * peerRelayIP;                    //@synthesize peerRelayIP=_peerRelayIP - In the implementation block
@property (copy) NSNumber * peerRelayPort;                //@synthesize peerRelayPort=_peerRelayPort - In the implementation block
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setReason:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(void)setRelayCandidateID:(NSData *)arg1 ;
-(NSData *)relayCandidateID;
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
-(NSData *)peerPushToken;
-(void)setPeerPushToken:(NSData *)arg1 ;
-(id)bagKey;
-(id)requiredKeys;
-(id)messageBody;
@end

