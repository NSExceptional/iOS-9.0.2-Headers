/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKVoiceControllerDelegate <NSObject>
@required
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerDidStartRecording:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;

@end

