/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@protocol _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource;
@class NSArray, UIView, NSMutableArray;

@interface _UIQueuingScrollView : UIScrollView {

	id<_UIQueuingScrollViewDelegate> _qDelegate;
	id<_UIQueuingScrollViewDataSource> _qDataSource;
	long long _navigationOrientation;
	NSArray* _views;
	NSArray* _wrapperViews;
	UIView* _pendingVisibleView;
	double _pageSpacing;
	NSMutableArray* _viewStateQueue;
	NSMutableArray* _completionStateQueue;
	BOOL _manualScrollInProgress;
	struct {
		unsigned delegateInterestedInPendingScrolls : 1;
		unsigned delegateInterestedInCommittedScrolls : 1;
		unsigned delegateInterestedInCompletedScrolls : 1;
		unsigned delegateInterestedInBailedOutScrolls : 1;
		unsigned delegateInterestedFinishedScrolling : 1;
		unsigned delegateCanVetoSubviewLayout : 1;
		unsigned dataSourceSuppliesBeforeView : 1;
		unsigned dataSourceSuppliesAfterView : 1;
		unsigned dataSourceInterestedInFlushedViews : 1;
	}  _delegateFlags;
	CGRect _disabledScrollingRegion;

}

@property (nonatomic,readonly) UIView * visibleView; 
@property (assign,nonatomic,__weak) id<_UIQueuingScrollViewDelegate> qDelegate;                  //@synthesize qDelegate=_qDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_UIQueuingScrollViewDataSource> qDataSource;              //@synthesize qDataSource=_qDataSource - In the implementation block
@property (assign,nonatomic) double pageSpacing;                                                 //@synthesize pageSpacing=_pageSpacing - In the implementation block
@property (assign,nonatomic) CGRect disabledScrollingRegion;                                     //@synthesize disabledScrollingRegion=_disabledScrollingRegion - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(BOOL)canBecomeFocused;
-(unsigned long long)_abuttedPagingEdges;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2 ;
-(id)_visibleView;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(id)initWithFrame:(CGRect)arg1 navigationOrientation:(long long)arg2 ;
-(void)setQDelegate:(id<_UIQueuingScrollViewDelegate>)arg1 ;
-(void)setQDataSource:(id<_UIQueuingScrollViewDataSource>)arg1 ;
-(void)_setFrameAndApplyPageSpacing:(CGRect)arg1 ;
-(void)_invalidateOffscreenViews;
-(CGRect)disabledScrollingRegion;
-(void)setDisabledScrollingRegion:(CGRect)arg1 ;
-(UIView *)visibleView;
-(BOOL)isPreviousScrollCompatibleWithScrollInDirection:(long long)arg1 ;
-(void)setView:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isManualScrollInProgress;
-(void)_boundsDidChangeToSize:(CGSize)arg1 ;
-(BOOL)_isScrollInProgress:(BOOL)arg1 ;
-(long long)_navigationDirectionForActiveScroll:(BOOL)arg1 ;
-(void)_didScrollWithAnimation:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_didEndManualScroll;
-(void)_didEndDraggingManualScroll;
-(void)_didEndProgrammaticScroll;
-(void)_adjustContentInsets;
-(BOOL)_dataSourceProvidesViews;
-(id)_viewAtIndex:(long long)arg1 loadingIfNecessary:(BOOL)arg2 updatingContents:(BOOL)arg3 animated:(BOOL)arg4 ;
-(id)_viewBefore:(BOOL)arg1 view:(id)arg2 ;
-(void)_flushView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setWrappedViewAtIndex:(long long)arg1 withView:(id)arg2 ;
-(id)_viewBeforeView:(id)arg1 ;
-(id)_viewAfterView:(id)arg1 ;
-(id)_dequeueViewForIndex:(long long)arg1 ;
-(id)_requestViewForIndex:(long long)arg1 ;
-(void)_replaceViews:(id)arg1 updatingContents:(BOOL)arg2 adjustContentInsets:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_cleanUpCompletionState:(id)arg1 didFinish:(BOOL)arg2 didComplete:(BOOL)arg3 ;
-(void)_notifyDelegateDidEndManualScroll:(BOOL)arg1 toRevealView:(id)arg2 direction:(long long)arg3 animated:(BOOL)arg4 didFinish:(BOOL)arg5 didComplete:(BOOL)arg6 ;
-(void)_enqueueCompletionState:(id)arg1 ;
-(void)_notifyDelegateWillManuallyScroll:(BOOL)arg1 toRevealView:(id)arg2 concealingView:(id)arg3 animated:(BOOL)arg4 ;
-(void)_notifyDelegateDidCommitManualScroll:(BOOL)arg1 toRevealView:(id)arg2 concealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 canComplete:(BOOL)arg6 ;
-(void)_enqueueAnimatedScrollInDirection:(long long)arg1 withView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_navigationDirectionFromCurrentOffset;
-(BOOL)_isDeceleratingInOppositionToNavigationDirection:(long long)arg1 ;
-(void)_commitGestureDrivenScrollRevealingView:(id)arg1 concealingView:(id)arg2 inDirection:(long long)arg3 canComplete:(BOOL)arg4 ;
-(void)_notifyDelegateDidBailoutOfScrollAndRevealedView:(id)arg1 ;
-(void)_didEndScroll:(BOOL)arg1 ;
-(void)_notifyDelegateDidFinishScrolling;
-(id<_UIQueuingScrollViewDelegate>)qDelegate;
-(id<_UIQueuingScrollViewDataSource>)qDataSource;
@end

