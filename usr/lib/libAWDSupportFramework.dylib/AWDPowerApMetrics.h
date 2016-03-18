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

@class NSMutableArray;

@interface AWDPowerApMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _apAwakeDuration;
	unsigned _cpuPowerMicroWatt;
	NSMutableArray* _datas;
	unsigned _dramPowerMicroWatt;
	unsigned _gpuPowerMicroWatt;
	unsigned _socPowerMicroWatt;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCpuPowerMicroWatt; 
@property (assign,nonatomic) unsigned cpuPowerMicroWatt;                //@synthesize cpuPowerMicroWatt=_cpuPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasSocPowerMicroWatt; 
@property (assign,nonatomic) unsigned socPowerMicroWatt;                //@synthesize socPowerMicroWatt=_socPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasGpuPowerMicroWatt; 
@property (assign,nonatomic) unsigned gpuPowerMicroWatt;                //@synthesize gpuPowerMicroWatt=_gpuPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasDramPowerMicroWatt; 
@property (assign,nonatomic) unsigned dramPowerMicroWatt;               //@synthesize dramPowerMicroWatt=_dramPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasApAwakeDuration; 
@property (assign,nonatomic) unsigned apAwakeDuration;                  //@synthesize apAwakeDuration=_apAwakeDuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * datas;                    //@synthesize datas=_datas - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDatas:(NSMutableArray *)arg1 ;
-(void)addData:(id)arg1 ;
-(unsigned long long)datasCount;
-(void)clearDatas;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(void)setCpuPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasCpuPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasCpuPowerMicroWatt;
-(void)setSocPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasSocPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasSocPowerMicroWatt;
-(void)setGpuPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasGpuPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasGpuPowerMicroWatt;
-(void)setDramPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasDramPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasDramPowerMicroWatt;
-(void)setApAwakeDuration:(unsigned)arg1 ;
-(void)setHasApAwakeDuration:(BOOL)arg1 ;
-(BOOL)hasApAwakeDuration;
-(unsigned)cpuPowerMicroWatt;
-(unsigned)socPowerMicroWatt;
-(unsigned)gpuPowerMicroWatt;
-(unsigned)dramPowerMicroWatt;
-(unsigned)apAwakeDuration;
-(NSMutableArray *)datas;
@end

