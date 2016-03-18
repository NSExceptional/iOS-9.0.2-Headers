/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIAppearanceContainer.h>
#import <UIKit/_UITraitEnvironmentInternal.h>
#import <UIKit/_UIContentContainerInternal.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAppearanceContainer.h>
#import <UIKit/UITraitEnvironment.h>
#import <UIKit/UIContentContainer.h>
#import <UIKit/UIFocusEnvironment.h>

@protocol UIAdaptivePresentationControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIViewControllerTransitionCoordinatorContext;
@class UITraitCollection, UIView, UITapGestureRecognizer, UIBarButtonItem, UIViewController, NSString;

@interface UIPresentationController : NSObject <_UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment> {

	BOOL _isDisconnectedRoot;
	BOOL _transitionAsDisconnectedRoot;
	BOOL _needsDidAppear;
	BOOL _needsDidDisappear;
	BOOL _monitorsSystemLayoutFittingSize;
	BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
	id _target;
	SEL _didEndSelector;
	UITraitCollection* _lastNotifiedTraitCollection;
	UIView* _snapshotOverlayView;
	UITapGestureRecognizer* _backGestureRecognizer;
	BOOL _containerIgnoresDirectTouchEvents;
	BOOL _isCurrentStateCancelled;
	BOOL _changedPresentingViewControllerDuringAdaptation;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;
	UIView* _containerView;
	id<UIAdaptivePresentationControllerDelegate> _delegate;
	UITraitCollection* _overrideTraitCollection;
	id<UIViewControllerAnimatedTransitioning> _currentTransitionController;
	id<UIViewControllerInteractiveTransitioning> _currentInteractionController;
	UIView* _presentationView;
	UIView* __currentPresentationSuperview;
	long long _state;
	id<UIViewControllerTransitionCoordinator> _adaptiveTransitionCoordinator;
	id<UIViewControllerTransitionCoordinatorContext> _adaptiveTransitionContext;
	/*^block*/id __transitionViewForCurrentTransition;
	/*^block*/id __fromViewForCurrentTransition;
	/*^block*/id __toViewForCurrentTransition;
	/*^block*/id __computeToEndFrameForCurrentTransition;
	/*^block*/id __currentTransitionDidComplete;
	CGSize _preferredContentSize;
	CGRect _sourceRect;

}

