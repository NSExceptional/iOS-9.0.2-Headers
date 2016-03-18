/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/ICDrawingInputFilter.h>

@protocol OS_dispatch_queue, ICDrawingInputControllerDelegate, OS_dispatch_semaphore;
@class NSObject, ICDrawingCommand, NSMutableDictionary, NSMutableSet, ICDrawingInputSmoother, NSString;

@interface ICDrawingInputController : NSObject <ICDrawingInputFilter> {

	vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >* _drawPoints;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _drawOutputPoints;
	NSObject*<OS_dispatch_queue> _inputQueue;
	NSObject*<OS_dispatch_queue> _outputQueue;
	id<ICDrawingInputControllerDelegate> _delegate;
	ICDrawingCommand* _currentCommand;
	long long _currentInputType;
	BOOL _hasSetAngle;
	BOOL _ended;
	double _lastStrokeRadius;
	double _inputScale;
	float _smoothingKernel[7];
	double _minimumPointDistanceSq;
	long long _immutableCount;
	NSMutableDictionary* _indexToEstimatedTouchMap;
	NSMutableSet* _estimatedTouchesForUpdating;
	BOOL _drawingEndedButNotFinished;
	NSObject*<OS_dispatch_semaphore> _drawingWaitForFinishSemaphore;
	BOOL _isSnappedToRuler;
	BOOL _useRuler;
	BOOL _isSnappedToRulerTopSide;
	BOOL _canSnapToRuler;
	BOOL _needToCheckForStartHook;
	double _rulerWidth;
	ICDrawingInputSmoother* _inputSmoother;
	CGAffineTransform _rulerTransform;

}

@property (assign) BOOL isSnappedToRuler;                                         //@synthesize isSnappedToRuler=_isSnappedToRuler - In the implementation block
@property (readonly) NSObject*<ICDrawingInputFilter> outputFilter; 
@property (assign,nonatomic) CGAffineTransform rulerTransform;                    //@synthesize rulerTransform=_rulerTransform - In the implementation block
@property (assign,nonatomic) BOOL useRuler;                                       //@synthesize useRuler=_useRuler - In the implementation block
@property (assign,nonatomic) double rulerWidth;                                   //@synthesize rulerWidth=_rulerWidth - In the implementation block
@property (assign,nonatomic) BOOL isSnappedToRulerTopSide;                        //@synthesize isSnappedToRulerTopSide=_isSnappedToRulerTopSide - In the implementation block
@property (assign,nonatomic) BOOL canSnapToRuler;                                 //@synthesize canSnapToRuler=_canSnapToRuler - In the implementation block
@property (assign,nonatomic) BOOL needToCheckForStartHook;                        //@synthesize needToCheckForStartHook=_needToCheckForStartHook - In the implementation block
@property (nonatomic,retain) ICDrawingInputSmoother * inputSmoother;              //@synthesize inputSmoother=_inputSmoother - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setupDefaults;
-(void)setInputScale:(double)arg1 ;
-(id)init;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(void)setUseRuler:(BOOL)arg1 ;
-(void)setCanSnapToRuler:(BOOL)arg1 ;
-(void)setIsSnappedToRuler:(BOOL)arg1 ;
-(void)setNeedToCheckForStartHook:(BOOL)arg1 ;
-(SCD_Struct_IC11)baseValuesforCommandType:(unsigned)arg1 ;
-(SCD_Struct_IC12)parametersforCommandType:(unsigned)arg1 ;
-(double)baseRadiusForCommandType:(unsigned)arg1 ;
-(void)setRulerTransform:(CGAffineTransform)arg1 ;
-(void)setRulerWidth:(double)arg1 ;
-(CGAffineTransform)rulerTransform;
-(double)rulerWidth;
-(BOOL)isSnappedToRuler;
-(double)rulerOffset;
-(BOOL)isSnappedToRulerTopSide;
-(BOOL)useRuler;
-(double)distanceToRulerCenter:(CGPoint)arg1 ;
-(void)setIsSnappedToRulerTopSide:(BOOL)arg1 ;
-(CGPoint)snapPointToRuler:(CGPoint)arg1 ;
-(CGPoint)getRulerSnapLineOriginAndTangent:(CGPoint*)arg1 andNormal:(CGPoint*)arg2 ;
-(BOOL)canSnapToRuler;
-(BOOL)shouldSnapPointToRuler:(CGPoint)arg1 ;
-(void)snapToRuler;
-(void)maskToRuler;
-(unsigned long long)copyUpdatedRangeFromIndex:(unsigned long long)arg1 into:(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)arg2 onQueue:(id)arg3 ;
-(ICDrawingInputSmoother *)inputSmoother;
-(void)updateOutputPointsFromIndex:(long long)arg1 ;
-(SCD_Struct_IC11)penOutputPoint:(SCD_Struct_IC13)arg1 baseValues:(SCD_Struct_IC11)arg2 ;
-(SCD_Struct_IC11)pencilOutputPoint:(SCD_Struct_IC13)arg1 baseValues:(SCD_Struct_IC11)arg2 ;
-(SCD_Struct_IC11)markerOutputPoint:(SCD_Struct_IC13)arg1 baseValues:(SCD_Struct_IC11)arg2 ;
-(void)handleMarkerStartCapPoint:(SCD_Struct_IC11*)arg1 forInput:(SCD_Struct_IC13*)arg2 ;
-(SCD_Struct_IC11)eraserOutputPoint:(SCD_Struct_IC13)arg1 baseValues:(SCD_Struct_IC11)arg2 ;
-(SCD_Struct_IC11)outputPoint:(SCD_Struct_IC13)arg1 forCommandType:(unsigned)arg2 baseValues:(SCD_Struct_IC11)arg3 ;
-(BOOL)needToCheckForStartHook;
-(void)removePredictedTouches;
-(void)_drawingAddPoint:(SCD_Struct_IC13)arg1 ;
-(SCD_Struct_IC13)calculateVelocityForNewPoint:(SCD_Struct_IC13)arg1 previousPoint:(SCD_Struct_IC13)arg2 ;
-(SCD_Struct_IC13)calculateVelocityForFirstPoint:(SCD_Struct_IC13)arg1 ;
-(void)fixStartHook;
-(void)calculateStrokeAzimuth;
-(void)updateRulerSnapping;
-(void)updateImmutableCount;
-(void)fixEndHook;
-(void)handleEndCaps;
-(NSObject*<ICDrawingInputFilter>)outputFilter;
-(vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >*)getUpdatedRangeFromIndex:(inout unsigned long long*)arg1 ;
-(void)drawingBeganWithCommand:(id)arg1 inputType:(long long)arg2 start:(/*^block*/id)arg3 ;
-(void)snapToRuler:(CGAffineTransform)arg1 width:(double)arg2 ;
-(void)smoothVelocity;
-(void)drawingAddPoints:(vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint> >*)arg1 forTouches:(id)arg2 ;
-(void)drawingAddPoint:(SCD_Struct_IC13)arg1 ;
-(void)drawingEndedWithPreCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)drawingCancelledWithCompletion:(/*^block*/id)arg1 ;
-(void)setInputSmoother:(ICDrawingInputSmoother *)arg1 ;
@end

