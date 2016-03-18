/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPPulseData, NSData, CKDPShareIdentifier;

@interface CKDPPulseRequest : PBRequest <NSCopying> {

	long long _lookbackWindowMillis;
	int _apnsEnv;
	NSString* _etag;
	CKDPPulseData* _pulseData;
	NSData* _pushToken;
	CKDPShareIdentifier* _shareId;
	BOOL _reset;
	SCD_Struct_CK11 _has;

}

@property (nonatomic,readonly) BOOL hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;               //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) BOOL hasPushToken; 
@property (nonatomic,retain) NSData * pushToken;                          //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasPulseData; 
@property (nonatomic,retain) CKDPPulseData * pulseData;                   //@synthesize pulseData=_pulseData - In the implementation block
@property (assign,nonatomic) BOOL hasReset; 
@property (assign,nonatomic) BOOL reset;                                  //@synthesize reset=_reset - In the implementation block
@property (assign,nonatomic) BOOL hasLookbackWindowMillis; 
@property (assign,nonatomic) long long lookbackWindowMillis;              //@synthesize lookbackWindowMillis=_lookbackWindowMillis - In the implementation block
@property (assign,nonatomic) BOOL hasApnsEnv; 
@property (assign,nonatomic) int apnsEnv;                                 //@synthesize apnsEnv=_apnsEnv - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(BOOL)hasShareId;
-(CKDPShareIdentifier *)shareId;
-(int)apnsEnv;
-(void)setApnsEnv:(int)arg1 ;
-(void)setHasApnsEnv:(BOOL)arg1 ;
-(BOOL)hasApnsEnv;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setPulseData:(CKDPPulseData *)arg1 ;
-(BOOL)hasPushToken;
-(BOOL)hasPulseData;
-(void)setReset:(BOOL)arg1 ;
-(void)setHasReset:(BOOL)arg1 ;
-(BOOL)hasReset;
-(long long)lookbackWindowMillis;
-(void)setLookbackWindowMillis:(long long)arg1 ;
-(void)setHasLookbackWindowMillis:(BOOL)arg1 ;
-(BOOL)hasLookbackWindowMillis;
-(NSData *)pushToken;
-(CKDPPulseData *)pulseData;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(BOOL)hasEtag;
-(BOOL)readFrom:(id)arg1 ;
@end

