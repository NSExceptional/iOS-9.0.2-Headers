/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float overlap; 
-(float)rate;
-(id)init;
-(float)pitch;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
@end

