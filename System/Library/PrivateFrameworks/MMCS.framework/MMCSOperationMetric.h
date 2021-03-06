/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCSOperationMetric.h>
@class NSDate, NSArray;


@protocol MMCSOperationMetric <NSObject>
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (assign) double queueing; 
@property (assign) double executing; 
@property (assign) unsigned long long bytesUploaded; 
@property (assign) unsigned long long bytesDownloaded; 
@property (assign) unsigned long long connections; 
@property (assign) unsigned long long connectionsCreated; 
@property (readonly) NSArray * rangesCopy; 
@required
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(double)duration;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(double)queueing;
-(double)executing;
-(unsigned long long)connectionsCreated;
-(void)setQueueing:(double)arg1;
-(void)setExecuting:(double)arg1;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(NSArray *)rangesCopy;
-(unsigned long long)connections;
-(void)setConnections:(unsigned long long)arg1;
-(void)addRange:(id)arg1;

@end


@class NSDate, NSArray, NSMutableArray, NSString;

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {

	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSDate* _startDate;
	double _duration;
	NSMutableArray* _ranges;

}

@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * rangesCopy; 
-(id)initWithDate:(id)arg1 ;
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(double)queueing;
-(double)executing;
-(unsigned long long)connectionsCreated;
-(NSMutableArray *)ranges;
-(void)setQueueing:(double)arg1 ;
-(void)setExecuting:(double)arg1 ;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(NSArray *)rangesCopy;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(unsigned long long)connections;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)rangesCompleted;
-(id)describeRanges;
-(long long)compareExecutingStartTime:(id)arg1 ;
-(void)addRange:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(double)other;
@end

