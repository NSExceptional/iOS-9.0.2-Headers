/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying> {

	NSString* _problemId;
	int _statusCode;
	BOOL _isNotificationSupported;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                         //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNotificationSupported; 
@property (assign,nonatomic) BOOL isNotificationSupported;                 //@synthesize isNotificationSupported=_isNotificationSupported - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatusCode:(int)arg1 ;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasStatusCode;
-(NSString *)problemId;
-(void)setIsNotificationSupported:(BOOL)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasIsNotificationSupported;
-(void)setHasIsNotificationSupported:(BOOL)arg1 ;
-(BOOL)hasProblemId;
-(BOOL)isNotificationSupported;
-(BOOL)readFrom:(id)arg1 ;
@end

