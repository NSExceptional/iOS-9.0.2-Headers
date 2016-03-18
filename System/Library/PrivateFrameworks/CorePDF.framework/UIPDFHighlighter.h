/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {

	NSMutableArray* _highLightLayers;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _whiteColor;
	CGPDFPageRef _page;
	double _enlargeFactor;
	double _pdfToViewScale;
	double inset;

}

@property (assign,nonatomic) double inset; 
-(void)unhide;
-(void)setNeedsDisplay;
-(void)setInset:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)clear;
-(void)addAnimation:(id)arg1 ;
-(void)addRectPath:(CGPathRef)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(SCD_Struct_UI5)arg4 upright:(BOOL)arg5 ;
-(double)inset;
-(void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(BOOL)arg4 ;
-(void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(BOOL)arg4 ;
-(void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(BOOL)arg4 ;
-(void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
@end

