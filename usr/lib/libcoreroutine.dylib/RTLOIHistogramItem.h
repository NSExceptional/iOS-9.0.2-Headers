/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLocationOfInterest;

@interface RTLOIHistogramItem : NSObject {

	RTLocationOfInterest* _locationOfInterest;
	double _timeOfStay;
	double _probability;
	long long _numOfEvents;

}

@property (nonatomic,retain) RTLocationOfInterest * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,nonatomic) double timeOfStay;                                      //@synthesize timeOfStay=_timeOfStay - In the implementation block
@property (assign,nonatomic) double probability;                                     //@synthesize probability=_probability - In the implementation block
@property (assign,nonatomic) long long numOfEvents;                                  //@synthesize numOfEvents=_numOfEvents - In the implementation block
-(RTLocationOfInterest *)locationOfInterest;
-(id)description;
-(double)probability;
-(long long)numOfEvents;
-(double)timeOfStay;
-(BOOL)isHighProbabilityHistogramItem;
-(id)initWithLocationOfInterest:(id)arg1 timeOfStay:(double)arg2 andNumOfEvents:(long long)arg3 ;
-(void)setLocationOfInterest:(RTLocationOfInterest *)arg1 ;
-(void)setTimeOfStay:(double)arg1 ;
-(void)setProbability:(double)arg1 ;
-(void)setNumOfEvents:(long long)arg1 ;
@end

