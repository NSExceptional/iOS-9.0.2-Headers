/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMetadataDictionary, NSString, NSData;

@interface HDCodableObject : PBCodable <NSCopying> {

	double _creationDate;
	HDCodableMetadataDictionary* _metadataDictionary;
	NSString* _sourceBundleIdentifier;
	NSData* _uuid;
	SCD_Struct_HD22 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadataDictionary; 
@property (nonatomic,retain) HDCodableMetadataDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceBundleIdentifier;                             //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate;                                           //@synthesize creationDate=_creationDate - In the implementation block
-(id)decodedUUID;
-(id)decodedMetadata;
-(id)decodedCreationDate;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCreationDate;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasSourceBundleIdentifier;
-(void)setMetadataDictionary:(HDCodableMetadataDictionary *)arg1 ;
-(BOOL)hasMetadataDictionary;
-(HDCodableMetadataDictionary *)metadataDictionary;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)hasUuid;
@end

