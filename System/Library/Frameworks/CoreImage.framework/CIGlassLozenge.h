/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIGlassLozenge : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	NSNumber* inputRadius;
	NSNumber* inputRefraction;

}
+(id)customAttributes;
-(id)_CILozengeRefraction;
-(id)outputImage;
@end

