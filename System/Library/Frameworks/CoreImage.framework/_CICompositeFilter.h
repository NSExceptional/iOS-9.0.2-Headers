/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface _CICompositeFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
+(id)customAttributes;
+(id)_kernel;
+(id)_kernel_source;
-(CGRect)_extentForInputExtent:(CGRect)arg1 backgroundExtent:(CGRect)arg2 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

