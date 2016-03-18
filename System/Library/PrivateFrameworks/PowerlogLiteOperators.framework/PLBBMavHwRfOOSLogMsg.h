/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSString, NSNumber, NSArray, NSMutableDictionary;

@interface PLBBMavHwRfOOSLogMsg : PLBasebandMessage {

	unsigned char _oosInProgress;
	unsigned char _inited;
	NSString* _error;
	NSNumber* _logDuration;
	NSNumber* _oosTimes;
	NSNumber* _oosTicks;
	NSNumber* _pssiTicks;
	NSArray* _oosLtePssiTimes;
	NSArray* _oosLtePssiStatTicks;
	NSArray* _oosGsmPssiTimes;
	NSArray* _oosGsmPssiStatTicks;
	NSArray* _oosWcdmaPssiTimes;
	NSArray* _oosWcdmaPssiStatTicks;
	NSArray* _oosTdsPssiTimes;
	NSArray* _oosTdsPssiStatTicks;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSString * error;                                        //@synthesize error=_error - In the implementation block
@property (retain) NSNumber * logDuration;                                  //@synthesize logDuration=_logDuration - In the implementation block
@property (assign) unsigned char oosInProgress;                             //@synthesize oosInProgress=_oosInProgress - In the implementation block
@property (retain) NSNumber * oosTimes;                                     //@synthesize oosTimes=_oosTimes - In the implementation block
@property (retain) NSNumber * oosTicks;                                     //@synthesize oosTicks=_oosTicks - In the implementation block
@property (retain) NSNumber * pssiTicks;                                    //@synthesize pssiTicks=_pssiTicks - In the implementation block
@property (retain) NSArray * oosLtePssiTimes;                               //@synthesize oosLtePssiTimes=_oosLtePssiTimes - In the implementation block
@property (retain) NSArray * oosLtePssiStatTicks;                           //@synthesize oosLtePssiStatTicks=_oosLtePssiStatTicks - In the implementation block
@property (retain) NSArray * oosGsmPssiTimes;                               //@synthesize oosGsmPssiTimes=_oosGsmPssiTimes - In the implementation block
@property (retain) NSArray * oosGsmPssiStatTicks;                           //@synthesize oosGsmPssiStatTicks=_oosGsmPssiStatTicks - In the implementation block
@property (retain) NSArray * oosWcdmaPssiTimes;                             //@synthesize oosWcdmaPssiTimes=_oosWcdmaPssiTimes - In the implementation block
@property (retain) NSArray * oosWcdmaPssiStatTicks;                         //@synthesize oosWcdmaPssiStatTicks=_oosWcdmaPssiStatTicks - In the implementation block
@property (retain) NSArray * oosTdsPssiTimes;                               //@synthesize oosTdsPssiTimes=_oosTdsPssiTimes - In the implementation block
@property (retain) NSArray * oosTdsPssiStatTicks;                           //@synthesize oosTdsPssiStatTicks=_oosTdsPssiStatTicks - In the implementation block
@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)entryEventBackwardDefinitionOOSPerRat;
-(NSString *)error;
-(id)init;
-(void)setError:(NSString *)arg1 ;
-(void)setLogDuration:(NSNumber *)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(NSNumber *)logDuration;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)populateEntry:(id)arg1 ;
-(unsigned char)oosInProgress;
-(NSNumber *)oosTimes;
-(NSNumber *)oosTicks;
-(NSNumber *)pssiTicks;
-(NSArray *)oosLtePssiTimes;
-(NSArray *)oosLtePssiStatTicks;
-(NSArray *)oosGsmPssiTimes;
-(NSArray *)oosGsmPssiStatTicks;
-(NSArray *)oosWcdmaPssiTimes;
-(NSArray *)oosWcdmaPssiStatTicks;
-(NSArray *)oosTdsPssiTimes;
-(NSArray *)oosTdsPssiStatTicks;
-(void)refreshBBMavHwRfOOS;
-(id)logEventBackwardBBMavHwRfOos;
-(void)setOosInProgress:(unsigned char)arg1 ;
-(void)setOosTimes:(NSNumber *)arg1 ;
-(void)setOosTicks:(NSNumber *)arg1 ;
-(void)setPssiTicks:(NSNumber *)arg1 ;
-(void)setOosLtePssiTimes:(NSArray *)arg1 ;
-(void)setOosLtePssiStatTicks:(NSArray *)arg1 ;
-(void)setOosGsmPssiTimes:(NSArray *)arg1 ;
-(void)setOosGsmPssiStatTicks:(NSArray *)arg1 ;
-(void)setOosWcdmaPssiTimes:(NSArray *)arg1 ;
-(void)setOosWcdmaPssiStatTicks:(NSArray *)arg1 ;
-(void)setOosTdsPssiTimes:(NSArray *)arg1 ;
-(void)setOosTdsPssiStatTicks:(NSArray *)arg1 ;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
@end