@property (nonatomic,retain) UIViewController * presentingViewController;                                                                                                                                           //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) UIViewController * presentedViewController;                                                                                                                                            //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,retain) UIView * containerView;                                                                                                                                                                //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) id<UIAdaptivePresentationControllerDelegate> delegate;                                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection;                                                                                                                                             //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (assign,setter=_setContainerIgnoresDirectTouchEvents:,getter=_containerIgnoresDirectTouchEvents,nonatomic) BOOL containerIgnoresDirectTouchEvents;                                                        //@synthesize containerIgnoresDirectTouchEvents=_containerIgnoresDirectTouchEvents - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                                                                                                                                   //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                                                                                                                                                     //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                                                                                                                                                       //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (assign,nonatomic) BOOL isCurrentStateCancelled;                                                                                                                                                          //@synthesize isCurrentStateCancelled=_isCurrentStateCancelled - In the implementation block
@property (setter=_setCurrentTransitionController:,getter=_currentTransitionController,nonatomic,retain) id<UIViewControllerAnimatedTransitioning> currentTransitionController;                                     //@synthesize currentTransitionController=_currentTransitionController - In the implementation block
@property (setter=_setCurrentInteractionController:,getter=_currentInteractionController,nonatomic,retain) id<UIViewControllerInteractiveTransitioning> currentInteractionController;                               //@synthesize currentInteractionController=_currentInteractionController - In the implementation block
@property (setter=_setPresentationView:,getter=_presentationView,nonatomic,retain) UIView * presentationView;                                                                                                       //@synthesize presentationView=_presentationView - In the implementation block
@property (setter=_setCurrentPresentationSuperview:,getter=_currentPresentationSuperview,nonatomic,retain) UIView * _currentPresentationSuperview;                                                                  //@synthesize _currentPresentationSuperview=__currentPresentationSuperview - In the implementation block
@property (assign,nonatomic) long long state;                                                                                                                                                                       //@synthesize state=_state - In the implementation block
@property (assign,setter=_setPreferredContentSize:,getter=_preferredContentSize,nonatomic) CGSize _preferredContentSize;                                                                                            //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (setter=_setAdaptiveTransitionCoordinator:,getter=_adaptiveTransitionCoordinator,nonatomic,retain) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator;                               //@synthesize adaptiveTransitionCoordinator=_adaptiveTransitionCoordinator - In the implementation block
@property (setter=_setAdaptiveTransitionContext:,getter=_adaptiveTransitionContext,nonatomic,retain) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext;                                    //@synthesize adaptiveTransitionContext=_adaptiveTransitionContext - In the implementation block
@property (assign,setter=_setChangedPresentingViewControllerDuringAdaptation:,getter=_changedPresentingViewControllerDuringAdaptation,nonatomic) BOOL changedPresentingViewControllerDuringAdaptation;              //@synthesize changedPresentingViewControllerDuringAdaptation=_changedPresentingViewControllerDuringAdaptation - In the implementation block
@property (nonatomic,copy) id _transitionViewForCurrentTransition;                                                                                                                                                  //@synthesize _transitionViewForCurrentTransition=__transitionViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _fromViewForCurrentTransition;                                                                                                                                                        //@synthesize _fromViewForCurrentTransition=__fromViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _toViewForCurrentTransition;                                                                                                                                                          //@synthesize _toViewForCurrentTransition=__toViewForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _computeToEndFrameForCurrentTransition;                                                                                                                                               //@synthesize _computeToEndFrameForCurrentTransition=__computeToEndFrameForCurrentTransition - In the implementation block
@property (nonatomic,copy) id _currentTransitionDidComplete;                                                                                                                                                        //@synthesize _currentTransitionDidComplete=__currentTransitionDidComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (nonatomic,readonly) CGSize preferredContentSize; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
+(BOOL)_preventsAppearanceProxyCustomization;
+(UIEdgeInsets)_defaultBaseContentInsetsForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(UITraitCollection *)traitCollection;
-(void)setDelegate:(id<UIAdaptivePresentationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UIAdaptivePresentationControllerDelegate>)delegate;
-(UIView *)containerView;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(UIViewController *)presentingViewController;
-(long long)presentationStyle;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(void)setNeedsFocusUpdate;
-(UIViewController *)presentedViewController;
-(void)_setContainerView:(id)arg1 ;
-(void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(UIView *)preferredFocusedView;
-(void)updateFocusIfNeeded;
-(id)_appearanceContainer;
-(SCD_Struct_UI23)__sizeClassPair;
-(id)_parentFocusEnvironment;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(Class)_appearanceGuideClass;
-(BOOL)_monitorsSystemLayoutFittingSize;
-(void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2 ;
-(void)_updateTraitsIfNecessary;
-(void)_containerViewWillLayoutSubviews;
-(void)containerViewDidLayoutSubviews;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_setPresentingViewController:(id)arg1 ;
-(void)_setPresentedViewController:(id)arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(id)_currentTransitionDidComplete;
-(BOOL)presenting;
-(void)_setPresentationView:(id)arg1 ;
-(BOOL)dismissing;
-(void)_setCurrentInteractionController:(id)arg1 ;
-(BOOL)_shouldDisablePresentersAppearanceCallbacks;
-(void)_setCurrentTransitionController:(id)arg1 ;
-(void)_cleanup;
-(void)_setCurrentPresentationSuperview:(id)arg1 ;
-(void)set_transitionViewForCurrentTransition:(id)arg1 ;
-(void)set_computeToEndFrameForCurrentTransition:(id)arg1 ;
-(void)set_currentTransitionDidComplete:(id)arg1 ;
-(void)set_fromViewForCurrentTransition:(id)arg1 ;
-(void)set_toViewForCurrentTransition:(id)arg1 ;
-(void)_setAdaptiveTransitionContext:(id)arg1 ;
-(void)_setAdaptiveTransitionCoordinator:(id)arg1 ;
-(BOOL)shouldPresentInFullscreen;
-(id)_fullscreenPresentationSuperview;
-(id)_currentContextPresentationSuperview;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)_isAdapted;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(void)_initViewHierarchyForPresentationSuperview:(id)arg1 ;
-(void)runTransitionForCurrentState;
-(BOOL)_changedPresentingViewControllerDuringAdaptation;
-(void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1 ;
-(id)_childPresentationController;
-(id)_transitionViewForCurrentTransition;
-(UIView *)_currentPresentationSuperview;
-(id)_toViewForCurrentTransition;
-(id)_computeToEndFrameForCurrentTransition;
-(id)_presentationView;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(id)_parentPresentationControllerImmediate:(BOOL)arg1 ;
-(id)_parentPresentationController;
-(id)presentedView;
-(id)_currentInteractionController;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)_fromViewForCurrentTransition;
-(void)setIsCurrentStateCancelled:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(void)transitionDidStart;
-(void)_releaseSnapshot;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(id)_passthroughViews;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)_enableOcclusion:(BOOL)arg1 ;
-(BOOL)_containerIgnoresDirectTouchEvents;
-(BOOL)_transitioningTo;
-(BOOL)_transitioningFrom;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 ;
-(void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)_shouldGrabPresentersView;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)_beginOcclusionIfNecessary:(BOOL)arg1 ;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(long long)_defaultPresentationStyleForTraitCollection:(id)arg1 ;
-(long long)adaptivePresentationStyleForTraitCollection:(id)arg1 ;
-(id)_activePresentationController;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)presentedContentContainer;
-(CGSize)preferredContentSize;
-(void)_setPreferredContentSize:(CGSize)arg1 ;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)_parentTraitEnvironment;
-(id)_parentTraitCollection;
-(UITraitCollection *)overrideTraitCollection;
-(id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)presented;
-(BOOL)_isModalWhenContainedInPopover;
-(void)_containedViewControllerModalStateChanged;
-(CGSize)_flipSize:(CGSize)arg1 ;
-(BOOL)dismissed;
-(BOOL)_shouldChangeStatusBarViewController;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_preserveResponderAcrossWindows;
-(void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1 ;
-(void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4 ;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_firstCurrentContextChildInWindow;
-(id)_initialPresentationViewControllerForViewController:(id)arg1 ;
-(UIEdgeInsets)_baseContentInsets;
-(id)_descriptionForPrintingViewControllerHierarchy;
-(void)_coverWithSnapshot;
-(BOOL)_forcesPreferredAnimationControllers;
-(id)_preferredAnimationControllerForPresentation;
-(id)_preferredAnimationControllerForDismissal;
-(BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)arg1 transitionCoordinator:(id)arg2 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)_animatorForContainmentTransition;
-(void)_performBackGesture:(id)arg1 ;
-(void)_disableMenuPressForBackGesture;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(CGSize)_preferredContentSize;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)isCurrentStateCancelled;
-(id)_currentTransitionController;
-(id)_adaptiveTransitionCoordinator;
-(id)_adaptiveTransitionContext;
@end

