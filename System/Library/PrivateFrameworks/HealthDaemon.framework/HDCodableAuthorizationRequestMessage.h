/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HDCodableAuthorizationRequestMessage : PBCodable <NSCopying> {

	SCD_Struct_HD33* _typesToReads;
	SCD_Struct_HD33* _typesToWrites;
	NSString* _appBundleIdentifier;
	NSData* _requestIdentifier;

}

@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;                       //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSData * requestIdentifier;                           //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long typesToReadsCount; 
@property (nonatomic,readonly) long long* typesToReads; 
@property (nonatomic,readonly) unsigned long long typesToWritesCount; 
@property (nonatomic,readonly) long long* typesToWrites; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasRequestIdentifier;
-(unsigned long long)typesToReadsCount;
-(long long)typesToReadAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)typesToWritesCount;
-(long long)typesToWriteAtIndex:(unsigned long long)arg1 ;
-(void)addTypesToRead:(long long)arg1 ;
-(void)addTypesToWrite:(long long)arg1 ;
-(void)clearTypesToReads;
-(void)clearTypesToWrites;
-(long long*)typesToReads;
-(void)setTypesToReads:(long long*)arg1 count:(unsigned long long)arg2 ;
-(long long*)typesToWrites;
-(void)setTypesToWrites:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)requestIdentifier;
-(void)setRequestIdentifier:(NSData *)arg1 ;
@end

