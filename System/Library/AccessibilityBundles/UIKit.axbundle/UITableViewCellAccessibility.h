/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewCellAccessibility_super.h>

@class NSIndexPath;

@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super

@property (nonatomic,retain) NSIndexPath * accessibilityFallbackIndexPath; 
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityIsDescendantOfElement:(id)arg1 ;
-(id)_accessibilityNativeFocusPreferredElement;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityChildren;
-(BOOL)_accessibilityIsSpeakThisElement;
-(void)_accessibilityClearChildren;
-(void)setAccessibilityFallbackIndexPath:(NSIndexPath *)arg1 ;
-(id)_accessibilityInternalData;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilityIndexPath;
-(BOOL)_accessibilityIsButton;
-(id)_accessibilityTableViewSwitch;
-(BOOL)_accessibilityIsButtonAccessoryType:(long long)arg1 ;
-(id)_accessibilityNextIndexPath;
-(id)_accessibilityPreviousIndexPath;
-(id)_accessibilitySubviewsForAdding;
-(void)registerMockChild:(id)arg1 ;
-(BOOL)_accessibilityLabelShouldBeDistinct:(id)arg1 ;
-(void)_accessibilityReevaluateChildren;
-(id)_accessibilityParentTableView;
-(BOOL)_accessibilityTableViewIsOpaque;
-(void)unregisterMockChild:(id)arg1 ;
-(void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3 ;
-(void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1 ;
-(id)_accessibilityMockParent;
-(NSIndexPath *)accessibilityFallbackIndexPath;
-(BOOL)_accessibilityTableViewCellHidesInsertControl;
-(BOOL)_accessibilityIsRemoveControlVisible;
-(id)_accessibilityFindRemoveSwitchSubview;
-(BOOL)_accessibilityIsRemoveConfirmVisible;
-(id)_accessibilityFindRemoveConfirmSubview;
-(void)_accessibilityHandleRemoveSwitch;
-(void)_accessibilityHandleRemoveConfirm;
-(BOOL)_accessibilityAvoidsMockViewContainers;
-(BOOL)_accessibilityAlwaysReturnsChild;
-(id)_accessibilityRetrieveTableViewCellText;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(BOOL)_accessibilityUsesOverrideContainerProtocol;
-(id)_accessibilityContainerElements;
-(id)_accessibilityOverrideChildren;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(BOOL)_axSubviewIgnoredDueToHiddenAncestry:(id)arg1 ;
-(BOOL)_accessibilityTableViewCellSubclassShouldExist;
-(BOOL)_accessibilityShouldSortTableViewCellChildren;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(void)_accessibilityUpdateRemoveControl;
-(BOOL)_accessibilityShouldBeEmptyIfHidden;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)_accessibilityCustomActions;
-(BOOL)_accessibilityCanEditTableViewCell;
-(BOOL)_accessibilityPerformSwipeAction:(id)arg1 ;
-(long long)_accessibilityUserTestingChildrenCount;
-(BOOL)_accessibilityIsInTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityIsTableCell;
-(BOOL)_accessibilityScrollToVisibleForNextElementRetrieval:(int)arg1 ;
-(void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(void)_setAccessibilityMockParent:(id)arg1 ;
-(id)_accessibilityTextElementText;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(id)tableTextAccessibleLabel:(id)arg1 ;
-(double)_accessibilityAllowedGeometryOverlapX;
-(double)_accessibilityAllowedGeometryOverlap;
-(BOOL)accessibilityScrollToVisible;
-(void)dealloc;
-(void)_didRemoveSubview:(id)arg1 ;
-(id)accessibilityLabel;
-(void)_beginSwiping;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)_setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)didTransitionToState:(unsigned long long)arg1 ;
-(void)setShowingDeleteConfirmation:(BOOL)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(id)accessibilityHeaderElements;
-(BOOL)accessibilityElementIsFocused;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(NSRange)accessibilityRowRange;
@end
