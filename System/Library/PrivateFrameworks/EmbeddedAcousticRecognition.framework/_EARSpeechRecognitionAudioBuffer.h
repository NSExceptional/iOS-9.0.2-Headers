/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {

	/*^block*/id _bufferFactory;
	shared_ptr<EAR::AudioBuffer>* _currentBuffer;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _ended;
	BOOL _cancelled;

}
-(void)dealloc;
-(void)_getShouldStopWithCompletion:(/*^block*/id)arg1 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)_rollBuffer;
-(id)_initWithAudioBufferFactory:(/*^block*/id)arg1 ;
-(void)endAudio;
-(void)cancelRecognition;
@end

