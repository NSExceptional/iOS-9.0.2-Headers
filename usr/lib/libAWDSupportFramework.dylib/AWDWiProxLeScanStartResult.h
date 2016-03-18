/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeScanStartResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _result;
	NSString* _resultString;
	NSString* _sessionId;
	int _type;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasResultString; 
@property (nonatomic,retain) NSString * resultString;                   //@synthesize resultString=_resultString - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasSessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
-(void)setResult:(unsigned)arg1 ;
-(void)setHasResult:(BOOL)arg1 ;
-(BOOL)hasResult;
-(void)setResultString:(NSString *)arg1 ;
-(BOOL)hasResultString;
-(NSString *)resultString;
@end

