/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>

@class CCCameraConnection;

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol> {

	CCCameraConnection* _parent;

}

@property (assign,nonatomic,__weak) CCCameraConnection * parent;              //@synthesize parent=_parent - In the implementation block
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentOrientationAndMirroring:(/*^block*/id)arg1 ;
-(oneway void)xpc_cancelCountdown;
-(CCCameraConnection *)parent;
-(void)setParent:(CCCameraConnection *)arg1 ;
@end

