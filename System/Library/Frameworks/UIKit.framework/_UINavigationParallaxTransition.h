/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIBasicAnimationFactory.h>
#import <UIKit/UIViewControllerAnimatedTransitioningEx.h>

@protocol UIViewControllerContextTransitioning;
@class _UINavigationInteractiveTransitionBase, _UIParallaxDimmingView, UIView, NSString;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {

	BOOL _interactionAborted;
	BOOL _clipUnderlapWhileTransitioning;
	long long _operation;
	id<UIViewControllerContextTransitioning> _transitionContext;
	_UINavigationInteractiveTransitionBase* _interactionController;
	_UIParallaxDimmingView* _borderDimmingView;
	_UIParallaxDimmingView* _contentDimmingView;
	UIView* _containerFromView;
	UIView* _containerToView;
	UIView* _clipUnderView;
	long long _transitionStyle;
	double _transitionGap;

}

@property (assign,nonatomic) long long operation;                                                         //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;                  //@synthesize transitionContext=_transitionContext - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                     //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) _UINavigationInteractiveTransitionBase * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * borderDimmingView;                                  //@synthesize borderDimmingView=_borderDimmingView - In the implementation block
@property (nonatomic,retain) _UIParallaxDimmingView * contentDimmingView;                                 //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,retain) UIView * containerFromView;                                                  //@synthesize containerFromView=_containerFromView - In the implementation block
@property (nonatomic,retain) UIView * containerToView;                                                    //@synthesize containerToView=_containerToView - In the implementation block
@property (nonatomic,retain) UIView * clipUnderView;                                                      //@synthesize clipUnderView=_clipUnderView - In the implementation block
@property (assign,nonatomic) BOOL clipUnderlapWhileTransitioning;                                         //@synthesize clipUnderlapWhileTransitioning=_clipUnderlapWhileTransitioning - In the implementation block
@property (assign,nonatomic) long long transitionStyle;                                                   //@synthesize transitionStyle=_transitionStyle - In the implementation block
@property (assign,nonatomic) double transitionGap;                                                        //@synthesize transitionGap=_transitionGap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_UINavigationInteractiveTransitionBase *)interactionController;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(double)gapBetweenViews;
-(double)parallaxOffset;
-(_UIParallaxDimmingView *)contentDimmingView;
-(double)transitionDuration:(id)arg1 ;
-(_UIParallaxDimmingView *)borderDimmingView;
-(void)setClipUnderView:(UIView *)arg1 ;
-(void)setBorderDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(void)setContentDimmingView:(_UIParallaxDimmingView *)arg1 ;
-(id)shadowContainerForKeyboardTransition:(id)arg1 ;
-(void)resizeShadow:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(void)setInteractionController:(_UINavigationInteractiveTransitionBase *)arg1 ;
-(BOOL)interactionAborted;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)initWithCurrentOperation:(long long)arg1 ;
-(id)resizedToContainerView;
-(id)resizedFromContainerView;
-(void)prepareToAnimateKeyboard:(id)arg1 ;
-(void)animateKeyboard:(id)arg1 ;
-(void)completeKeyboard:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(UIView *)containerFromView;
-(void)setContainerFromView:(UIView *)arg1 ;
-(UIView *)containerToView;
-(void)setContainerToView:(UIView *)arg1 ;
-(UIView *)clipUnderView;
-(BOOL)clipUnderlapWhileTransitioning;
-(void)setClipUnderlapWhileTransitioning:(BOOL)arg1 ;
-(long long)transitionStyle;
-(void)setTransitionStyle:(long long)arg1 ;
-(double)transitionGap;
-(void)setTransitionGap:(double)arg1 ;
@end

