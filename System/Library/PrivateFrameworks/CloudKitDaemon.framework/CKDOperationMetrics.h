/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MMCSOperationMetric.h>

@class NSDate, NSArray, NSMutableArray, NSString;

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSMutableArray* _ranges;

}

@property (retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (readonly) NSArray * rangesCopy; 
@property (nonatomic,retain) NSMutableArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)bytesDownloaded;
-(NSDate *)startDate;
-(id)init;
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)CKPropertiesDescription;
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
-(unsigned long long)connections;
-(void)setConnections:(unsigned long long)arg1 ;
-(void)addRange:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

