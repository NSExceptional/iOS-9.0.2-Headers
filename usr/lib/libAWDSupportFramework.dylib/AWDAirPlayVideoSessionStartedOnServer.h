/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayVideoSessionStartedOnServer : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioOnly;
	unsigned _clientAuthMs;
	unsigned _clientBonjourMs;
	unsigned _clientConnectMs;
	unsigned _clientInfoMs;
	NSString* _clientModel;
	unsigned _clientPostAuthMs;
	unsigned _clientSecureConnectionMs;
	NSString* _clientVersion;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	unsigned _type;
	SCD_Struct_AW12 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                         //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                         //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasClientModel; 
@property (nonatomic,retain) NSString * clientModel;                         //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                       //@synthesize clientVersion=_clientVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOnly; 
@property (assign,nonatomic) unsigned audioOnly;                             //@synthesize audioOnly=_audioOnly - In the implementation block
@property (assign,nonatomic) BOOL hasClientBonjourMs; 
@property (assign,nonatomic) unsigned clientBonjourMs;                       //@synthesize clientBonjourMs=_clientBonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientConnectMs; 
@property (assign,nonatomic) unsigned clientConnectMs;                       //@synthesize clientConnectMs=_clientConnectMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientInfoMs; 
@property (assign,nonatomic) unsigned clientInfoMs;                          //@synthesize clientInfoMs=_clientInfoMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientSecureConnectionMs; 
@property (assign,nonatomic) unsigned clientSecureConnectionMs;              //@synthesize clientSecureConnectionMs=_clientSecureConnectionMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientAuthMs; 
@property (assign,nonatomic) unsigned clientAuthMs;                          //@synthesize clientAuthMs=_clientAuthMs - In the implementation block
@property (assign,nonatomic) BOOL hasClientPostAuthMs; 
@property (assign,nonatomic) unsigned clientPostAuthMs;                      //@synthesize clientPostAuthMs=_clientPostAuthMs - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setTransportType:(unsigned)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(unsigned)transportType;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setClientModel:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(BOOL)hasClientModel;
-(BOOL)hasClientVersion;
-(void)setClientBonjourMs:(unsigned)arg1 ;
-(void)setHasClientBonjourMs:(BOOL)arg1 ;
-(BOOL)hasClientBonjourMs;
-(void)setClientConnectMs:(unsigned)arg1 ;
-(void)setHasClientConnectMs:(BOOL)arg1 ;
-(BOOL)hasClientConnectMs;
-(void)setClientAuthMs:(unsigned)arg1 ;
-(void)setHasClientAuthMs:(BOOL)arg1 ;
-(BOOL)hasClientAuthMs;
-(NSString *)clientModel;
-(NSString *)clientVersion;
-(unsigned)clientBonjourMs;
-(unsigned)clientConnectMs;
-(unsigned)clientAuthMs;
-(void)setAudioOnly:(unsigned)arg1 ;
-(void)setHasAudioOnly:(BOOL)arg1 ;
-(BOOL)hasAudioOnly;
-(unsigned)audioOnly;
-(void)setClientInfoMs:(unsigned)arg1 ;
-(void)setHasClientInfoMs:(BOOL)arg1 ;
-(BOOL)hasClientInfoMs;
-(void)setClientSecureConnectionMs:(unsigned)arg1 ;
-(void)setHasClientSecureConnectionMs:(BOOL)arg1 ;
-(BOOL)hasClientSecureConnectionMs;
-(void)setClientPostAuthMs:(unsigned)arg1 ;
-(void)setHasClientPostAuthMs:(BOOL)arg1 ;
-(BOOL)hasClientPostAuthMs;
-(unsigned)clientInfoMs;
-(unsigned)clientSecureConnectionMs;
-(unsigned)clientPostAuthMs;
@end

