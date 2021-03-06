/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@interface AVMIDIPlayer : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) double duration; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) double currentPosition; 
-(MIDIPlayerImpl*)impl;
-(id)initBase;
-(void)destroyBase;
-(id)initWithContentsOfURL:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 soundBankURL:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)hostTimeForBeats:(double)arg1 ;
-(double)beatsForHostTime:(unsigned long long)arg1 ;
-(void)setCurrentPosition:(double)arg1 ;
-(void)prepareToPlay;
-(float)rate;
-(BOOL)isPlaying;
-(void)dealloc;
-(double)duration;
-(void)stop;
-(double)currentPosition;
-(void)finalize;
-(void)play:(/*^block*/id)arg1 ;
-(void)setRate:(float)arg1 ;
@end

