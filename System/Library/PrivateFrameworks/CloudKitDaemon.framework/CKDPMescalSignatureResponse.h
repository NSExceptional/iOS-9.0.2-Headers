/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPMescalSignatureResponse : PBCodable <NSCopying> {

	NSData* _mescalHeaderData;
	int _status;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasMescalHeaderData; 
@property (nonatomic,retain) NSData * mescalHeaderData;               //@synthesize mescalHeaderData=_mescalHeaderData - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                              //@synthesize status=_status - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSData *)mescalHeaderData;
-(void)setMescalHeaderData:(NSData *)arg1 ;
-(BOOL)hasMescalHeaderData;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasStatus;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

