/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWiFiMetricsManagerStateMachine;

@interface AWDWiFiMetricsManagerBTCoexStats : PBCodable <NSCopying> {

	unsigned long long _antennaGrants;
	unsigned long long _antennaRequests;
	unsigned long long _highUcodeLatency;
	unsigned long long _psnullExceeded;
	unsigned long long _requestsA2DP;
	unsigned long long _requestsACL;
	unsigned long long _requestsBLE;
	unsigned long long _requestsBLEScan;
	unsigned long long _requestsInquiry;
	unsigned long long _requestsInquiryScan;
	unsigned long long _requestsMSS;
	unsigned long long _requestsOther;
	unsigned long long _requestsPARK;
	unsigned long long _requestsPage;
	unsigned long long _requestsPageScan;
	unsigned long long _requestsSCO;
	unsigned long long _requestsSniff;
	unsigned long long _requestseSCO;
	unsigned long long _timestamp;
	unsigned long long _wlanPreempted;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2BT;
	AWDWiFiMetricsManagerStateMachine* _antennaOwnership2WLAN;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOff;
	AWDWiFiMetricsManagerStateMachine* _enbledStateOn;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOff;
	AWDWiFiMetricsManagerStateMachine* _hybridStateOn;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOff;
	AWDWiFiMetricsManagerStateMachine* _tdmStateOn;
	SCD_Struct_AW33 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAntennaRequests; 
@property (assign,nonatomic) unsigned long long antennaRequests;                                     //@synthesize antennaRequests=_antennaRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAntennaGrants; 
@property (assign,nonatomic) unsigned long long antennaGrants;                                       //@synthesize antennaGrants=_antennaGrants - In the implementation block
@property (assign,nonatomic) BOOL hasWlanPreempted; 
@property (assign,nonatomic) unsigned long long wlanPreempted;                                       //@synthesize wlanPreempted=_wlanPreempted - In the implementation block
@property (assign,nonatomic) BOOL hasPsnullExceeded; 
@property (assign,nonatomic) unsigned long long psnullExceeded;                                      //@synthesize psnullExceeded=_psnullExceeded - In the implementation block
@property (assign,nonatomic) BOOL hasHighUcodeLatency; 
@property (assign,nonatomic) unsigned long long highUcodeLatency;                                    //@synthesize highUcodeLatency=_highUcodeLatency - In the implementation block
@property (nonatomic,readonly) BOOL hasAntennaOwnership2BT; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2BT;                //@synthesize antennaOwnership2BT=_antennaOwnership2BT - In the implementation block
@property (nonatomic,readonly) BOOL hasAntennaOwnership2WLAN; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * antennaOwnership2WLAN;              //@synthesize antennaOwnership2WLAN=_antennaOwnership2WLAN - In the implementation block
@property (nonatomic,readonly) BOOL hasEnbledStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOn;                      //@synthesize enbledStateOn=_enbledStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasEnbledStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * enbledStateOff;                     //@synthesize enbledStateOff=_enbledStateOff - In the implementation block
@property (nonatomic,readonly) BOOL hasHybridStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOn;                      //@synthesize hybridStateOn=_hybridStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasHybridStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * hybridStateOff;                     //@synthesize hybridStateOff=_hybridStateOff - In the implementation block
@property (nonatomic,readonly) BOOL hasTdmStateOn; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOn;                         //@synthesize tdmStateOn=_tdmStateOn - In the implementation block
@property (nonatomic,readonly) BOOL hasTdmStateOff; 
@property (nonatomic,retain) AWDWiFiMetricsManagerStateMachine * tdmStateOff;                        //@synthesize tdmStateOff=_tdmStateOff - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsACL; 
@property (assign,nonatomic) unsigned long long requestsACL;                                         //@synthesize requestsACL=_requestsACL - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsSCO; 
@property (assign,nonatomic) unsigned long long requestsSCO;                                         //@synthesize requestsSCO=_requestsSCO - In the implementation block
@property (assign,nonatomic) BOOL hasRequestseSCO; 
@property (assign,nonatomic) unsigned long long requestseSCO;                                        //@synthesize requestseSCO=_requestseSCO - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsA2DP; 
@property (assign,nonatomic) unsigned long long requestsA2DP;                                        //@synthesize requestsA2DP=_requestsA2DP - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsSniff; 
@property (assign,nonatomic) unsigned long long requestsSniff;                                       //@synthesize requestsSniff=_requestsSniff - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPageScan; 
@property (assign,nonatomic) unsigned long long requestsPageScan;                                    //@synthesize requestsPageScan=_requestsPageScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsInquiryScan; 
@property (assign,nonatomic) unsigned long long requestsInquiryScan;                                 //@synthesize requestsInquiryScan=_requestsInquiryScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPage; 
@property (assign,nonatomic) unsigned long long requestsPage;                                        //@synthesize requestsPage=_requestsPage - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsInquiry; 
@property (assign,nonatomic) unsigned long long requestsInquiry;                                     //@synthesize requestsInquiry=_requestsInquiry - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsBLE; 
@property (assign,nonatomic) unsigned long long requestsBLE;                                         //@synthesize requestsBLE=_requestsBLE - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsOther; 
@property (assign,nonatomic) unsigned long long requestsOther;                                       //@synthesize requestsOther=_requestsOther - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsBLEScan; 
@property (assign,nonatomic) unsigned long long requestsBLEScan;                                     //@synthesize requestsBLEScan=_requestsBLEScan - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsMSS; 
@property (assign,nonatomic) unsigned long long requestsMSS;                                         //@synthesize requestsMSS=_requestsMSS - In the implementation block
@property (assign,nonatomic) BOOL hasRequestsPARK; 
@property (assign,nonatomic) unsigned long long requestsPARK;                                        //@synthesize requestsPARK=_requestsPARK - In the implementation block
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
-(void)setAntennaOwnership2BT:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAntennaOwnership2WLAN:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setEnbledStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setEnbledStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHybridStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setHybridStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setTdmStateOn:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setTdmStateOff:(AWDWiFiMetricsManagerStateMachine *)arg1 ;
-(void)setAntennaRequests:(unsigned long long)arg1 ;
-(void)setHasAntennaRequests:(BOOL)arg1 ;
-(BOOL)hasAntennaRequests;
-(void)setAntennaGrants:(unsigned long long)arg1 ;
-(void)setHasAntennaGrants:(BOOL)arg1 ;
-(BOOL)hasAntennaGrants;
-(void)setWlanPreempted:(unsigned long long)arg1 ;
-(void)setHasWlanPreempted:(BOOL)arg1 ;
-(BOOL)hasWlanPreempted;
-(void)setPsnullExceeded:(unsigned long long)arg1 ;
-(void)setHasPsnullExceeded:(BOOL)arg1 ;
-(BOOL)hasPsnullExceeded;
-(void)setHighUcodeLatency:(unsigned long long)arg1 ;
-(void)setHasHighUcodeLatency:(BOOL)arg1 ;
-(BOOL)hasHighUcodeLatency;
-(BOOL)hasAntennaOwnership2BT;
-(BOOL)hasAntennaOwnership2WLAN;
-(BOOL)hasEnbledStateOn;
-(BOOL)hasEnbledStateOff;
-(BOOL)hasHybridStateOn;
-(BOOL)hasHybridStateOff;
-(BOOL)hasTdmStateOn;
-(BOOL)hasTdmStateOff;
-(void)setRequestsACL:(unsigned long long)arg1 ;
-(void)setHasRequestsACL:(BOOL)arg1 ;
-(BOOL)hasRequestsACL;
-(void)setRequestsSCO:(unsigned long long)arg1 ;
-(void)setHasRequestsSCO:(BOOL)arg1 ;
-(BOOL)hasRequestsSCO;
-(void)setRequestseSCO:(unsigned long long)arg1 ;
-(void)setHasRequestseSCO:(BOOL)arg1 ;
-(BOOL)hasRequestseSCO;
-(void)setRequestsA2DP:(unsigned long long)arg1 ;
-(void)setHasRequestsA2DP:(BOOL)arg1 ;
-(BOOL)hasRequestsA2DP;
-(void)setRequestsSniff:(unsigned long long)arg1 ;
-(void)setHasRequestsSniff:(BOOL)arg1 ;
-(BOOL)hasRequestsSniff;
-(void)setRequestsPageScan:(unsigned long long)arg1 ;
-(void)setHasRequestsPageScan:(BOOL)arg1 ;
-(BOOL)hasRequestsPageScan;
-(void)setRequestsInquiryScan:(unsigned long long)arg1 ;
-(void)setHasRequestsInquiryScan:(BOOL)arg1 ;
-(BOOL)hasRequestsInquiryScan;
-(void)setRequestsPage:(unsigned long long)arg1 ;
-(void)setHasRequestsPage:(BOOL)arg1 ;
-(BOOL)hasRequestsPage;
-(void)setRequestsInquiry:(unsigned long long)arg1 ;
-(void)setHasRequestsInquiry:(BOOL)arg1 ;
-(BOOL)hasRequestsInquiry;
-(void)setRequestsBLE:(unsigned long long)arg1 ;
-(void)setHasRequestsBLE:(BOOL)arg1 ;
-(BOOL)hasRequestsBLE;
-(void)setRequestsOther:(unsigned long long)arg1 ;
-(void)setHasRequestsOther:(BOOL)arg1 ;
-(BOOL)hasRequestsOther;
-(void)setRequestsBLEScan:(unsigned long long)arg1 ;
-(void)setHasRequestsBLEScan:(BOOL)arg1 ;
-(BOOL)hasRequestsBLEScan;
-(void)setRequestsMSS:(unsigned long long)arg1 ;
-(void)setHasRequestsMSS:(BOOL)arg1 ;
-(BOOL)hasRequestsMSS;
-(void)setRequestsPARK:(unsigned long long)arg1 ;
-(void)setHasRequestsPARK:(BOOL)arg1 ;
-(BOOL)hasRequestsPARK;
-(unsigned long long)antennaRequests;
-(unsigned long long)antennaGrants;
-(unsigned long long)wlanPreempted;
-(unsigned long long)psnullExceeded;
-(unsigned long long)highUcodeLatency;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2BT;
-(AWDWiFiMetricsManagerStateMachine *)antennaOwnership2WLAN;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOn;
-(AWDWiFiMetricsManagerStateMachine *)enbledStateOff;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOn;
-(AWDWiFiMetricsManagerStateMachine *)hybridStateOff;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOn;
-(AWDWiFiMetricsManagerStateMachine *)tdmStateOff;
-(unsigned long long)requestsACL;
-(unsigned long long)requestsSCO;
-(unsigned long long)requestseSCO;
-(unsigned long long)requestsA2DP;
-(unsigned long long)requestsSniff;
-(unsigned long long)requestsPageScan;
-(unsigned long long)requestsInquiryScan;
-(unsigned long long)requestsPage;
-(unsigned long long)requestsInquiry;
-(unsigned long long)requestsBLE;
-(unsigned long long)requestsOther;
-(unsigned long long)requestsBLEScan;
-(unsigned long long)requestsMSS;
-(unsigned long long)requestsPARK;
@end

