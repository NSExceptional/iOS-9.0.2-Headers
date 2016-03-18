/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPDFSelectionWidgetNSObject;
#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPageView;

@interface UIPDFSelectionController : NSObject {

	UIPDFPageView* _pageView;
	BOOL _rangeMode;
	id<UIPDFSelectionWidget><NSObject> _selectionWidget;
	BOOL _resizingWidget;
	CGPoint _selectionFixedPoint;
	CGRect _selectionBounds;
	BOOL _preceeds;
	BOOL _isTracking;
	CGPoint _adjustedPoint;
	BOOL _hiding;
	long long _firstIndex;
	long long _lastIndex;
	CGPoint _startPoint;
	BOOL _needsLayout;
	BOOL _cancelled;
	BOOL _instantModeIsSuspended;
	BOOL _instantHighlightMode;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                                //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) BOOL rangeMode;                                        //@synthesize rangeMode=_rangeMode - In the implementation block
@property (nonatomic,readonly) id<UIPDFSelectionWidget> selectionWidget;              //@synthesize selectionWidget=_selectionWidget - In the implementation block
@property (nonatomic,readonly) BOOL isTracking;                                       //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) CGPoint adjustedPoint;                                 //@synthesize adjustedPoint=_adjustedPoint - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPoint; 
@property (nonatomic,readonly) CGPoint currentSelectionPoint; 
@property (assign,nonatomic) BOOL instantHighlightMode;                               //@synthesize instantHighlightMode=_instantHighlightMode - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isTracking;
-(void)clearSelection;
-(UIPDFPageView *)pageView;
-(void)layoutSelections;
-(void)hideWidget;
-(void)addSelectionWidget:(id)arg1 ;
-(void)setInstantHighlightMode:(BOOL)arg1 ;
-(void)suspendInstantHighlightMode;
-(void)setPageView:(UIPDFPageView *)arg1 ;
-(void)selectionHideFromAncestor:(id)arg1 ;
-(void)selectionShowToAncestor:(id)arg1 ;
-(void)selectionHide:(id)arg1 ;
-(void)selectionShowDelayed:(id)arg1 ;
-(void)selectionShow:(id)arg1 ;
-(void)setSelectionFor:(CGPoint)arg1 ;
-(BOOL)useParagraphMode;
-(void)startSelectingAt:(CGPoint)arg1 ;
-(void)adjustSelection:(CGPoint)arg1 ;
-(void)extendSelectionToParagraph;
-(BOOL)shouldTrackAt:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 showMagnifier:(BOOL*)arg2 ;
-(void)tracking:(CGPoint)arg1 showMagnifier:(BOOL*)arg2 ;
-(void)endTracking:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(void)tracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(CGPoint)selectedPointOffset;
-(CGPoint)initialSelectionPoint;
-(CGPoint)currentSelectionPoint;
-(BOOL)rangeMode;
-(id<UIPDFSelectionWidget>)selectionWidget;
-(CGPoint)adjustedPoint;
-(BOOL)instantHighlightMode;
@end

