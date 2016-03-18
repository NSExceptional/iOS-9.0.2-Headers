/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ABLabelViewWithVariablePositioning : UIView {

	UILabel* _label;
	double _topPadding;
	double _bottomPadding;
	double _horizontalPadding;

}

@property (assign,nonatomic) double topPadding;                     //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                  //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) double horizontalPadding;              //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(void)setLabelShadowColor:(id)arg1 ;
-(void)setLabelShadowOffset:(CGSize)arg1 ;
-(double)topPadding;
-(void)setLabelTextColor:(id)arg1 ;
-(void)setLabelFont:(id)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(double)bottomPadding;
-(void)setBottomPadding:(double)arg1 ;
-(void)setLabelText:(id)arg1 ;
@end

