/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoInitialMessagesSync : PBCodable <NSCopying> {

	NSData* _dateForRequestingMoreMessages;
	NSData* _dateSynced;
	unsigned _fullSyncVersion;
	NSMutableArray* _initialMessages;
	NSString* _syncedMailboxAccountId;
	NSString* _syncedMailboxCustomName;
	unsigned _syncedMailboxType;
	NSString* _syncedMailboxURL;
	SCD_Struct_NN2 _has;

}

@property (assign,nonatomic) BOOL hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                             //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDateSynced; 
@property (nonatomic,retain) NSData * dateSynced;                                  //@synthesize dateSynced=_dateSynced - In the implementation block
@property (nonatomic,retain) NSMutableArray * initialMessages;                     //@synthesize initialMessages=_initialMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasDateForRequestingMoreMessages; 
@property (nonatomic,retain) NSData * dateForRequestingMoreMessages;               //@synthesize dateForRequestingMoreMessages=_dateForRequestingMoreMessages - In the implementation block
@property (assign,nonatomic) BOOL hasSyncedMailboxType; 
@property (assign,nonatomic) unsigned syncedMailboxType;                           //@synthesize syncedMailboxType=_syncedMailboxType - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxAccountId; 
@property (nonatomic,retain) NSString * syncedMailboxAccountId;                    //@synthesize syncedMailboxAccountId=_syncedMailboxAccountId - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxURL; 
@property (nonatomic,retain) NSString * syncedMailboxURL;                          //@synthesize syncedMailboxURL=_syncedMailboxURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncedMailboxCustomName; 
@property (nonatomic,retain) NSString * syncedMailboxCustomName;                   //@synthesize syncedMailboxCustomName=_syncedMailboxCustomName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(BOOL)arg1 ;
-(BOOL)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)setDateSynced:(NSData *)arg1 ;
-(BOOL)hasDateSynced;
-(NSData *)dateSynced;
-(void)addInitialMessage:(id)arg1 ;
-(unsigned long long)initialMessagesCount;
-(void)clearInitialMessages;
-(id)initialMessageAtIndex:(unsigned long long)arg1 ;
-(void)setDateForRequestingMoreMessages:(NSData *)arg1 ;
-(void)setSyncedMailboxAccountId:(NSString *)arg1 ;
-(void)setSyncedMailboxURL:(NSString *)arg1 ;
-(void)setSyncedMailboxCustomName:(NSString *)arg1 ;
-(BOOL)hasDateForRequestingMoreMessages;
-(void)setSyncedMailboxType:(unsigned)arg1 ;
-(void)setHasSyncedMailboxType:(BOOL)arg1 ;
-(BOOL)hasSyncedMailboxType;
-(BOOL)hasSyncedMailboxAccountId;
-(BOOL)hasSyncedMailboxURL;
-(BOOL)hasSyncedMailboxCustomName;
-(NSMutableArray *)initialMessages;
-(void)setInitialMessages:(NSMutableArray *)arg1 ;
-(NSData *)dateForRequestingMoreMessages;
-(unsigned)syncedMailboxType;
-(NSString *)syncedMailboxAccountId;
-(NSString *)syncedMailboxURL;
-(NSString *)syncedMailboxCustomName;
-(BOOL)readFrom:(id)arg1 ;
@end

