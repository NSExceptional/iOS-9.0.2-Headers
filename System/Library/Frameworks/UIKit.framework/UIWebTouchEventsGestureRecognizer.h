/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol UIWebTouchEventsGestureRecognizerDelegate;
@class NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {

	id _touchTarget;
	SEL _touchAction;
	id<UIWebTouchEventsGestureRecognizerDelegate> _webTouchDelegate;
	BOOL _passedHitTest;
	BOOL _defaultPrevented;
	BOOL _dispatchingTouchEvents;
	BOOL _isPotentialTap;
	double _originalGestureDistance;
	double _originalGestureAngle;
	UIWebTouchEvent* _lastTouchEvent;

}

@property (assign,getter=isDefaultPrevented,nonatomic) BOOL defaultPrevented;                            //@synthesize defaultPrevented=_defaultPrevented - In the implementation block
@property (nonatomic,readonly) const UIWebTouchEvent* lastTouchEvent; 
@property (getter=isDispatchingTouchEvents,nonatomic,readonly) BOOL dispatchingTouchEvents;              //@synthesize dispatchingTouchEvents=_dispatchingTouchEvents - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,readonly) NSMutableArray * touchLocations; 
@property (nonatomic,readonly) NSMutableArray * touchIdentifiers; 
@property (nonatomic,readonly) NSMutableArray * touchPhases; 
@property (nonatomic,readonly) BOOL inJavaScriptGesture; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) double rotation; 
+(void)initialize;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)type;
-(void)reset;
-(double)scale;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(CGPoint)locationInWindow;
-(double)rotation;
-(void)_updateTapStateWithTouches:(id)arg1 ;
-(void)_updateTapStateWithTouches:(id)arg1 type:(int)arg2 ;
-(void)_recordTouches:(id)arg1 type:(int)arg2 ;
-(void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3 ;
-(const UIWebTouchEvent*)lastTouchEvent;
-(NSMutableArray *)touchLocations;
-(NSMutableArray *)touchIdentifiers;
-(NSMutableArray *)touchPhases;
-(BOOL)inJavaScriptGesture;
-(BOOL)isDefaultPrevented;
-(void)setDefaultPrevented:(BOOL)arg1 ;
-(BOOL)isDispatchingTouchEvents;
@end

