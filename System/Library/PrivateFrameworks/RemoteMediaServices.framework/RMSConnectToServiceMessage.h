/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RMSServiceMessage;

@interface RMSConnectToServiceMessage : PBCodable <NSCopying> {

	NSString* _pairingGUID;
	RMSServiceMessage* _service;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) RMSServiceMessage * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingGUID; 
@property (nonatomic,retain) NSString * pairingGUID;                   //@synthesize pairingGUID=_pairingGUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(RMSServiceMessage *)service;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPairingGUID:(NSString *)arg1 ;
-(BOOL)hasPairingGUID;
-(NSString *)pairingGUID;
-(void)setService:(RMSServiceMessage *)arg1 ;
-(BOOL)hasService;
@end

