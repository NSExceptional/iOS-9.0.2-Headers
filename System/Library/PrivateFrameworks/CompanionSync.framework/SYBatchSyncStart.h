/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYMessageHeader, NSString;

@interface SYBatchSyncStart : PBCodable <NSCopying> {

	unsigned _estimatedChangeCount;
	SYMessageHeader* _header;
	NSString* _syncID;
	SCD_Struct_SY6 _has;

}

@property (nonatomic,retain) SYMessageHeader * header;                   //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * syncID;                          //@synthesize syncID=_syncID - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedChangeCount; 
@property (assign,nonatomic) unsigned estimatedChangeCount;              //@synthesize estimatedChangeCount=_estimatedChangeCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSyncID:(NSString *)arg1 ;
-(NSString *)syncID;
-(void)setEstimatedChangeCount:(unsigned)arg1 ;
-(void)setHasEstimatedChangeCount:(BOOL)arg1 ;
-(BOOL)hasEstimatedChangeCount;
-(unsigned)estimatedChangeCount;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end

