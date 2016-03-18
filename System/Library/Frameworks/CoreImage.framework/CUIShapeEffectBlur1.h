/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIShapeEffectBlur1 : CIFilter {

	CIImage* inputImage;
	CIImage* inputFill;
	CIVector* inputOffset;
	NSNumber* inputRadius;
	CIColor* inputGlowColorInner;
	CIColor* inputGlowColorOuter;
	CIColor* inputShadowColorInner;
	CIColor* inputShadowColorOuter;
	NSNumber* inputShadowBlurInner;
	NSNumber* inputShadowBlurOuter;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputFill; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputGlowColorInner; 
@property (nonatomic,retain) CIColor * inputGlowColorOuter; 
@property (nonatomic,retain) CIColor * inputShadowColorInner; 
@property (nonatomic,retain) CIColor * inputShadowColorOuter; 
@property (nonatomic,retain) NSNumber * inputShadowBlurInner; 
@property (nonatomic,retain) NSNumber * inputShadowBlurOuter; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputOffset:(CIVector *)arg1 ;
-(CIVector *)inputOffset;
-(void)setInputShadowColorOuter:(CIColor *)arg1 ;
-(void)setInputShadowColorInner:(CIColor *)arg1 ;
-(void)setInputGlowColorOuter:(CIColor *)arg1 ;
-(void)setInputGlowColorInner:(CIColor *)arg1 ;
-(void)setInputShadowBlurOuter:(NSNumber *)arg1 ;
-(void)setInputShadowBlurInner:(NSNumber *)arg1 ;
-(CIImage *)inputFill;
-(void)setInputFill:(CIImage *)arg1 ;
-(CIColor *)inputGlowColorInner;
-(CIColor *)inputGlowColorOuter;
-(CIColor *)inputShadowColorInner;
-(CIColor *)inputShadowColorOuter;
-(NSNumber *)inputShadowBlurInner;
-(NSNumber *)inputShadowBlurOuter;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

