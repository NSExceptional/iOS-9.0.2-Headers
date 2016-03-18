/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageManagerRequest.h>

@class PHImageRequestOptions;

@interface PHImageRequest : PHImageManagerRequest {

	int _bestFormat;
	int _degradedFormat;
	long long _contentMode;
	PHImageRequestOptions* _options;
	/*^block*/id _resultHandler;
	CGSize _targetSize;

}

@property (nonatomic,readonly) CGSize targetSize;                            //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                        //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (assign) int bestFormat;                                           //@synthesize bestFormat=_bestFormat - In the implementation block
@property (assign) int degradedFormat;                                       //@synthesize degradedFormat=_degradedFormat - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
+(id)descriptionWithContentMode:(long long)arg1 ;
+(id)imageRequestWithAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)cloneIDAndResultHandlerFromRequest:(id)arg1 ;
-(void)clearResultHandler;
-(id)initImageRequestWithAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 domain:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(int)degradedFormat;
-(void)setDegradedFormat:(int)arg1 ;
-(id)description;
-(long long)contentMode;
-(CGSize)targetSize;
-(PHImageRequestOptions *)options;
-(id)resultHandler;
-(int)bestFormat;
-(void)setBestFormat:(int)arg1 ;
@end

