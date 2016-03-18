/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMPersistenceResponse.h>
#import <libobjc.A.dylib/CAMTransientAssetConvertible.h>

@class NSString, NSURL, NSDate, UIImage, NSDictionary;

@interface CAMVideoPersistenceResponse : CAMPersistenceResponse <CAMTransientAssetConvertible> {

	NSString* _stillPersistenceUUID;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,readonly) SCD_Struct_CA2 duration;                                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                                 //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                                      //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned short sessionIdentifier; 
@property (nonatomic,copy,readonly) NSURL * persistenceURL; 
@property (nonatomic,readonly) NSDate * captureDate; 
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,copy,readonly) NSDictionary * stillImageMetadata; 
@property (nonatomic,copy,readonly) NSString * burstIdentifier; 
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets; 
@property (nonatomic,readonly) NSString * irisStillImageUUID; 
@property (getter=isExpectingPairedVideo,nonatomic,readonly) BOOL expectingPairedVideo; 
@property (nonatomic,readonly) NSURL * irisVideoPersistenceURL; 
@property (nonatomic,readonly) SCD_Struct_CA2 irisStillDisplayTime; 
-(unsigned long long)mediaType;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(SCD_Struct_CA2)duration;
-(NSString *)uuid;
-(UIImage *)placeholderImage;
-(NSDictionary *)stillImageMetadata;
-(BOOL)isExpectingPairedVideo;
-(SCD_Struct_CA2)irisStillDisplayTime;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSString *)irisStillImageUUID;
-(NSURL *)irisVideoPersistenceURL;
-(NSString *)stillPersistenceUUID;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5 ;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scubberImage:(id)arg5 duration:(SCD_Struct_CA2)arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(SCD_Struct_CA2)arg8 ;
-(NSDate *)captureDate;
@end

