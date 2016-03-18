/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoFetchRequest : PBRequest <NSCopying> {

	NSString* _conversationId;
	unsigned _fullSyncVersion;
	BOOL _manuallyTriggered;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;               //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (assign,nonatomic) BOOL hasManuallyTriggered; 
@property (assign,nonatomic) BOOL manuallyTriggered;                 //@synthesize manuallyTriggered=_manuallyTriggered - In the implementation block
@property (nonatomic,readonly) BOOL hasConversationId; 
@property (nonatomic,retain) NSString * conversationId;              //@synthesize conversationId=_conversationId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setConversationId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)conversationId;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(BOOL)hasConversationId;
-(unsigned)fullSyncVersion;
-(BOOL)manuallyTriggered;
-(void)setManuallyTriggered:(BOOL)arg1 ;
-(void)setHasManuallyTriggered:(BOOL)arg1 ;
-(BOOL)hasManuallyTriggered;
-(BOOL)readFrom:(id)arg1 ;
@end
