/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class UIImage;

@interface OITSUImage : NSObject {

	CGImageRef mCachedSliceableImage;
	CFDictionaryRef mImageSlices;
	long long mImageSliceCacheLock;
	id mCachedSystemImage;
	long long mCachedImageLock;

}

@property (nonatomic,readonly) UIImage * UIImage; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double scale; 
+(id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3 ;
+(id)imageWithUIImage:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 isFlipped:(BOOL)arg3 ;
-(UIImage *)UIImage;
-(id)initWithUIImage:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithImageSourceRef:(CGImageSourceRef)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
-(CGImageRef)CGImageForContentsScale:(double)arg1 ;
-(id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4 ;
-(id)TIFFRepresentation;
-(id)JPEGRepresentationWithCompressionQuality:(double)arg1 ;
-(id)PNGRepresentation;
-(id)stretchedImageOfSize:(CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 stretchingCenterWidthBy:(double)arg3 ;
@end
