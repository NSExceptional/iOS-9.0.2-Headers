/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/PUTransientDisplayAsset.h>

@class NSURL, NSString, UIImage, NSDate;

@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset> {

	BOOL _canPlayPhotoIris;
	BOOL _isPhotoIrisPlaceholder;
	BOOL _HDR;
	BOOL _representsBurst;
	NSString* _uuid;
	unsigned long long _mediaType;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;
	double _duration;
	NSDate* _creationDate;
	NSDate* _modificationDate;
	NSURL* _persistenceURL;
	UIImage* _placeholderImage;
	NSString* _burstIdentifier;
	unsigned long long _numberOfRepresentedAssets;
	SCD_Struct_CA2 _photoIrisStillDisplayTime;
	SCD_Struct_CA2 _photoIrisVideoDuration;

}

@property (nonatomic,readonly) NSString * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaType;                              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                             //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                            //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * modificationDate;                                 //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris;                                     //@synthesize canPlayPhotoIris=_canPlayPhotoIris - In the implementation block
@property (nonatomic,readonly) BOOL isPhotoIrisPlaceholder;                               //@synthesize isPhotoIrisPlaceholder=_isPhotoIrisPlaceholder - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 photoIrisStillDisplayTime;                  //@synthesize photoIrisStillDisplayTime=_photoIrisStillDisplayTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 photoIrisVideoDuration;                     //@synthesize photoIrisVideoDuration=_photoIrisVideoDuration - In the implementation block
@property (nonatomic,copy,readonly) NSURL * persistenceURL;                               //@synthesize persistenceURL=_persistenceURL - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage;                                //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (getter=isHDR,nonatomic,readonly) BOOL HDR;                                     //@synthesize HDR=_HDR - In the implementation block
@property (nonatomic,readonly) BOOL representsBurst;                                      //@synthesize representsBurst=_representsBurst - In the implementation block
@property (nonatomic,copy,readonly) NSString * burstIdentifier;                           //@synthesize burstIdentifier=_burstIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfRepresentedAssets;              //@synthesize numberOfRepresentedAssets=_numberOfRepresentedAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isTemporaryPlaceholder; 
@property (nonatomic,readonly) unsigned long long fullsizeDataFormat; 
-(unsigned long long)mediaType;
-(BOOL)canPlayPhotoIris;
-(BOOL)isPhotoIrisPlaceholder;
-(BOOL)representsBurst;
-(BOOL)isHDR;
-(NSString *)burstIdentifier;
-(unsigned long long)numberOfRepresentedAssets;
-(BOOL)isFavorite;
-(BOOL)isTemporaryPlaceholder;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
-(SCD_Struct_CA2)photoIrisStillDisplayTime;
-(double)aspectRatio;
-(NSURL *)persistenceURL;
-(unsigned long long)isContentEqualTo:(id)arg1 ;
-(NSDate *)creationDate;
-(NSString *)localizedGeoDescription;
-(unsigned long long)fullsizeDataFormat;
-(SCD_Struct_CA2)photoIrisVideoDuration;
-(id)init;
-(NSString *)description;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)uuid;
-(UIImage *)placeholderImage;
-(id)initWithAsset:(id)arg1 uuid:(id)arg2 ;
-(void)_populateStillImageTransientAssetFromConvertible:(id)arg1 ;
-(void)_populateVideoTransientAssetFromConvertible:(id)arg1 ;
-(id)initWithAsset:(id)arg1 convertible:(id)arg2 ;
@end

