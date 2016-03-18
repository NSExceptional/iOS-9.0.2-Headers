/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKGLView.h>

@class CIFilter;

@interface CMKEffectsFullsizeView : CMKGLView {

	CIFilter* _selectedFilter;
	unsigned long long _selectedFilterIndex;
	unsigned long long _filterIndex;

}

@property (assign) unsigned long long filterIndex;              //@synthesize filterIndex=_filterIndex - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFixedSize:(CGSize)arg1 ;
-(unsigned long long)filterIndex;
-(void)setFilterIndex:(unsigned long long)arg1 ;
-(void)renderPixelBuffer:(CVBufferRef)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(void)_layoutGLLayer;
-(void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3 ;
-(id)_updateSelectedFilter;
@end

