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

@class NSString;

@interface AWDNetworkUsage : PBCodable <NSCopying> {

	unsigned long long _cellIn;
	unsigned long long _cellOut;
	unsigned long long _wifiIn;
	unsigned long long _wifiOut;
	NSString* _bundleName;
	unsigned _numConnections;
	SCD_Struct_AW11 _has;

}

@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                   //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasWifiIn; 
@property (assign,nonatomic) unsigned long long wifiIn;               //@synthesize wifiIn=_wifiIn - In the implementation block
@property (assign,nonatomic) BOOL hasWifiOut; 
@property (assign,nonatomic) unsigned long long wifiOut;              //@synthesize wifiOut=_wifiOut - In the implementation block
@property (assign,nonatomic) BOOL hasCellIn; 
@property (assign,nonatomic) unsigned long long cellIn;               //@synthesize cellIn=_cellIn - In the implementation block
@property (assign,nonatomic) BOOL hasCellOut; 
@property (assign,nonatomic) unsigned long long cellOut;              //@synthesize cellOut=_cellOut - In the implementation block
@property (assign,nonatomic) BOOL hasNumConnections; 
@property (assign,nonatomic) unsigned numConnections;                 //@synthesize numConnections=_numConnections - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)hasBundleName;
-(NSString *)bundleName;
-(void)setWifiIn:(unsigned long long)arg1 ;
-(void)setHasWifiIn:(BOOL)arg1 ;
-(BOOL)hasWifiIn;
-(void)setWifiOut:(unsigned long long)arg1 ;
-(void)setHasWifiOut:(BOOL)arg1 ;
-(BOOL)hasWifiOut;
-(void)setCellIn:(unsigned long long)arg1 ;
-(void)setHasCellIn:(BOOL)arg1 ;
-(BOOL)hasCellIn;
-(void)setCellOut:(unsigned long long)arg1 ;
-(void)setHasCellOut:(BOOL)arg1 ;
-(BOOL)hasCellOut;
-(void)setNumConnections:(unsigned)arg1 ;
-(void)setHasNumConnections:(BOOL)arg1 ;
-(BOOL)hasNumConnections;
-(unsigned long long)wifiIn;
-(unsigned long long)wifiOut;
-(unsigned long long)cellIn;
-(unsigned long long)cellOut;
-(unsigned)numConnections;
@end

