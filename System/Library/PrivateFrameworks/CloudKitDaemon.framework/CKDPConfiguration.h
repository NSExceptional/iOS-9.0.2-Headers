/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPConfiguration : PBCodable <NSCopying> {

	unsigned long long _created;
	unsigned long long _expires;
	NSMutableArray* _fields;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,retain) NSMutableArray * fields;                 //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic) BOOL hasCreated; 
@property (assign,nonatomic) unsigned long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) BOOL hasExpires; 
@property (assign,nonatomic) unsigned long long expires;              //@synthesize expires=_expires - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addFields:(id)arg1 ;
-(void)clearFields;
-(unsigned long long)fieldsCount;
-(id)fieldsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)fields;
-(void)setFields:(NSMutableArray *)arg1 ;
-(void)setCreated:(unsigned long long)arg1 ;
-(void)setHasCreated:(BOOL)arg1 ;
-(BOOL)hasCreated;
-(void)setExpires:(unsigned long long)arg1 ;
-(void)setHasExpires:(BOOL)arg1 ;
-(BOOL)hasExpires;
-(unsigned long long)created;
-(unsigned long long)expires;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

