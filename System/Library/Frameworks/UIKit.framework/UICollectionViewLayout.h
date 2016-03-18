/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UICollectionView, NSMutableDictionary, NSMutableIndexSet, UIDynamicAnimator, UICollectionViewLayoutInvalidationContext, NSIndexSet, NSArray, _UICollectionViewCompositionLayout;

@interface UICollectionViewLayout : NSObject <NSCoding> {

	UICollectionView* _collectionView;
	CGSize _collectionViewBoundsSize;
	NSMutableDictionary* _initialAnimationLayoutAttributesDict;
	NSMutableDictionary* _finalAnimationLayoutAttributesDict;
	NSMutableDictionary* _deletedSupplementaryIndexPathsDict;
	NSMutableDictionary* _insertedSupplementaryIndexPathsDict;
	NSMutableDictionary* _deletedDecorationIndexPathsDict;
	NSMutableDictionary* _insertedDecorationIndexPathsDict;
	NSMutableIndexSet* _deletedSectionsSet;
	NSMutableIndexSet* _insertedSectionsSet;
	NSMutableDictionary* _decorationViewClassDict;
	NSMutableDictionary* _decorationViewNibDict;
	NSMutableDictionary* _decorationViewExternalObjectsTables;
	UICollectionViewLayout* _transitioningFromLayout;
	UICollectionViewLayout* _transitioningToLayout;
	UIDynamicAnimator* _animator;
	UICollectionViewLayoutInvalidationContext* _invalidationContext;
	CGRect _frame;
	NSIndexSet* _sections;
	NSIndexSet* _items;
	NSArray* _elementKinds;
	UICollectionViewCompositionLayout* _compositionLayout;
	UICollectionViewLayout* _siblingLayout;
	CGPoint _layoutOffset;
	unsigned long long _layoutOffsetEdges;
	struct {
		unsigned inTransitionFromTransitionLayout : 1;
		unsigned inTransitionToTransitionLayout : 1;
		unsigned prepared : 1;
	}  _layoutFlags;
	long long _sublayoutType;

}

@property (nonatomic,readonly) UICollectionView * collectionView;                                                                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,setter=_setFrame:,getter=_frame,nonatomic) CGRect frame; 
@property (setter=_setSections:,getter=_sections,nonatomic,copy) NSIndexSet * sections; 
@property (setter=_setItems:,getter=_items,nonatomic,copy) NSIndexSet * items; 
@property (setter=_setElementKinds:,getter=_elementKinds,nonatomic,copy) NSArray * elementKinds; 
@property (assign,setter=_setCompositionLayout:,getter=_compositionLayout,nonatomic) _UICollectionViewCompositionLayout * compositionLayout; 
@property (assign,setter=_setSiblingLayout:,getter=_siblingLayout,nonatomic) UICollectionViewLayout * siblingLayout; 
@property (assign,setter=_setLayoutOffset:,getter=_layoutOffset,nonatomic) CGPoint layoutOffset; 
@property (assign,setter=_setLayoutOffsetEdges:,getter=_layoutOffsetEdges,nonatomic) unsigned long long layoutOffsetEdges; 
@property (assign,setter=_setSublayoutType:,getter=_sublayoutType,nonatomic) long long sublayoutType;                                                     //@synthesize sublayoutType=_sublayoutType - In the implementation block
@property (assign,setter=_setPrepared:,getter=_isPrepared,nonatomic) BOOL prepared; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)pu_layoutAttributesForElementClosestToPoint:(CGPoint)arg1 inRect:(CGRect)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(UICollectionView *)collectionView;
-(id)_items;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(CGRect)_frame;
-(CGRect)_bounds;
-(void)_setFrame:(CGRect)arg1 ;
-(void)_setSublayoutType:(long long)arg1 ;
-(void)_setCompositionLayout:(UICollectionViewCompositionLayout*)arg1 ;
-(void)_setSections:(id)arg1 ;
-(void)_setLayoutOffset:(CGPoint)arg1 ;
-(void)_setLayoutOffsetEdges:(unsigned long long)arg1 ;
-(void)_setSiblingLayout:(id)arg1 ;
-(void)_setItems:(id)arg1 ;
-(void)_setElementKinds:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayout:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toLayout:(id)arg2 ;
-(id)_sections;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(id)_siblingLayout;
-(BOOL)_isPrepared;
-(CGPoint)_layoutOffset;
-(unsigned long long)_layoutOffsetEdges;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(void)_invalidateLayoutUsingContext:(id)arg1 ;
-(id)_decorationViewForLayoutAttributes:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(CGPoint)arg2 toItems:(id)arg3 atContentOffset:(CGPoint)arg4 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_finalizeCollectionViewItemAnimations;
-(void)finalizeAnimatedBoundsChange;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(void)_setCollectionView:(id)arg1 ;
-(void)_prepareForTransitionToLayout:(id)arg1 ;
-(void)_prepareForTransitionFromLayout:(id)arg1 ;
-(CGPoint)transitionContentOffsetForProposedContentOffset:(CGPoint)arg1 keyItemIndexPath:(id)arg2 ;
-(BOOL)_supportsAdvancedTransitionAnimations;
-(void)_finalizeLayoutTransition;
-(void)_didFinishLayoutTransitionAnimations:(BOOL)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(CGPoint)updatesContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)_reorderingTargetItemIndexPathForPosition:(CGPoint)arg1 withPreviousIndexPath:(id)arg2 ;
-(id)_invalidationContextForReorderingTargetPosition:(CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(CGPoint)arg3 previousIndexPaths:(id)arg4 ;
-(id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(BOOL)arg3 ;
-(UICollectionViewCompositionLayout*)_compositionLayout;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)prepareForTransitionFromLayout:(id)arg1 ;
-(void)finalizeLayoutTransition;
-(id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1 ;
-(id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1 ;
-(CGPoint)_offsetInTopParentLayout:(UICollectionViewCompositionLayout*)arg1 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(CGPoint)arg2 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(BOOL)arg3 ;
-(id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1 ;
-(void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2 ;
-(void)_setCollectionViewBoundsSize:(CGSize)arg1 ;
-(void)_setDynamicAnimator:(id)arg1 ;
-(id)_dynamicAnimator;
-(void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2 ;
-(CGRect)_dynamicReferenceBounds;
-(id)_elementKinds;
-(void)_setPrepared:(BOOL)arg1 ;
-(id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(long long)_sublayoutType;
@end

