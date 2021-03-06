/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef audioUnit; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(AudioComponentDescription)audioComponentDescription;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(BOOL)setValue:(float)arg1 forParam:(unsigned)arg2 ;
-(float)valueForParam:(unsigned)arg1 ;
-(BOOL)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2 ;
-(AUAudioUnit *)AUAudioUnit;
-(NSString *)name;
-(unsigned long long)version;
-(NSString *)manufacturerName;
@end

