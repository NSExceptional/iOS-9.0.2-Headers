/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface Filter : NSObject {

	unsigned _symptomId;
	long long _subsystemId;
	long long _queueLenAlert;
	long long _queueLenDrop;
	long long _queueTimeLimit;

}

@property (assign,nonatomic) long long subsystemId;                 //@synthesize subsystemId=_subsystemId - In the implementation block
@property (assign,nonatomic) unsigned symptomId;                    //@synthesize symptomId=_symptomId - In the implementation block
@property (assign,nonatomic) long long queueLenAlert;               //@synthesize queueLenAlert=_queueLenAlert - In the implementation block
@property (assign,nonatomic) long long queueLenDrop;                //@synthesize queueLenDrop=_queueLenDrop - In the implementation block
@property (assign,nonatomic) long long queueTimeLimit;              //@synthesize queueTimeLimit=_queueTimeLimit - In the implementation block
+(id)initForSymptom:(unsigned)arg1 withParams:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)subsystemId;
-(unsigned)symptomId;
-(long long)queueLenAlert;
-(long long)queueLenDrop;
-(long long)queueTimeLimit;
-(void)setSubsystemId:(long long)arg1 ;
-(void)setSymptomId:(unsigned)arg1 ;
-(void)setQueueLenAlert:(long long)arg1 ;
-(void)setQueueLenDrop:(long long)arg1 ;
-(void)setQueueTimeLimit:(long long)arg1 ;
@end

