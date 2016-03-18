/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/_UIBasicAnimationFactory.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, UIView, UISegment, UIColor, NSString;

@interface UISegmentedControl : UIControl <_UIBasicAnimationFactory, NSCoding> {

	NSMutableArray* _segments;
	long long _selectedSegment;
	long long _highlightedSegment;
	UIView* _removedSegment;
	UISegment* _focusedSegment;
	long long _barStyle;
	id _appearanceStorage;
	UIView* _backgroundBarView;
	double _enabledAlpha;
	struct {
		unsigned style : 3;
		unsigned size : 2;
		unsigned delegateAlwaysNotifiesDelegateOfSegmentClicks : 1;
		unsigned momentaryClick : 1;
		unsigned tracking : 1;
		unsigned autosizeToFitSegments : 1;
		unsigned isSizingToFit : 1;
		unsigned autosizeText : 1;
		unsigned transparentBackground : 1;
		unsigned useProportionalWidthSegments : 1;
		unsigned translucentBackground : 1;
		unsigned appearanceNeedsUpdate : 1;
	}  _segmentedControlFlags;
	BOOL __hasTranslucentOptionsBackground;

}

@property (assign,nonatomic) long long segmentedControlStyle; 
@property (assign,getter=isMomentary,nonatomic) BOOL momentary; 
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (assign,nonatomic) BOOL apportionsSegmentWidthsByContent; 
@property (assign,nonatomic) long long selectedSegmentIndex; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,setter=_setTranslucentOptionsBackground:,nonatomic) BOOL _hasTranslucentOptionsBackground;              //@synthesize _hasTranslucentOptionsBackground=__hasTranslucentOptionsBackground - In the implementation block
@property (nonatomic,retain) UIView * removedSegment;                                                                     //@synthesize removedSegment=_removedSegment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(id)_modernDividerImageForTraitCollection:(id)arg1 ;
+(double)_dividerWidthForTraitCollection:(id)arg1 ;
+(id)_modernBackgroundSelected:(BOOL)arg1 highlighted:(BOOL)arg2 traitCollection:(id)arg3 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 size:(int)arg2 ;
+(double)_lineWidthForTraitCollection:(id)arg1 ;
+(double)_cornerRadiusForTraitCollection:(id)arg1 ;
+(double)defaultHeightForStyle:(long long)arg1 ;
-(void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2 ;
-(id)scriptingInfoWithChildren;
-(void)setDelegate:(id)arg1 ;
-(void)setSelectedSegment:(long long)arg1 ;
-(void)selectSegment:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3 ;
-(void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1 ;
-(void)setImagePadding:(CGSize)arg1 forSegment:(unsigned long long)arg2 ;
-(void)addSegmentWithTitle:(id)arg1 ;
-(void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeSegment:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(id)titleForSegment:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(id)imageForSegment:(unsigned long long)arg1 ;
-(void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2 ;
-(float)widthForSegment:(unsigned long long)arg1 ;
-(void)setContentOffset:(CGSize)arg1 forSegment:(unsigned long long)arg2 ;
-(CGSize)contentOffsetForSegment:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegment:(unsigned long long)arg2 ;
-(BOOL)isEnabledForSegment:(unsigned long long)arg1 ;
-(long long)selectedSegment;
-(id)infoViewForSegment:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusedView;
-(BOOL)useBlockyMagnificationInClassic;
-(id)_tintColorArchivingKey;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)willUpdateFocusToView:(id)arg1 ;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(void)sizeToFit;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setControlSize:(int)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(int)controlSize;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(BOOL)shouldTrack;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_optionsBackgroundImage;
-(BOOL)_isInMiniBar;
-(BOOL)_isInTranslucentToolbar;
-(BOOL)isMomentary;
-(double)_barHeight;
-(id)viewForLastBaselineLayout;
-(void)setMomentary:(BOOL)arg1 ;
-(void)_commonSegmentedControlInit;
-(id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned)arg2 withInfo:(id)arg3 ;
-(void)setSegmentedControlStyle:(long long)arg1 ;
-(void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 animate:(BOOL)arg3 ;
-(void)_setEnabled:(BOOL)arg1 forcePropagateToSegments:(BOOL)arg2 ;
-(void)removeAllSegments;
-(void)_setCurrentBackgroundImage:(id)arg1 ;
-(void)_updateOptionsBackground;
-(void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_setNeedsAppearanceUpdate;
-(void)_setControlSize:(int)arg1 andInvalidate:(BOOL)arg2 ;
-(void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(BOOL)arg3 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(void)_removeSegmentAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setRemovedSegment:(UIView *)arg1 ;
-(void)_setSelectedSegmentIndex:(long long)arg1 notify:(BOOL)arg2 ;
-(BOOL)_shouldSelectSegmentAtIndex:(long long)arg1 ;
-(void)_setSelected:(BOOL)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(BOOL)arg3 ;
-(void)_cancelDelayedFocusAction;
-(void)_sendFocusAction;
-(void)_resetForAppearanceChange;
-(void)_setHighlightedSegmentHighlighted:(BOOL)arg1 ;
-(void)highlightSegment:(int)arg1 ;
-(void)_clearSelectedSegment;
-(void)_tapSegmentAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldConsumeEventWithPresses:(id)arg1 ;
-(void)_selectFocusedSegment;
-(BOOL)_hasEnabledSegment;
-(id)_firstEnabledSegment;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(id)_createSegmentAtIndex:(int)arg1 position:(unsigned)arg2 withInfo:(id)arg3 ;
-(BOOL)apportionsSegmentWidthsByContent;
-(void)setApportionsSegmentWidthsByContent:(BOOL)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(BOOL)_optionsShadowHidden;
-(void)_setOptionsShadowHidden:(BOOL)arg1 ;
-(void)_setSegmentedControlAppearance:(SCD_Struct_UI37*)arg1 ;
-(void)_setAppearanceIsTiled:(BOOL)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3 ;
-(long long)segmentedControlStyle;
-(long long)segmentControlStyle;
-(void)setSegmentControlStyle:(long long)arg1 ;
-(void)_setAutosizeText:(BOOL)arg1 ;
-(void)_setTranslucentOptionsBackground:(BOOL)arg1 ;
-(void)setTransparentBackground:(BOOL)arg1 ;
-(BOOL)transparentBackground;
-(BOOL)_usesNewAnimations;
-(void)_setUsesNewAnimations:(BOOL)arg1 ;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)imageForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(double)widthForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setContentOffset:(CGSize)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(CGSize)contentOffsetForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(BOOL)isEnabledForSegmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSegments;
-(long long)selectedSegmentIndex;
-(void)_animateContentChangeWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setOptionsBackgroundImage:(id)arg1 ;
-(id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4 ;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setContentPositionAdjustment:(UIOffset)arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3 ;
-(UIOffset)contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2 ;
-(id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(BOOL)_hasTranslucentOptionsBackground;
-(UIView *)removedSegment;
@end

