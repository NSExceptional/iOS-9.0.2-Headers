/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSError;

@interface CAMIrisVideoJob : NSObject <NSSecureCoding> {

	BOOL _finalReferenceVideo;
	NSURL* _videoURL;
	NSString* _stillImagePersistenceUUID;
	NSString* _videoPersistenceUUID;
	NSString* _irisIdentifier;
	long long _captureDevice;
	long long _captureOrientation;
	NSURL* _masterVideoURL;
	double _captureTime;
	NSError* _captureError;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillImageDisplayTime;

}

@property (nonatomic,readonly) NSURL * videoURL;                                                   //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) NSString * stillImagePersistenceUUID;                               //@synthesize stillImagePersistenceUUID=_stillImagePersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSString * videoPersistenceUUID;                                    //@synthesize videoPersistenceUUID=_videoPersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSString * irisIdentifier;                                          //@synthesize irisIdentifier=_irisIdentifier - In the implementation block
@property (nonatomic,readonly) long long captureDevice;                                            //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) long long captureOrientation;                                       //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillImageDisplayTime;                               //@synthesize stillImageDisplayTime=_stillImageDisplayTime - In the implementation block
@property (nonatomic,readonly) NSURL * masterVideoURL;                                             //@synthesize masterVideoURL=_masterVideoURL - In the implementation block
@property (getter=isFinalReferenceVideo,nonatomic,readonly) BOOL finalReferenceVideo;              //@synthesize finalReferenceVideo=_finalReferenceVideo - In the implementation block
@property (nonatomic,readonly) double captureTime;                                                 //@synthesize captureTime=_captureTime - In the implementation block
@property (nonatomic,readonly) NSError * captureError;                                             //@synthesize captureError=_captureError - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)videoURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CA2)duration;
-(long long)captureOrientation;
-(id)initWithVideoURL:(id)arg1 stillImagePersistenceUUID:(id)arg2 videoPersistenceUUID:(id)arg3 irisIdentifier:(id)arg4 captureDevice:(long long)arg5 captureOrientation:(long long)arg6 duration:(SCD_Struct_CA2)arg7 stillImageDisplayTime:(SCD_Struct_CA2)arg8 masterVideoURL:(id)arg9 isFinalReferenceVideo:(BOOL)arg10 captureTime:(double)arg11 captureError:(id)arg12 ;
-(NSString *)stillImagePersistenceUUID;
-(NSString *)videoPersistenceUUID;
-(NSString *)irisIdentifier;
-(long long)captureDevice;
-(SCD_Struct_CA2)stillImageDisplayTime;
-(NSURL *)masterVideoURL;
-(BOOL)isFinalReferenceVideo;
-(double)captureTime;
-(NSError *)captureError;
@end

