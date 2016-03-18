/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIKeyline, UIImageView, UIView, UILabel;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {

	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	BOOL _hasChevron;
	long long _verticalAlignment;
	UIView* _accessoryView;
	UILabel* _textLabel;
	long long _keylineType;
	UIOffset _textOffset;
	UIOffset _accessoryOffset;
	UIEdgeInsets _textAndAccessoryInsets;

}

@property (assign,nonatomic) long long verticalAlignment;                      //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAndAccessoryInsets;              //@synthesize textAndAccessoryInsets=_textAndAccessoryInsets - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                              //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) UIOffset accessoryOffset;                         //@synthesize accessoryOffset=_accessoryOffset - In the implementation block
@property (nonatomic,readonly) SiriUIKeyline * keyline;                        //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) long long keylineType;                            //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) BOOL hasChevron;                                  //@synthesize hasChevron=_hasChevron - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setTextOffset:(UIOffset)arg1 ;
-(UIOffset)textOffset;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(SiriUIKeyline *)keyline;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(BOOL)arg1 ;
-(UIEdgeInsets)textAndAccessoryInsets;
-(void)setTextAndAccessoryInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)accessoryOffset;
-(void)setAccessoryOffset:(UIOffset)arg1 ;
-(long long)keylineType;
-(BOOL)hasChevron;
@end

