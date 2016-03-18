/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface CIConvolution : CIFilter {

	CIImage* inputImage;
	NSArray* inputPoints;
	NSArray* inputWeights;
	NSNumber* inputLinearFilterModeEnabled;

}
-(id)_CIConvolutionInit_1;
-(id)_CIConvolutionAdd_1;
-(id)_CIConvolutionInit_2;
-(id)_CIConvolutionAdd_2;
-(id)_CIConvolutionInit_3;
-(id)_CIConvolutionAdd_3;
-(id)_CIConvolutionInit_4;
-(id)_CIConvolutionAdd_4;
-(id)_CIConvolutionInit_5;
-(id)_CIConvolutionAdd_5;
-(id)_CIConvolutionInit_6;
-(id)_CIConvolutionAdd_6;
-(id)_CIConvolutionInit_7;
-(id)_CIConvolutionAdd_7;
-(id)_CIConvolutionInit_8;
-(id)_CIConvolutionAdd_8;
-(id)_CIConvolutionInit_9;
-(id)_CIConvolutionAdd_9;
-(int)samplesPerPass;
-(id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3 ;
-(id)outputImage;
@end

