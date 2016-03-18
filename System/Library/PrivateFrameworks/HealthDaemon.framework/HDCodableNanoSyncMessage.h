/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableNanoSyncActivationRestore, HDCodableNanoSyncChangeSet, NSData, HDCodableNanoSyncStatus, NSString;

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {

	HDCodableNanoSyncActivationRestore* _activationRestore;
	HDCodableNanoSyncChangeSet* _changeSet;
	NSData* _healthPairingUUID;
	NSData* _persistentPairingUUID;
	HDCodableNanoSyncStatus* _status;
	int _version;
	SCD_Struct_HD22 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) int version;                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasPersistentPairingUUID; 
@property (nonatomic,retain) NSData * persistentPairingUUID;                                      //@synthesize persistentPairingUUID=_persistentPairingUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasHealthPairingUUID; 
@property (nonatomic,retain) NSData * healthPairingUUID;                                          //@synthesize healthPairingUUID=_healthPairingUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasChangeSet; 
@property (nonatomic,retain) HDCodableNanoSyncChangeSet * changeSet;                              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) BOOL hasStatus; 
@property (nonatomic,retain) HDCodableNanoSyncStatus * status;                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL hasActivationRestore; 
@property (nonatomic,retain) HDCodableNanoSyncActivationRestore * activationRestore;              //@synthesize activationRestore=_activationRestore - In the implementation block
+(id)messageFromPersistentUserInfo:(id)arg1 ;
+(id)messageWithSyncStore:(id)arg1 ;
-(id)copyPersistentUserInfo;
-(id)nanoSyncDescription;
-(id)decodedPersistentPairingUUID;
-(id)decodedHealthPairingUUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(HDCodableNanoSyncStatus *)status;
-(void)setStatus:(HDCodableNanoSyncStatus *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(HDCodableNanoSyncActivationRestore *)activationRestore;
-(HDCodableNanoSyncChangeSet *)changeSet;
-(void)setPersistentPairingUUID:(NSData *)arg1 ;
-(void)setHealthPairingUUID:(NSData *)arg1 ;
-(void)setActivationRestore:(HDCodableNanoSyncActivationRestore *)arg1 ;
-(void)setChangeSet:(HDCodableNanoSyncChangeSet *)arg1 ;
-(BOOL)hasPersistentPairingUUID;
-(BOOL)hasHealthPairingUUID;
-(BOOL)hasChangeSet;
-(BOOL)hasActivationRestore;
-(NSData *)persistentPairingUUID;
-(NSData *)healthPairingUUID;
-(BOOL)readFrom:(id)arg1 ;
@end

