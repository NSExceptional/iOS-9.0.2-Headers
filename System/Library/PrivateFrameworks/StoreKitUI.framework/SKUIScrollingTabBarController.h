/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDynamicBarAnimatorDelegate.h>
#import <libobjc.A.dylib/SKUIProxyScrollViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarContentCollectionViewDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarControllerItemContextDelegate.h>
#import <libobjc.A.dylib/SKUIScrollingTabBarPaletteDelegate.h>
#import <libobjc.A.dylib/SKUIScrollViewDelegateObserver.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/SKUITabBarController.h>

@protocol SKUITabBarControllerDelegate;
@class NSArray, UIViewController, UIView, UINavigationController, SKUIScrollingTabBarContentCollectionView, NSMutableArray, SKUIDynamicBarAnimator, UIScrollView, SKUIProxyScrollView, SKUICrossFadingTabBar, SKUIScrollingTabBarBackgroundView, SKUIScrollingTabBarPalette, SKUIScrollingTabBarControllerItemContext, NSMapTable, NSString;

@interface SKUIScrollingTabBarController : SKUIViewController <SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController> {

	unsigned long long _activePaletteTransitions;
	SCD_Struct_SK18 _additionalPositionOffsetsUpdateRecord;
	unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;
	BOOL _canHideBarsOnSwipe;
	CGSize _contentCollectionViewItemSize;
	SKUIScrollingTabBarContentCollectionView* _contentCollectionView;
	NSMutableArray* _contentCollectionViewCells;
	SKUIDynamicBarAnimator* _dynamicBarAnimator;
	UIScrollView* _focusedContentScrollView;
	UIViewController* _focusedViewController;
	BOOL _focusedScrollViewIsDragging;
	long long _indexOfViewControllerWithUpdatedContentSize;
	BOOL _isDelegatingPresentedViewControllerLogicToSelectedViewController;
	SKUIProxyScrollView* _proxyScrollView;
	UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
	unsigned long long _referenceCountForIgnoringContentOffsetUpdateRequests;
	BOOL _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;
	BOOL _shouldShowBarsAfterDraggingDownward;
	SKUICrossFadingTabBar* _tabBar;
	UIView* _tabBarContainerView;
	UIOffset _tabBarExplicitHidingOffset;
	BOOL _tabBarExplicitlyHidden;
	SKUIScrollingTabBarBackgroundView* _tabBarExtendedBackgroundView;
	SKUIScrollingTabBarPalette* _tabBarPalette;
	UIViewController* _topLevelFocusedViewController;
	SKUIScrollingTabBarControllerItemContext* _transientViewControllerItemContext;
	NSMapTable* _viewControllerToItemContext;
	BOOL _chargeEnabledOnTabBarButtonsContainer;
	BOOL _scrollEnabled;
	id<SKUITabBarControllerDelegate> _delegate;
	UIViewController* _transientViewController;
	NSArray* _viewControllers;
	UIOffset _additionalTabBarButtonsContainerPositionOffset;
	UIOffset _additionalTabBarPalettePositionOffset;

}

