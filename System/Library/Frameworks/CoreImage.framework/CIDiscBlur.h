/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDiscBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;

}
+(id)customAttributes;
-(id)_CICombine_results;
-(id)outputImageOriginal;
-(id)outputImageEnhanced;
-(id)outputImage;
@end

