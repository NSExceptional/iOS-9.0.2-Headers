/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoHandshakeResponse : PBCodable <NSCopying> {

	unsigned _position;
	unsigned _state;
	unsigned _version;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

