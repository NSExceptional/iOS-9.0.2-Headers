/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetricsManagerLeakyAPStats : PBCodable <NSCopying> {

	unsigned long long _hashCode;
	unsigned long long _timestamp;
	unsigned long long _version;
	unsigned _leakyApDecision;
	NSData* _leakyApStats;
	NSData* _oui;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                              //@synthesize oui=_oui - In the implementation block
@property (nonatomic,readonly) BOOL hasLeakyApStats; 
@property (nonatomic,retain) NSData * leakyApStats;                     //@synthesize leakyApStats=_leakyApStats - In the implementation block
@property (assign,nonatomic) BOOL hasLeakyApDecision; 
@property (assign,nonatomic) unsigned leakyApDecision;                  //@synthesize leakyApDecision=_leakyApDecision - In the implementation block
@property (assign,nonatomic) BOOL hasHashCode; 
@property (assign,nonatomic) unsigned long long hashCode;               //@synthesize hashCode=_hashCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(BOOL)hasOui;
-(NSData *)oui;
-(void)setLeakyApStats:(NSData *)arg1 ;
-(BOOL)hasLeakyApStats;
-(void)setLeakyApDecision:(unsigned)arg1 ;
-(void)setHasLeakyApDecision:(BOOL)arg1 ;
-(BOOL)hasLeakyApDecision;
-(void)setHashCode:(unsigned long long)arg1 ;
-(void)setHasHashCode:(BOOL)arg1 ;
-(BOOL)hasHashCode;
-(NSData *)leakyApStats;
-(unsigned)leakyApDecision;
-(unsigned long long)hashCode;
@end
