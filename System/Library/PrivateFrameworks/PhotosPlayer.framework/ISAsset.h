/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVURLAsset;

@interface ISAsset : NSObject {

	int _photoEXIFOrientation;
	AVURLAsset* _videoAsset;
	CGImageRef _photo;
	double _photoTime;

}

@property (nonatomic,copy,readonly) AVURLAsset * videoAsset;              //@synthesize videoAsset=_videoAsset - In the implementation block
@property (nonatomic,readonly) CGImageRef photo;                          //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) double photoTime;                          //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                  //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
+(id)assetForURL:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)photo;
-(AVURLAsset *)videoAsset;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 ;
-(double)photoTime;
-(void)dealloc;
-(id)init;
-(id)description;
-(int)photoEXIFOrientation;
-(void)resetAVObjects;
-(id)initWithVideoAsset:(id)arg1 photo:(CGImageRef)arg2 photoTime:(double)arg3 ;
@end
