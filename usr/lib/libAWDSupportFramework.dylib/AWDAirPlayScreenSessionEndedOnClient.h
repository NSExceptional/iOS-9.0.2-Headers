/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _avgBitrate;
	unsigned _avgEstimatedBandwidth;
	unsigned _avgUsedBandwidth;
	unsigned _clearScreens;
	unsigned _configChanges;
	unsigned _cpuAvg;
	unsigned _duration;
	unsigned _forcedRefreshes;
	unsigned _framesSent;
	int _reason;
	unsigned _resumes;
	unsigned _retransmitAvg;
	unsigned _rttAvg;
	NSString* _sessionUUID;
	unsigned _suspends;
	unsigned _unclearScreens;
	unsigned _wifiChannel;
	int _wifiRSSI;
	SCD_Struct_AW7 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                      //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                                  //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasFramesSent; 
@property (assign,nonatomic) unsigned framesSent;                         //@synthesize framesSent=_framesSent - In the implementation block
@property (assign,nonatomic) BOOL hasConfigChanges; 
@property (assign,nonatomic) unsigned configChanges;                      //@synthesize configChanges=_configChanges - In the implementation block
@property (assign,nonatomic) BOOL hasClearScreens; 
@property (assign,nonatomic) unsigned clearScreens;                       //@synthesize clearScreens=_clearScreens - In the implementation block
@property (assign,nonatomic) BOOL hasUnclearScreens; 
@property (assign,nonatomic) unsigned unclearScreens;                     //@synthesize unclearScreens=_unclearScreens - In the implementation block
@property (assign,nonatomic) BOOL hasSuspends; 
@property (assign,nonatomic) unsigned suspends;                           //@synthesize suspends=_suspends - In the implementation block
@property (assign,nonatomic) BOOL hasResumes; 
@property (assign,nonatomic) unsigned resumes;                            //@synthesize resumes=_resumes - In the implementation block
@property (assign,nonatomic) BOOL hasForcedRefreshes; 
@property (assign,nonatomic) unsigned forcedRefreshes;                    //@synthesize forcedRefreshes=_forcedRefreshes - In the implementation block
@property (assign,nonatomic) BOOL hasAvgEstimatedBandwidth; 
@property (assign,nonatomic) unsigned avgEstimatedBandwidth;              //@synthesize avgEstimatedBandwidth=_avgEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasAvgUsedBandwidth; 
@property (assign,nonatomic) unsigned avgUsedBandwidth;                   //@synthesize avgUsedBandwidth=_avgUsedBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasAvgBitrate; 
@property (assign,nonatomic) unsigned avgBitrate;                         //@synthesize avgBitrate=_avgBitrate - In the implementation block
@property (assign,nonatomic) BOOL hasRetransmitAvg; 
@property (assign,nonatomic) unsigned retransmitAvg;                      //@synthesize retransmitAvg=_retransmitAvg - In the implementation block
@property (assign,nonatomic) BOOL hasRttAvg; 
@property (assign,nonatomic) unsigned rttAvg;                             //@synthesize rttAvg=_rttAvg - In the implementation block
@property (assign,nonatomic) BOOL hasCpuAvg; 
@property (assign,nonatomic) unsigned cpuAvg;                             //@synthesize cpuAvg=_cpuAvg - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRSSI; 
@property (assign,nonatomic) int wifiRSSI;                                //@synthesize wifiRSSI=_wifiRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasWifiChannel; 
@property (assign,nonatomic) unsigned wifiChannel;                        //@synthesize wifiChannel=_wifiChannel - In the implementation block
-(void)setReason:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)reason;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(void)setHasReason:(BOOL)arg1 ;
-(BOOL)hasReason;
-(NSString *)sessionUUID;
-(void)setFramesSent:(unsigned)arg1 ;
-(void)setHasFramesSent:(BOOL)arg1 ;
-(BOOL)hasFramesSent;
-(void)setConfigChanges:(unsigned)arg1 ;
-(void)setHasConfigChanges:(BOOL)arg1 ;
-(BOOL)hasConfigChanges;
-(void)setClearScreens:(unsigned)arg1 ;
-(void)setHasClearScreens:(BOOL)arg1 ;
-(BOOL)hasClearScreens;
-(void)setUnclearScreens:(unsigned)arg1 ;
-(void)setHasUnclearScreens:(BOOL)arg1 ;
-(BOOL)hasUnclearScreens;
-(void)setSuspends:(unsigned)arg1 ;
-(void)setHasSuspends:(BOOL)arg1 ;
-(BOOL)hasSuspends;
-(void)setResumes:(unsigned)arg1 ;
-(void)setHasResumes:(BOOL)arg1 ;
-(BOOL)hasResumes;
-(void)setForcedRefreshes:(unsigned)arg1 ;
-(void)setHasForcedRefreshes:(BOOL)arg1 ;
-(BOOL)hasForcedRefreshes;
-(void)setAvgEstimatedBandwidth:(unsigned)arg1 ;
-(void)setHasAvgEstimatedBandwidth:(BOOL)arg1 ;
-(BOOL)hasAvgEstimatedBandwidth;
-(void)setAvgUsedBandwidth:(unsigned)arg1 ;
-(void)setHasAvgUsedBandwidth:(BOOL)arg1 ;
-(BOOL)hasAvgUsedBandwidth;
-(void)setAvgBitrate:(unsigned)arg1 ;
-(void)setHasAvgBitrate:(BOOL)arg1 ;
-(BOOL)hasAvgBitrate;
-(void)setRetransmitAvg:(unsigned)arg1 ;
-(void)setHasRetransmitAvg:(BOOL)arg1 ;
-(BOOL)hasRetransmitAvg;
-(void)setRttAvg:(unsigned)arg1 ;
-(void)setHasRttAvg:(BOOL)arg1 ;
-(BOOL)hasRttAvg;
-(void)setCpuAvg:(unsigned)arg1 ;
-(void)setHasCpuAvg:(BOOL)arg1 ;
-(BOOL)hasCpuAvg;
-(void)setWifiRSSI:(int)arg1 ;
-(void)setHasWifiRSSI:(BOOL)arg1 ;
-(BOOL)hasWifiRSSI;
-(void)setWifiChannel:(unsigned)arg1 ;
-(void)setHasWifiChannel:(BOOL)arg1 ;
-(BOOL)hasWifiChannel;
-(unsigned)framesSent;
-(unsigned)configChanges;
-(unsigned)clearScreens;
-(unsigned)unclearScreens;
-(unsigned)suspends;
-(unsigned)resumes;
-(unsigned)forcedRefreshes;
-(unsigned)avgEstimatedBandwidth;
-(unsigned)avgUsedBandwidth;
-(unsigned)avgBitrate;
-(unsigned)retransmitAvg;
-(unsigned)rttAvg;
-(unsigned)cpuAvg;
-(int)wifiRSSI;
-(unsigned)wifiChannel;
@end

