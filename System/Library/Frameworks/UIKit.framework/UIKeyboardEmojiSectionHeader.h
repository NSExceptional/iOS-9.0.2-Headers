/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, NSString, UIColor;

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {

	UILabel* _emojiSectionHeader;

}

@property (nonatomic,copy) NSString * headerName; 
@property (nonatomic,copy) UIColor * headerTextColor; 
@property (assign,nonatomic) double headerFontSize; 
@property (assign,nonatomic) double headerOpacity; 
@property (assign,nonatomic) BOOL useVibrantBlend; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHeaderName:(NSString *)arg1 ;
-(void)setHeaderFontSize:(double)arg1 ;
-(void)setHeaderTextColor:(UIColor *)arg1 ;
-(void)setHeaderOpacity:(double)arg1 ;
-(void)setUseVibrantBlend:(BOOL)arg1 ;
-(NSString *)headerName;
-(UIColor *)headerTextColor;
-(double)headerFontSize;
-(double)headerOpacity;
-(BOOL)useVibrantBlend;
@end

