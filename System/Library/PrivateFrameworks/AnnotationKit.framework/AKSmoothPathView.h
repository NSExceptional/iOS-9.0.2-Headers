/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:04 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIView.h>

@protocol AKSmoothPathViewDelegate;
@class AKController, UIColor, NSMutableArray, AKRichBrushStroke, CHPointStrokeFIFO, CHBoxcarFilterPointFIFO, CHQuadCurvePointFIFO;

@interface AKSmoothPathView : UIView {

	double _cachedEffectiveStrokeWidthInModel;
	double _cachedModelToViewScale;
	CGPathRef _mutablePath;
	BOOL _prestrokedOutputMode;
	BOOL _hasShadow;
	BOOL _applyModelBaseScaleFactorToStroke;
	BOOL _disableSingleDotSpecialCase;
	BOOL _isAddingPointWithoutSmoothing;
	AKController* _controller;
	id<AKSmoothPathViewDelegate> _delegate;
	UIColor* _strokeColor;
	double _strokeWidth;
	double _currentWeight;
	double _singleDotCurrentSize;
	NSMutableArray* _strokes;
	AKRichBrushStroke* _currentBrushStroke;
	CHPointStrokeFIFO* _strokeFIFO;
	CHBoxcarFilterPointFIFO* _smoothingFIFO;
	CHQuadCurvePointFIFO* _interpolatingFIFO;
	double _minPressure;
	double _maxPressure;
	double _minThickness;
	double _maxThickness;
	double _shadowRadiusInModel;
	double _shadowRadiusInView;
	CGPoint _singleDotLocation;
	 _lastPoint;
	CGRect _aggregateInvalidRect;

}

