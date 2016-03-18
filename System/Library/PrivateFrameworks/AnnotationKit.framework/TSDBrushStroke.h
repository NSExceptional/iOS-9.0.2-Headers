/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class NSString, UIColor;

@interface TSDBrushStroke : NSObject {

	int _join;
	NSString* _strokeName;
	UIColor* _color;
	double _width;
	double _miterLimit;

}

@property (nonatomic,copy,readonly) NSString * strokeName;              //@synthesize strokeName=_strokeName - In the implementation block
@property (nonatomic,retain,readonly) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double width;                            //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int join;                                //@synthesize join=_join - In the implementation block
@property (nonatomic,readonly) double miterLimit;                       //@synthesize miterLimit=_miterLimit - In the implementation block
+(id)strokeWithType:(long long)arg1 color:(id)arg2 width:(double)arg3 ;
+(void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadSectionsForBrush:(id)arg1 inSVGDoc:(xmlDoc*)arg2 ;
+(void)loadBrush:(id)arg1 ;
+(id)strokeWithName:(id)arg1 color:(id)arg2 width:(double)arg3 ;
+(Class)mutableClass;
+(id)cacheDirectory;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)miterLimit;
-(double)width;
-(UIColor *)color;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)brushPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(BOOL)arg6 ;
-(id)strokeLineEnd:(id)arg1 ;
-(id)initWithName:(id)arg1 color:(id)arg2 width:(double)arg3 join:(int)arg4 miterLimit:(double)arg5 ;
-(NSString *)strokeName;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(id)brushPathsForId:(id)arg1 ;
-(id)brushBoundsForId:(id)arg1 ;
-(void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(CGPoint)arg4 inElementRange:(NSRange)arg5 into:(id)arg6 viewScale:(double)arg7 ;
-(void)brushPath:(id)arg1 withScaling:(CGPoint)arg2 inElementRange:(NSRange)arg3 into:(id)arg4 sectionIndex:(unsigned long long*)arg5 viewScale:(double)arg6 ;
-(int)join;
@end

