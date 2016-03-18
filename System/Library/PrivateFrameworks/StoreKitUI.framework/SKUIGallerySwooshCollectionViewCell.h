/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class UIView, UIColor, UILabel, NSString;

@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell {

	UIView* _contentChildView;
	UIColor* _titleColor;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * contentChildView;              //@synthesize contentChildView=_contentChildView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setContentChildView:(UIView *)arg1 ;
-(UIView *)contentChildView;
@end

