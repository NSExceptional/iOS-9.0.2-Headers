/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMVideoCaptureRequest.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPersistence.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestLocation.h>
#import <libobjc.A.dylib/CAMMutableCaptureRequestPower.h>

@class NSString, NSURL, CLLocation;

@interface CAMMutableVideoCaptureRequest : CAMVideoCaptureRequest <CAMMutableCaptureRequestPersistence, CAMMutableCaptureRequestLocation, CAMMutableCaptureRequestPower>

@property (assign,nonatomic,__weak) id<CAMVideoCaptureRequestDelegate> delegate; 
@property (assign,nonatomic) long long captureOrientation; 
@property (assign,nonatomic) long long captureDevice; 
@property (assign,nonatomic) long long captureMode; 
@property (assign,nonatomic) long long physicalButtonType; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,nonatomic) unsigned short sessionIdentifier; 
@property (assign,nonatomic) double maximumRecordedDuration; 
@property (assign,nonatomic) long long maximumRecordedFileSize; 
@property (assign,nonatomic) long long remainingDiskUsageThreshold; 
@property (assign,nonatomic) BOOL shouldGenerateVideoPreviewImage; 
@property (assign,getter=isTimelapse,nonatomic) BOOL timelapse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long persistenceOptions; 
@property (assign,nonatomic) unsigned long long deferredPersistenceOptions; 
@property (nonatomic,copy) NSURL * localDestinationURL; 
@property (nonatomic,copy) NSString * persistenceUUID; 
@property (assign,nonatomic) BOOL shouldExtractDiagnosticsFromMetadata; 
@property (assign,nonatomic) BOOL shouldPersistDiagnosticsToSidecar; 
@property (assign,nonatomic) BOOL shouldDelayRemotePersistence; 
@property (nonatomic,retain) CLLocation * location; 
@property (assign,nonatomic) unsigned assertionIdentifier; 
-(void)setDelegate:(id<CAMVideoCaptureRequestDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setPersistenceOptions:(long long)arg1 ;
-(void)setDeferredPersistenceOptions:(unsigned long long)arg1 ;
-(void)setLocalDestinationURL:(NSURL *)arg1 ;
-(void)setPersistenceUUID:(NSString *)arg1 ;
-(void)setShouldExtractDiagnosticsFromMetadata:(BOOL)arg1 ;
-(void)setShouldPersistDiagnosticsToSidecar:(BOOL)arg1 ;
-(void)setShouldDelayRemotePersistence:(BOOL)arg1 ;
-(void)setAssertionIdentifier:(unsigned)arg1 ;
-(void)setCaptureOrientation:(long long)arg1 ;
-(void)setCaptureDevice:(long long)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setPhysicalButtonType:(long long)arg1 ;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setSessionIdentifier:(unsigned short)arg1 ;
-(void)setMaximumRecordedDuration:(double)arg1 ;
-(void)setMaximumRecordedFileSize:(long long)arg1 ;
-(void)setRemainingDiskUsageThreshold:(long long)arg1 ;
-(void)setShouldGenerateVideoPreviewImage:(BOOL)arg1 ;
-(void)setTimelapse:(BOOL)arg1 ;
-(void)setTorchMode:(long long)arg1 ;
@end

