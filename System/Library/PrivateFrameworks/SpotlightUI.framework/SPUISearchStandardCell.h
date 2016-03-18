/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchTableViewCell.h>

@class SPUIObservingLabel, SPUISearchPlayButton, UILabel, UIImageView, NSDictionary, NSArray, UIView;

@interface SPUISearchStandardCell : SPUISearchTableViewCell {

	SPUIObservingLabel* _titleLabel;
	SPUIObservingLabel* _subtitleLabel;
	SPUIObservingLabel* _summaryLabel;
	SPUISearchPlayButton* _mediaPlayButton;
	UILabel* _auxiliaryTitleLabel;
	UILabel* _auxiliarySubtitleLabel;
	UIImageView* _unreadBadge;
	UIImageView* _vipBadge;
	NSDictionary* _titleTextAttributes;
	NSDictionary* _subtitleTextAttributes;
	NSDictionary* _summaryTextAttributes;
	NSArray* _bottomConstraints;

}

@property (nonatomic,readonly) UIView*<SPUISearchText> titleLabel; 
@property (nonatomic,readonly) UIView*<SPUISearchText> subtitleLabel; 
@property (nonatomic,readonly) UIView*<SPUISearchText> summaryLabel; 
@property (nonatomic,readonly) UILabel * auxiliaryTitleLabel;                      //@synthesize auxiliaryTitleLabel=_auxiliaryTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * auxiliarySubtitleLabel;                   //@synthesize auxiliarySubtitleLabel=_auxiliarySubtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * unreadBadge;                          //@synthesize unreadBadge=_unreadBadge - In the implementation block
@property (nonatomic,readonly) UIImageView * vipBadge;                             //@synthesize vipBadge=_vipBadge - In the implementation block
@property (nonatomic,retain) NSDictionary * titleTextAttributes;                   //@synthesize titleTextAttributes=_titleTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * subtitleTextAttributes;                //@synthesize subtitleTextAttributes=_subtitleTextAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * summaryTextAttributes;                 //@synthesize summaryTextAttributes=_summaryTextAttributes - In the implementation block
@property (nonatomic,readonly) double leftTextMargin; 
@property (nonatomic,readonly) UIView * leftView; 
@property (nonatomic,readonly) NSArray * bottomConstraints;                        //@synthesize bottomConstraints=_bottomConstraints - In the implementation block
+(id)unreadImage;
+(id)starImage;
-(id)variableConstraints;
-(id)constantConstraints;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(double)leftTextMargin;
-(UIView*<SPUISearchText>)titleLabel;
-(UIView*<SPUISearchText>)subtitleLabel;
-(UIView *)leftView;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(UIView*<SPUISearchText>)summaryLabel;
-(void)setSubtitleTextAttributes:(NSDictionary *)arg1 ;
-(void)setSummaryTextAttributes:(NSDictionary *)arg1 ;
-(void)updateFonts;
-(id)mediaPlayButtonForTrackID:(unsigned long long)arg1 local:(BOOL)arg2 ;
-(void)updateLabel:(id)arg1 withValue:(id)arg2 ;
-(void)updateAuxiliariesWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
-(void)updateBadgesWithSection:(id)arg1 result:(id)arg2 ;
-(id)accessoryViewForSection:(id)arg1 result:(id)arg2 ;
-(void)_updateAuxiliaryFonts;
-(id)leftTextView;
-(NSArray *)bottomConstraints;
-(id)rightViewFrom:(id)arg1 ;
-(UILabel *)auxiliaryTitleLabel;
-(UILabel *)auxiliarySubtitleLabel;
-(UIImageView *)unreadBadge;
-(UIImageView *)vipBadge;
-(NSDictionary *)subtitleTextAttributes;
-(NSDictionary *)summaryTextAttributes;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