@property (assign,nonatomic) UIOffset additionalTabBarButtonsContainerPositionOffset;              //@synthesize additionalTabBarButtonsContainerPositionOffset=_additionalTabBarButtonsContainerPositionOffset - In the implementation block
@property (assign,nonatomic) UIOffset additionalTabBarPalettePositionOffset;                       //@synthesize additionalTabBarPalettePositionOffset=_additionalTabBarPalettePositionOffset - In the implementation block
@property (assign,nonatomic) BOOL chargeEnabledOnTabBarButtonsContainer;                           //@synthesize chargeEnabledOnTabBarButtonsContainer=_chargeEnabledOnTabBarButtonsContainer - In the implementation block
@property (nonatomic,readonly) double contentViewControllerBottomInsetAdjustment; 
@property (assign,nonatomic) BOOL scrollEnabled;                                                   //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,readonly) CGRect tabBarButtonsContainerFrame; 
@property (nonatomic,readonly) CGRect tabBarPaletteFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SKUITabBarControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * viewControllers;                                              //@synthesize viewControllers=_viewControllers - In the implementation block
@property (assign,nonatomic) UIViewController * selectedViewController; 
@property (assign,nonatomic) unsigned long long selectedIndex; 
@property (nonatomic,readonly) UIView * tabBar; 
@property (nonatomic,retain) UIViewController * transientViewController;                           //@synthesize transientViewController=_transientViewController - In the implementation block
@property (nonatomic,readonly) NSArray * allViewControllers; 
@property (nonatomic,readonly) UINavigationController * moreNavigationController; 
@property (nonatomic,readonly) UIViewController * floatingOverlayViewController; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)areScrollingTabsAllowed;
-(void)setDelegate:(id<SKUITabBarControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SKUITabBarControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)presentedViewController;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)viewDidLoad;
-(id)_backdropBarGroupName;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)rotatingSnapshotViewForWindow:(id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)tabBar;
-(NSArray *)viewControllers;
-(void)showBarWithTransition:(int)arg1 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewController:(UIViewController *)arg1 ;
-(UIViewController *)transientViewController;
-(void)setTransientViewController:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(void)setTransientViewController:(UIViewController *)arg1 ;
-(NSArray *)allViewControllers;
-(void)hideBarWithTransition:(int)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setClientContext:(id)arg1 ;
-(void)observedScrollViewDidScroll:(id)arg1 ;
-(void)observedScrollViewWillBeginDragging:(id)arg1 ;
-(void)observedScrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint)arg3 ;
-(void)dynamicBarAnimatorDidUpdate:(id)arg1 ;
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2 ;
-(void)_updateScrollViewContentOffsetsToTargetContentOffsets;
-(void)scrollViewDidChangeContentInset:(id)arg1 ;
-(void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg1 ;
-(void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(/*^block*/id)arg2 forFinalTearDown:(BOOL)arg3 ;
-(void)_updateHorizontalScrollingAvailability;
-(id)_tabBarBackdropGroupName;
-(void)_updateTabBarButtons;
-(void)_updateDynamicBarGeometry;
-(void)_updateLayoutOfTabBar;
-(void)_updateForHorizontalLayoutChange;
-(void)_updateStatusBarPositionForcingVisible:(BOOL)arg1 ;
-(double)contentViewControllerBottomInsetAdjustment;
-(void)_updateHidesBarsOnSwipeAvailability;
-(void)_updateNavigationBarsForVerticalLayoutChange;
-(void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;
-(void)_updateViewControllerContentScrollViewInset;
-(id)_parentCellForViewController:(id)arg1 ;
-(void)_updateTabBarBackgroundsAndHairlines;
-(BOOL)_focusedContentScrollViewIsScrolledToOrPastBottom;
-(SCD_Struct_SK19)_viewControllerContentScrollViewContentInsetDescriptor;
-(void)_updateLayoutOfCollectionViewCell:(id)arg1 ;
-(double)_effectiveBottomBarOffset;
-(UIOffset)_roundedOffsetFromOffset:(UIOffset)arg1 ;
-(void)_updateAdditionalPositionOffsetsWithUpdateRecord:(SCD_Struct_SK20)arg1 ;
-(void)_selectTabAtIndex:(unsigned long long)arg1 shouldFallbackToPoppingToTabRootContent:(BOOL)arg2 ;
-(void)attachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animatePaletteWithSetup:(/*^block*/id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)detachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willUpdateAdditionalTabBarComponentsPositionOffsets;
-(void)setAdditionalTabBarButtonsContainerPositionOffset:(UIOffset)arg1 ;
-(void)setAdditionalTabBarPalettePositionOffset:(UIOffset)arg1 ;
-(void)didUpdateAdditionalTabBarComponentsPositionOffsets;
-(id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg1 ;
-(void)_setFocusedViewController:(id)arg1 showBarsIfNeeded:(BOOL)arg2 animated:(BOOL)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 indexOfViewControllerWithUpdatedContentSize:(unsigned long long)arg2 ;
-(void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 ;
-(void)_updateLayoutOfVisibleCollectionViewCells;
-(void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 ;
-(void)_updateFocusedViewControllerWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 ;
-(void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 ;
-(void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(SCD_Struct_SK21)arg1 ;
-(void)_tabBarButtonTapped:(id)arg1 ;
-(void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg1 ;
-(void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg1 ;
-(void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg1 ;
-(void)scrollingTabBarControllerItemContext:(id)arg1 observedNavigationStackDidChange:(id)arg2 ;
-(void)setChargeEnabledOnTabBarButtonsContainer:(BOOL)arg1 ;
-(CGRect)tabBarButtonsContainerFrame;
-(CGRect)tabBarPaletteFrame;
-(id)existingTabBarPalette;
-(id)tabBarPaletteWithHeight:(double)arg1 ;
-(void)attachTabBarPalette:(id)arg1 ;
-(void)detachTabBarPalette:(id)arg1 ;
-(void)updateTabBarComponentPositionOffsetsWithPresentationValues;
-(double)_effectiveTopBarHeight;
-(void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg1 ;
-(UIOffset)additionalTabBarButtonsContainerPositionOffset;
-(UIOffset)additionalTabBarPalettePositionOffset;
-(BOOL)chargeEnabledOnTabBarButtonsContainer;
-(BOOL)scrollEnabled;
@end

