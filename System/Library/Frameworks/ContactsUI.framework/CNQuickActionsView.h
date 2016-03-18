/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CNQuickActionsManagerDelegate.h>

@protocol CNQuickActionsViewDelegate;
@class CNContact, NSArray, NSDictionary, CNQuickActionsManager, UICollectionViewFlowLayout, UICollectionView, NSString;

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate> {

	BOOL _sortsWithDuet;
	CNContact* _contact;
	NSArray* _categories;
	NSDictionary* _titleTextAttributes;
	id<CNQuickActionsViewDelegate> _delegate;
	CNQuickActionsManager* _actionsManager;
	NSArray* _actions;
	UICollectionViewFlowLayout* _collectionLayout;
	UICollectionView* _collectionView;
	CGSize _cachedContentSize;

}

@property (nonatomic,retain) CNContact * contact;                                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                          //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet;                                          //@synthesize sortsWithDuet=_sortsWithDuet - In the implementation block
@property (nonatomic,copy) NSDictionary * titleTextAttributes;                            //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (assign,nonatomic) double interspace; 
@property (assign,nonatomic,__weak) id<CNQuickActionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNQuickActionsManager * actionsManager;                      //@synthesize actionsManager=_actionsManager - In the implementation block
@property (nonatomic,readonly) double maximumWidth; 
@property (nonatomic,retain) NSArray * actions;                                           //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionLayout;               //@synthesize collectionLayout=_collectionLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) CGSize cachedContentSize;                                    //@synthesize cachedContentSize=_cachedContentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCategories;
+(BOOL)hasActionsForContact:(id)arg1 ;
+(id)actionsManagerForContact:(id)arg1 ;
+(id)descriptorForRequiredKeys;
+(BOOL)requiresConstraintBasedLayout;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(void)actionsManager:(id)arg1 actionDidPerform:(id)arg2 ;
-(id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2 ;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
-(CNQuickActionsManager *)actionsManager;
-(void)_updateActions;
-(void)setCollectionLayout:(UICollectionViewFlowLayout *)arg1 ;
-(UICollectionViewFlowLayout *)collectionLayout;
-(double)_widthForButtonCount:(long long)arg1 itemSize:(CGSize*)arg2 ;
-(void)setCachedContentSize:(CGSize)arg1 ;
-(CGSize)cachedContentSize;
-(void)setInterspace:(double)arg1 ;
-(double)interspace;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setDelegate:(id<CNQuickActionsViewDelegate>)arg1 ;
-(void)reloadData;
-(id<CNQuickActionsViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(NSArray *)actions;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(double)maximumWidth;
-(UICollectionView *)collectionView;
-(NSArray *)categories;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)updateContentSize;
-(void)setCategories:(NSArray *)arg1 ;
@end

