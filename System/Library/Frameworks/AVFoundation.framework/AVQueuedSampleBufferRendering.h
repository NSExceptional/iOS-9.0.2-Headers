/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol AVQueuedSampleBufferRendering <NSObject>
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
@required
-(OpaqueCMTimebaseRef)timebase;
-(void)stopRequestingMediaData;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1;
-(NSError *)error;
-(void)flush;
-(long long)status;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

