/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:18 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIIPhoneProductPageView : UIView {

	UIView* _view;
	UIView* _bannerView;
	double _bannerOffset;

}

@property (nonatomic,retain) UIView * view;                    //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) double bannerOffset;              //@synthesize bannerOffset=_bannerOffset - In the implementation block
-(UIView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setBannerView:(UIView *)arg1 ;
-(void)animateYPosition:(double)arg1 ;
-(double)bannerOffset;
-(void)setBannerOffset:(double)arg1 ;
@end