@property (__weak) AKController * controller;                                       //@synthesize controller=_controller - In the implementation block
@property (assign) id<AKSmoothPathViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL prestrokedOutputMode;                             //@synthesize prestrokedOutputMode=_prestrokedOutputMode - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                                    //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign,nonatomic) BOOL hasShadow;                                        //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign) BOOL applyModelBaseScaleFactorToStroke;                          //@synthesize applyModelBaseScaleFactorToStroke=_applyModelBaseScaleFactorToStroke - In the implementation block
@property (assign) double currentWeight;                                            //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign) BOOL disableSingleDotSpecialCase;                                //@synthesize disableSingleDotSpecialCase=_disableSingleDotSpecialCase - In the implementation block
@property (assign) BOOL isAddingPointWithoutSmoothing;                              //@synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing - In the implementation block
@property (assign) double singleDotCurrentSize;                                     //@synthesize singleDotCurrentSize=_singleDotCurrentSize - In the implementation block
@property (assign) CGPoint singleDotLocation;                                       //@synthesize singleDotLocation=_singleDotLocation - In the implementation block
@property (assign)  lastPoint;                                                      //@synthesize lastPoint=_lastPoint - In the implementation block
@property (nonatomic,retain) NSMutableArray * strokes;                              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,retain) AKRichBrushStroke * currentBrushStroke;                //@synthesize currentBrushStroke=_currentBrushStroke - In the implementation block
@property (nonatomic,retain) CHPointStrokeFIFO * strokeFIFO;                        //@synthesize strokeFIFO=_strokeFIFO - In the implementation block
@property (nonatomic,retain) CHBoxcarFilterPointFIFO * smoothingFIFO;               //@synthesize smoothingFIFO=_smoothingFIFO - In the implementation block
@property (nonatomic,retain) CHQuadCurvePointFIFO * interpolatingFIFO;              //@synthesize interpolatingFIFO=_interpolatingFIFO - In the implementation block
@property (assign,nonatomic) double minPressure;                                    //@synthesize minPressure=_minPressure - In the implementation block
@property (assign,nonatomic) double maxPressure;                                    //@synthesize maxPressure=_maxPressure - In the implementation block
@property (assign,nonatomic) double minThickness;                                   //@synthesize minThickness=_minThickness - In the implementation block
@property (assign,nonatomic) double maxThickness;                                   //@synthesize maxThickness=_maxThickness - In the implementation block
@property (assign,nonatomic) CGRect aggregateInvalidRect;                           //@synthesize aggregateInvalidRect=_aggregateInvalidRect - In the implementation block
@property (assign) double shadowRadiusInModel;                                      //@synthesize shadowRadiusInModel=_shadowRadiusInModel - In the implementation block
@property (assign) double shadowRadiusInView;                                       //@synthesize shadowRadiusInView=_shadowRadiusInView - In the implementation block
-(id)initWithController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<AKSmoothPathViewDelegate>)arg1 ;
-(id<AKSmoothPathViewDelegate>)delegate;
-(void)awakeFromNib;
-(BOOL)isOpaque;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1 ;
-(void)commonInit;
-(CGRect)aggregateInvalidRect;
-(void)setInterpolatingFIFO:(CHQuadCurvePointFIFO *)arg1 ;
-(CHQuadCurvePointFIFO *)interpolatingFIFO;
-(void)setSmoothingFIFO:(CHBoxcarFilterPointFIFO *)arg1 ;
-(CHBoxcarFilterPointFIFO *)smoothingFIFO;
-(void)setStrokeFIFO:(CHPointStrokeFIFO *)arg1 ;
-(CHPointStrokeFIFO *)strokeFIFO;
-(NSMutableArray *)strokes;
-(void)setStrokes:(NSMutableArray *)arg1 ;
-(void)setLastPoint:;
-()lastPoint;
-(void)setStrokeWidth:(double)arg1 ;
-(double)minPressure;
-(double)maxPressure;
-(double)minThickness;
-(double)maxThickness;
-(void)setMinPressure:(double)arg1 ;
-(void)setMaxPressure:(double)arg1 ;
-(void)setMinThickness:(double)arg1 ;
-(void)setMaxThickness:(double)arg1 ;
-(void)setCurrentWeight:(double)arg1 ;
-(double)_windowBackingScaleFactor;
-(void)setIsAddingPointWithoutSmoothing:(BOOL)arg1 ;
-(double)currentWeight;
-(void)continueStrokeWithoutSmoothing:;
-(double)weightForValue:(double)arg1 ;
-(void)startStroke:;
-(void)continueStroke:;
-(void)terminateStroke;
-(AKRichBrushStroke *)currentBrushStroke;
-(void)setCurrentBrushStroke:(AKRichBrushStroke *)arg1 ;
-(BOOL)isAddingPointWithoutSmoothing;
-(void)handleForwardedEvent:(id)arg1 ;
-(void)handleTapAction:(id)arg1 ;
-(void)handleDragAction:(id)arg1 ;
-(void)setPrestrokedOutputMode:(BOOL)arg1 ;
-(void)_setupFilterChain;
-(void)setDisableSingleDotSpecialCase:(BOOL)arg1 ;
-(void)_dispatchInvalidateWithNewPoints:(id)arg1 invalidViewRect:(CGRect)arg2 ;
-(void)_updateInterpolatingFifoUnitScale;
-(void)_updateInterpolatingFifoLineWidth;
-(void)_deferredInvalidate:(id)arg1 ;
-(BOOL)prestrokedOutputMode;
-(BOOL)disableSingleDotSpecialCase;
-(CGContextRef)_getPlatformCGContext;
-(double)shadowRadiusInView;
-(void)_setupShadowInContext:(CGContextRef)arg1 ;
-(double)shadowRadiusInModel;
-(void)_handleForwardedUIEvent:(id)arg1 ;
-(2)_pointForRecognizer:(id)arg1 ;
-(void)setApplyModelBaseScaleFactorToStroke:(BOOL)arg1 ;
-(void)setShadowRadiusInModel:(double)arg1 ;
-(void)_updateShadowRadiusInView;
-(void)setShadowRadiusInView:(double)arg1 ;
-(double)_convertValueFromModelToSelf:(double)arg1 ;
-(void)setSingleDotCurrentSize:(double)arg1 ;
-(void)setSingleDotLocation:(CGPoint)arg1 ;
-(double)_effectiveStrokeWidthInModel;
-(void)callDelegate;
-(void)_clear;
-(BOOL)applyModelBaseScaleFactorToStroke;
-(double)singleDotCurrentSize;
-(CGPoint)singleDotLocation;
-(void)setAggregateInvalidRect:(CGRect)arg1 ;
-(id)drawing;
-(double)strokeWidth;
-(void)teardown;
@end

