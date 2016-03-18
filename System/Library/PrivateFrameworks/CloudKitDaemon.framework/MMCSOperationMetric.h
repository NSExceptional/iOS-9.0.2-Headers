/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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

