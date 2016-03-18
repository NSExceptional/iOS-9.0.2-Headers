/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/AVRecorderImpl.h>

@class NSMutableDictionary, NSString;

@interface AVRecorderAudioQueueImpl : NSObject <AVRecorderImpl> {

	BOOL _isActive;
	BOOL _isRecording;
	BOOL _isWriting;
	NSMutableDictionary* _attributes;
	unsigned _fileType;
	unsigned _audioCodec;
	long long _maxPCMFramesToRecord;
	BOOL _haveRecordedMaxPCMFrames;
	AudioStreamBasicDescription _recordingFormat;
	OpaqueAudioFileIDRef _audioFile;
	OpaqueAudioQueueRef _audioQueue;
	unsigned _numDeviceChannels;
	AudioQueueLevelMeterState* _audioLevels;
	AudioQueueLevelMeterState* _audioLevelsDB;
	unsigned long long _totalBytesRecorded;
	unsigned long long _totalPacketsRecorded;
	unsigned long long _totalFramesRecorded;
	AudioQueueBuffer* _buffers[3];
	BOOL _bufferUsed[3];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)takePhoto;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)autoFocusAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)stop;
-(BOOL)start;
-(void)deactivate;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(double)recordedDuration;
-(BOOL)activate:(id*)arg1 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(void)copyEncoderCookieToFile;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 useDB:(BOOL)arg3 ;
-(void)haveABuffer:(AudioQueueBuffer*)arg1 withTimeStamp:(const AudioTimeStamp*)arg2 andNumPackets:(unsigned)arg3 andPacketDescs:(const AudioStreamPacketDescription*)arg4 ;
-(BOOL)isRecording;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)initWithAttributes:(id)arg1 ;
@end

