/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
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
-(void)implNotification:(id)arg1 ;
-(BOOL)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned long long)audioNumDeviceChannels;
-(BOOL)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(BOOL)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(BOOL)isRecording;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
@end

