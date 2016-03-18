/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UIImage, UIImageView;

@interface EKCalendarChooserCell : EKUIConstrainedFontsTableViewCell {

	BOOL _showCheckmarksOnLeft;
	BOOL _checked;
	BOOL _shouldAnimate;
	BOOL _showsColorDot;
	UIImage* _colorDot;
	UIImage* _colorDotHighlighted;
	UIImageView* _colorDotView;
	UIImageView* _checkmarkView;

}

@property (assign,nonatomic) BOOL showCheckmarksOnLeft;              //@synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft - In the implementation block
@property (assign,nonatomic) BOOL checked;                           //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimate;                     //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (assign,nonatomic) BOOL showsColorDot;                     //@synthesize showsColorDot=_showsColorDot - In the implementation block
-(void)setContentAlpha:(double)arg1 ;
-(void)setShowCheckmarksOnLeft:(BOOL)arg1 ;
-(void)setShowCheckmarksOnLeft:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)showCheckmarksOnLeft;
-(BOOL)showsColorDot;
-(void)setColorDotImage:(id)arg1 ;
-(void)setColorDotHighlightedImage:(id)arg1 ;
-(double)textLeftIndent;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(void)setShowsColorDot:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)shouldAnimate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)checked;
@end

