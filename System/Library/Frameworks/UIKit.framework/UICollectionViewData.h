/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UICollectionView, UICollectionViewLayout, NSMapTable, NSMutableIndexSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface UICollectionViewData : NSObject {

	UICollectionView* _collectionView;
	UICollectionViewLayout* _layout;
	NSMapTable* _screenPageMap;
	NSMutableIndexSet* _globalIndexesOfItemsAwaitingValidation;
	id* _globalItems;
	NSMutableDictionary* _supplementaryLayoutAttributes;
	NSMutableDictionary* _decorationLayoutAttributes;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	CGRect _validLayoutRect;
	long long _numItems;
	long long _numSections;
	long long* _sectionItemCounts;
	long long _lastSectionTestedForNumberOfItemsBeforeSection;
	long long _lastResultForNumberOfItemsBeforeSection;
	CGSize _contentSize;
	NSMutableArray* _clonedCellAttributes;
	NSMutableArray* _clonedSupplementaryAttributes;
	NSMutableArray* _clonedDecorationAttributes;
	struct {
		unsigned contentSizeIsValid : 1;
		unsigned itemCountsAreValid : 1;
		unsigned layoutIsPrepared : 1;
		unsigned layoutLocked : 1;
	}  _collectionViewDataFlags;

}

@property (nonatomic,readonly) BOOL layoutIsPrepared; 
@property (assign,getter=isLayoutLocked,nonatomic) BOOL layoutLocked; 
@property (assign,nonatomic) CGSize contentSize;                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) NSArray * clonedCellAttributes;                       //@synthesize clonedCellAttributes=_clonedCellAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedSupplementaryAttributes;              //@synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedDecorationAttributes;                 //@synthesize clonedDecorationAttributes=_clonedDecorationAttributes - In the implementation block
+(void)initialize;
-(void)dealloc;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(CGSize)contentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(long long)numberOfItems;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(long long)globalIndexForItemAtIndexPath:(id)arg1 ;
-(id)knownSupplementaryElementKinds;
-(id)layoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(id)layoutAttributesForElementsInSection:(long long)arg1 ;
-(void)invalidate:(BOOL)arg1 ;
-(BOOL)layoutIsPrepared;
-(CGRect)collectionViewContentRect;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSArray *)clonedCellAttributes;
-(NSArray *)clonedSupplementaryAttributes;
-(NSArray *)clonedDecorationAttributes;
-(void)validateLayoutInRect:(CGRect)arg1 ;
-(id)initWithCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)_prepareToLoadData;
-(void)setLayoutLocked:(BOOL)arg1 ;
-(id)indexPathForItemAtGlobalIndex:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributesInSection:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributes;
-(CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)knownDecorationElementKinds;
-(void)invalidateSupplementaryIndexPaths:(id)arg1 ;
-(void)invalidateDecorationIndexPaths:(id)arg1 ;
-(void)_updateItemCounts;
-(void)_validateItemCounts;
-(void)_validateContentSize;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2 ;
-(void)validateSupplementaryViews;
-(void)validateDecorationViews;
-(CGRect)rectForItemAtIndexPath:(id)arg1 ;
-(void)_loadEverything;
-(CGRect)rectForGlobalItemIndex:(long long)arg1 ;
-(BOOL)isLayoutLocked;
@end

