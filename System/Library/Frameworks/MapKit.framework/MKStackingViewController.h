/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MKStackingViewControllerDelegate;
@class _MKStackView, _MKStackingPlaceholderView, _MKStackingContentView, NSLayoutConstraint, NSMutableArray, UIScrollView, NSMapTable, NSArray, NSMutableSet, NSHashTable, UIView, UIColor, NSString;

@interface MKStackingViewController : UIViewController <UIScrollViewDelegate> {

	_MKStackView* _stackView;
	_MKStackingPlaceholderView* _headerPlaceholderView;
	_MKStackingContentView* _contentView;
	NSLayoutConstraint* _heightCompressionResistanceConstraint;
	NSLayoutConstraint* _heightHuggingConstraint;
	NSLayoutConstraint* _widthConstraint;
	NSMutableArray* _headerViewEdgeConstraints;
	NSLayoutConstraint* _headerViewHeightConstraint;
	BOOL _isScrollingProgrammaticallyToViewController;
	unsigned long long _countOfCurrentLayoutInvocations;
	UIScrollView* _scrollView;
	NSMapTable* _viewControllersToPreferredHeightConstraints;
	NSMutableArray* _separatorControllers;
	NSArray* _titleViewConstraints;
	NSMutableSet* _viewControllersWithObservedTitles;
	NSMapTable* _titleHeaderViewsByViewController;
	BOOL _willRelayoutForPreferredContentSizeChange;
	BOOL _isSettingStackedViews;
	BOOL _isBuildingView;
	NSHashTable* _minimallyVisibleViews;
	UIView* _titleView;
	UIView* _headerView;
	NSArray* _viewControllers;
	id<MKStackingViewControllerDelegate> _stackingDelegate;
	UIColor* _separatorBackgroundColor;
	UIColor* _separatorLineColor;

}

@property (nonatomic,retain) UIView * titleView;                                                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                                   //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<MKStackingViewControllerDelegate> stackingDelegate;              //@synthesize stackingDelegate=_stackingDelegate - In the implementation block
@property (nonatomic,readonly) UIColor * separatorBackgroundColor;                                      //@synthesize separatorBackgroundColor=_separatorBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * separatorLineColor;                                            //@synthesize separatorLineColor=_separatorLineColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_headerHeight;
-(void)_addTitleViewToHierarchyIfPossible;
-(double)_titleHeight;
-(void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2 ;
-(UIColor *)separatorBackgroundColor;
-(void)_scrollToViewControllerAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_fittingHeightForView:(id)arg1 ;
-(void)_setUpEnteringViewController:(id)arg1 ;
-(void)_removePreferredHeightConstraintFromViewController:(id)arg1 ;
-(void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2 ;
-(void)_updateViewControllerVisibilityAfterPositionChange;
-(void)setStackingDelegate:(id<MKStackingViewControllerDelegate>)arg1 ;
-(UIColor *)separatorLineColor;
-(void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1 ;
-(BOOL)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2 ;
-(void)_tearDownExitingViewController:(id)arg1 ;
-(id<MKStackingViewControllerDelegate>)stackingDelegate;
-(void)_repositionNonstackedSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)loadView;
-(void)_didScroll;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

