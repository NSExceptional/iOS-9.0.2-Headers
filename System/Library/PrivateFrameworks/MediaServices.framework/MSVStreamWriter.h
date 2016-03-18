/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSOutputStream, NSInputStream, NSObject, NSString;

@interface MSVStreamWriter : NSObject <NSStreamDelegate> {

	BOOL _closeOnStop;
	z_stream_s* _zstreamp;
	BOOL _compressed;
	unsigned long long _maximumBufferSize;
	double _timestamp;
	unsigned long long _bytesWritten;
	/*^block*/id _canWriteDataBlock;
	/*^block*/id _didFinishWritingBlock;
	/*^block*/id _didEncounterErrorBlock;
	NSOutputStream* _outputStream;
	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) unsigned long long maximumBufferSize;              //@synthesize maximumBufferSize=_maximumBufferSize - In the implementation block
@property (assign,getter=isCompressed,nonatomic) BOOL compressed;               //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long bytesWritten;                   //@synthesize bytesWritten=_bytesWritten - In the implementation block
@property (nonatomic,copy) id canWriteDataBlock;                                //@synthesize canWriteDataBlock=_canWriteDataBlock - In the implementation block
@property (nonatomic,copy) id didFinishWritingBlock;                            //@synthesize didFinishWritingBlock=_didFinishWritingBlock - In the implementation block
@property (nonatomic,copy) id didEncounterErrorBlock;                           //@synthesize didEncounterErrorBlock=_didEncounterErrorBlock - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                     //@synthesize outputStream=_outputStream - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                       //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)writeStreamError:(SCD_Struct_MS3)arg1 ;
-(id)didEncounterErrorBlock;
-(void)setMaximumBufferSize:(unsigned long long)arg1 ;
-(void)setDidEncounterErrorBlock:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned long long)maximumBufferSize;
-(void)setDidFinishWritingBlock:(id)arg1 ;
-(void)setBytesWritten:(unsigned long long)arg1 ;
-(id)didFinishWritingBlock;
-(void)setCanWriteDataBlock:(id)arg1 ;
-(id)_decompressData:(id)arg1 ;
-(void)writeAllData:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)canWriteDataBlock;
-(unsigned long long)bytesWritten;
-(NSOutputStream *)outputStream;
-(id)initWithOutputStream:(id)arg1 queue:(id)arg2 ;
-(BOOL)writeAllData:(id)arg1 error:(id*)arg2 ;
-(NSInputStream *)inputStream;
-(BOOL)isCompressed;
@end

