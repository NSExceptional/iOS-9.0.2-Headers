/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _underlyingErrors;
	SCD_Struct_AW15 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                       //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * underlyingErrors;              //@synthesize underlyingErrors=_underlyingErrors - In the implementation block
-(void)setDomain:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)domain;
-(int)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasDomain;
-(void)setUnderlyingErrors:(NSMutableArray *)arg1 ;
-(void)addUnderlyingErrors:(id)arg1 ;
-(unsigned long long)underlyingErrorsCount;
-(void)clearUnderlyingErrors;
-(id)underlyingErrorsAtIndex:(unsigned long long)arg1 ;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(NSMutableArray *)underlyingErrors;
@end

