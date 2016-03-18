/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface RTTokenBucket : NSObject {

	double _interArrivalTime;
	double _fillRate;
	double _capacity;
	double _operationCost;
	NSDate* _lastBucketFill;
	double _tokenBucket;
	NSDate* _lastArrivalTime;
	double _totalInterArrivalTime;
	double _wastedTokens;
	double _totalTokensGenerated;
	double _totalTokensConsumed;
	unsigned long long _totalOperations;
	unsigned long long _operationsAllowed;

}

@property (assign,nonatomic) double interArrivalTime;                           //@synthesize interArrivalTime=_interArrivalTime - In the implementation block
@property (assign,nonatomic) double fillRate;                                   //@synthesize fillRate=_fillRate - In the implementation block
@property (assign,nonatomic) double capacity;                                   //@synthesize capacity=_capacity - In the implementation block
@property (assign,nonatomic) double operationCost;                              //@synthesize operationCost=_operationCost - In the implementation block
@property (nonatomic,retain) NSDate * lastBucketFill;                           //@synthesize lastBucketFill=_lastBucketFill - In the implementation block
@property (assign,nonatomic) double tokenBucket;                                //@synthesize tokenBucket=_tokenBucket - In the implementation block
@property (nonatomic,retain) NSDate * lastArrivalTime;                          //@synthesize lastArrivalTime=_lastArrivalTime - In the implementation block
@property (assign,nonatomic) double totalInterArrivalTime;                      //@synthesize totalInterArrivalTime=_totalInterArrivalTime - In the implementation block
@property (assign,nonatomic) double wastedTokens;                               //@synthesize wastedTokens=_wastedTokens - In the implementation block
@property (assign,nonatomic) double totalTokensGenerated;                       //@synthesize totalTokensGenerated=_totalTokensGenerated - In the implementation block
@property (assign,nonatomic) double totalTokensConsumed;                        //@synthesize totalTokensConsumed=_totalTokensConsumed - In the implementation block
@property (assign,nonatomic) unsigned long long totalOperations;                //@synthesize totalOperations=_totalOperations - In the implementation block
@property (assign,nonatomic) unsigned long long operationsAllowed;              //@synthesize operationsAllowed=_operationsAllowed - In the implementation block
-(id)init;
-(void)reset;
-(double)operationCost;
-(void)setOperationCost:(double)arg1 ;
-(double)capacity;
-(void)setCapacity:(double)arg1 ;
-(id)initWithFillRate:(double)arg1 capacity:(double)arg2 ;
-(double)tokenBucket;
-(double)fillRate;
-(NSDate *)lastBucketFill;
-(double)totalTokensGenerated;
-(void)setTotalTokensGenerated:(double)arg1 ;
-(double)wastedTokens;
-(void)setWastedTokens:(double)arg1 ;
-(void)setTokenBucket:(double)arg1 ;
-(void)setLastBucketFill:(NSDate *)arg1 ;
-(NSDate *)lastArrivalTime;
-(void)setInterArrivalTime:(double)arg1 ;
-(double)interArrivalTime;
-(double)totalInterArrivalTime;
-(void)setTotalInterArrivalTime:(double)arg1 ;
-(void)setLastArrivalTime:(NSDate *)arg1 ;
-(unsigned long long)totalOperations;
-(void)setTotalOperations:(unsigned long long)arg1 ;
-(double)totalTokensConsumed;
-(void)setTotalTokensConsumed:(double)arg1 ;
-(unsigned long long)operationsAllowed;
-(void)setOperationsAllowed:(unsigned long long)arg1 ;
-(void)_replenishTokens;
-(BOOL)_consumeTokens:(unsigned long long)arg1 ;
-(BOOL)operationAllowedWithCost:(double)arg1 ;
-(double)timeIntervalUntilOperationAllowedWithCost:(double)arg1 ;
-(unsigned long long)countOfOperationsAllowedWithCost:(double)arg1 ;
-(BOOL)operationAllowed;
-(double)timeIntervalUntilOperationAllowed;
-(unsigned long long)countOfOperationsAllowed;
-(void)dumpStatistics;
-(void)setFillRate:(double)arg1 ;
@end

