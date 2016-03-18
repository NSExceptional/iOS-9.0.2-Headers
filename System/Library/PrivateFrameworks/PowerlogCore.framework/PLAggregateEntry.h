/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray;

@interface PLAggregateEntry : NSObject {

	short _aggregateFunction;
	NSString* _entryKey;
	NSMutableDictionary* _matchingKeyToValue;
	NSArray* _otherAggregateKeys;
	NSString* _aggregateKey;
	double _aggregateValue;

}

@property (retain) NSString * entryKey;                                             //@synthesize entryKey=_entryKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * matchingKeyToValue;              //@synthesize matchingKeyToValue=_matchingKeyToValue - In the implementation block
@property (retain) NSArray * otherAggregateKeys;                                    //@synthesize otherAggregateKeys=_otherAggregateKeys - In the implementation block
@property (retain) NSString * aggregateKey;                                         //@synthesize aggregateKey=_aggregateKey - In the implementation block
@property (assign) double aggregateValue;                                           //@synthesize aggregateValue=_aggregateValue - In the implementation block
@property (assign) short aggregateFunction;                                         //@synthesize aggregateFunction=_aggregateFunction - In the implementation block
-(void)setAggregateKey:(NSString *)arg1 ;
-(NSString *)aggregateKey;
-(id)description;
-(id)query;
-(NSMutableDictionary *)matchingKeyToValue;
-(double)aggregateValue;
-(void)updateWithValue:(double)arg1 ;
-(void)setEntryKey:(NSString *)arg1 ;
-(void)setMatchingKeyToValue:(NSMutableDictionary *)arg1 ;
-(void)setOtherAggregateKeys:(NSArray *)arg1 ;
-(void)setAggregateValue:(double)arg1 ;
-(void)setAggregateFunction:(short)arg1 ;
-(short)aggregateFunction;
-(id)matchingPairs;
-(NSArray *)otherAggregateKeys;
-(id)aggregateOperationWithMatchingPairs:(id)arg1 ;
-(NSString *)entryKey;
@end

