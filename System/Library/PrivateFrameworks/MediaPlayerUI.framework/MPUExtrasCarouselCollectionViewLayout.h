/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <libobjc.A.dylib/MPUExtrasCarouselCollectionViewLayout.h>

@class NSDictionary;

@interface MPUExtrasCarouselCollectionViewLayout : UICollectionViewLayout <MPUExtrasCarouselCollectionViewLayout> {

	NSDictionary* _cachedLayoutAttributes;
	long long _indexOfVisibleItemForBoundsChange;
	CGSize _cachedCollectionViewContentSize;

}

@property (nonatomic,retain) NSDictionary * cachedLayoutAttributes;                    //@synthesize cachedLayoutAttributes=_cachedLayoutAttributes - In the implementation block
@property (assign,nonatomic) CGSize cachedCollectionViewContentSize;                   //@synthesize cachedCollectionViewContentSize=_cachedCollectionViewContentSize - In the implementation block
@property (assign,nonatomic) long long indexOfVisibleItemForBoundsChange;              //@synthesize indexOfVisibleItemForBoundsChange=_indexOfVisibleItemForBoundsChange - In the implementation block
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(double)itemWidth;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 ;
-(unsigned long long)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_spaceBetweenItems;
-(double)_neighboringItemVisibleWidth;
-(void)setCachedLayoutAttributes:(NSDictionary *)arg1 ;
-(void)setCachedCollectionViewContentSize:(CGSize)arg1 ;
-(CGSize)cachedCollectionViewContentSize;
-(NSDictionary *)cachedLayoutAttributes;
-(long long)_indexOfVisibleItemForContentOffset:(CGPoint)arg1 collectionViewBounds:(CGRect)arg2 ;
-(CGPoint)_contentOffsetForItemAtIndex:(long long)arg1 collectionViewBounds:(CGRect)arg2 ;
-(void)setIndexOfVisibleItemForBoundsChange:(long long)arg1 ;
-(long long)indexOfVisibleItemForBoundsChange;
-(double)_spaceBetweenItemsForCollectionViewBounds:(CGRect)arg1 ;
@end

