/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIView, UIColor, MusicTableView;

@interface MusicTableViewSelectableHeaderFooterView : UITableViewHeaderFooterView {

	UIView* _bottomHairlineView;
	long long _highlightOrSelectionChangeTransactionsCount;
	UIView* _highlightOverlayView;
	BOOL _lastHighlightOrSelectionChangeWasAnimated;
	UIView* _topHairlineView;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _showsBottomSeparator;
	BOOL _showsTopSeparator;
	UIColor* _selectionTintColor;
	UIColor* _separatorColor;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                           //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) BOOL showsBottomSeparator;                          //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
@property (assign,nonatomic) BOOL showsTopSeparator;                             //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (nonatomic,readonly) MusicTableView * parentTableView; 
-(void)_updateBackgroundColorAnimated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(UIColor *)separatorColor;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(MusicTableView *)parentTableView;
-(id)_effectiveHighlightOverlayBackgroundColor;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(void)beginHighlightOrSelectionChangeTransaction;
-(void)endHighlightOrSelectionChangeTransaction;
-(BOOL)showsBottomSeparator;
-(BOOL)showsTopSeparator;
@end

