/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class AKAnnotation, AKPageController;

@interface AKAnnotationLayer : CALayer {

	BOOL _isObservingAnnotation;
	BOOL _wasLastDrawingClipped;
	AKAnnotation* _annotation;
	AKPageController* _pageController;

}

@property (retain) AKAnnotation * annotation;                      //@synthesize annotation=_annotation - In the implementation block
@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) BOOL isObservingAnnotation;                     //@synthesize isObservingAnnotation=_isObservingAnnotation - In the implementation block
@property (assign) BOOL wasLastDrawingClipped;                     //@synthesize wasLastDrawingClipped=_wasLastDrawingClipped - In the implementation block
+(id)newAnnotationLayerForAnnotation:(id)arg1 withPageController:(id)arg2 ;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(AKAnnotation *)annotation;
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)updateContents;
-(id)_initWithAnnotation:(id)arg1 andPageController:(id)arg2 ;
-(void)_startObservingAnnotation;
-(void)_updateAnnotationLayer;
-(void)_stopObservingAnnotation;
-(BOOL)wasLastDrawingClipped;
-(void)setWasLastDrawingClipped:(BOOL)arg1 ;
-(BOOL)isObservingAnnotation;
-(void)setIsObservingAnnotation:(BOOL)arg1 ;
-(void)updatePixelAlignment;
@end

