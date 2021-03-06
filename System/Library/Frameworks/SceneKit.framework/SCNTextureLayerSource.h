/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureOffscreenRenderingSource.h>

@class CALayer;

@interface SCNTextureLayerSource : SCNTextureOffscreenRenderingSource {

	CALayer* _layer;
	double _lastUpdate;
	double _nextUpdateDate;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(CGSize)layerSizeInPixels;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 nextFrameTime:(double*)arg2 ;
-(double)__renderLayer:(id)arg1 withCARenderer:(id)arg2 engineContext:(C3DEngineContextRef)arg3 viewport:(double)arg4 atTime:(BOOL)arg5 forceUpdate:(BOOL*)arg6 ;
-(double)__updateTextureWithLayer:(id)arg1 engineContext:(C3DEngineContextRef)arg2 sampler:(_C3DTextureSampler*)arg3 ;
-(CALayer *)layer;
-(void)dealloc;
-(void)setLayer:(CALayer *)arg1 ;
@end

