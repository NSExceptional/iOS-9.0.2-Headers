/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UITextView, SPUISearchMovie;

@interface SPUISearchMovieCell : UICollectionViewCell {

	UIImageView* _posterImageView;
	UILabel* _titleLabel;
	UITextView* _infoTextView;
	SPUISearchMovie* _movie;

}

@property (assign) UIImageView * posterImageView;              //@synthesize posterImageView=_posterImageView - In the implementation block
@property (assign) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign) UITextView * infoTextView;                  //@synthesize infoTextView=_infoTextView - In the implementation block
@property (retain) SPUISearchMovie * movie;                    //@synthesize movie=_movie - In the implementation block
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(SPUISearchMovie *)movie;
-(void)setMovie:(SPUISearchMovie *)arg1 ;
-(UITextView *)infoTextView;
-(UIImageView *)posterImageView;
-(void)setPosterImageView:(UIImageView *)arg1 ;
-(void)setInfoTextView:(UITextView *)arg1 ;
@end

