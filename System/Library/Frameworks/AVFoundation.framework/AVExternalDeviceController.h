/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVExternalDeviceControllerInternal, NSArray;

@interface AVExternalDeviceController : NSObject {

	AVExternalDeviceControllerInternal* _externalDeviceController;

}

@property (assign,nonatomic,__weak) id<AVExternalDeviceControllerDelegate> delegate; 
@property (assign,nonatomic) long long discoveryMode; 
@property (nonatomic,copy,readonly) NSArray * availableExternalDevices; 
-(BOOL)setCurrentExternalDevice:(id)arg1 withPassword:(id)arg2 ;
-(NSArray *)availableExternalDevices;
-(BOOL)setCurrentExternalDevice:(id)arg1 ;
-(BOOL)isExternalDeviceCurrent:(id)arg1 ;
-(long long)discoveryMode;
-(void)setDelegate:(id<AVExternalDeviceControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AVExternalDeviceControllerDelegate>)delegate;
-(void)setDiscoveryMode:(long long)arg1 ;
@end
