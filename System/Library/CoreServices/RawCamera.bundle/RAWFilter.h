/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <CoreImage/CIFilter.h>

@interface RAWFilter : CIFilter
+(id)filterWithDefaultsForClass:(Class)arg1 ;
+(CGColorSpaceRef)genericHDRColorSpace;
+(CGColorSpaceRef)linearBoostRGBColorSpace;
+(CGColorSpaceRef)linearAdobeRGBColorSpace;
+(CGColorSpaceRef)linearGrayColorSpace;
+(CGColorSpaceRef)linearP3ColorSpace;
+(CGColorSpaceRef)linearProPhotoColorSpace;
+(CGColorSpaceRef)linearSRGBColorSpace;
+(id)filterWithDefaultsForName:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(void)initialize;
-(id)outputInputImageWithFixmeWarning;
-(id)apply:(id)arg1 image:(id)arg2 extent:(CGRect)arg3 roi:(SEL)arg4 userInfo:(id)arg5 arguments:(id)arg6 inoutSpace:(CGColorSpaceRef)arg7 ;
-(void)takeAttributesFromDictionary:(id)arg1 forKeys:(id)arg2 ;
-(void)setPrimitiveNumberValue:(id)arg1 inVariable:(id*)arg2 forKey:(id)arg3 ;
-(CGRect)block_roi:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)applyMatrixToImage:(id)arg1 vectorR:(id)arg2 vectorG:(id)arg3 vectorB:(id)arg4 vectorBias:(id)arg5 inSpace:(CGColorSpaceRef)arg6 outSpace:(CGColorSpaceRef)arg7 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

