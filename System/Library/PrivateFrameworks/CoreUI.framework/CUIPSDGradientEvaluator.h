/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

	NSArray* colorStops;
	NSArray* colorMidpointLocations;
	NSArray* opacityStops;
	NSArray* opacityMidpointLocations;
	double smoothingCoefficient;
	psdGradientColor fillColor;
	int blendMode;
	double singlePixelDistance;
	struct {
		unsigned colorEdgePixel : 2;
		unsigned opacityEdgePixel : 2;
		unsigned isDithered : 1;
		unsigned reserved : 3;
	}  pgeFlags;

}

@property (assign,nonatomic) int blendMode; 
+(void)initialize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(psdGradientColor)fillColor;
-(id)colorStops;
-(id)colorMidpointLocations;
-(id)opacityStops;
-(id)opacityMidpointLocations;
-(double)smoothingCoefficient;
-(BOOL)isDithered;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(psdGradientColor)arg6 dither:(BOOL)arg7 ;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg1 ;
-(void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long*)arg5 ;
-(double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6 ;
-(psdGradientColor)_smoothedGradientColorAtLocation:(double)arg1 ;
-(double)fillCoefficient;
-(BOOL)hasEdgePixel;
-(BOOL)hasDoubleColorStops;
-(BOOL)hasDoubleOpacityStops;
-(void)setColorStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setOpacityStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setSmoothingCoefficient:(double)arg1 ;
-(void)setFillCoefficient:(double)arg1 ;
-(void)customizeForDistance:(double)arg1 ;
-(void)setBlendMode:(int)arg1 ;
-(int)blendMode;
@end

