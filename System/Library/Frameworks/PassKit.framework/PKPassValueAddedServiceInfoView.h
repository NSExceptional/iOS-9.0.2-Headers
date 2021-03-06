/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class PKPass, PKPassSnapshotter, UILabel, UIImageView;

@interface PKPassValueAddedServiceInfoView : UIView {

	long long _style;
	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UILabel* _labelView;
	UIImageView* _snapshotView;
	UILabel* _statusView;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) PKPass * pass;                //@synthesize pass=_pass - In the implementation block
-(id)_statusAttributedStringForStyle:(long long)arg1 ;
-(CGSize)_snapshotSize;
-(void)_calculateViewMetricsForWidth:(double)arg1 labelSize:(CGSize*)arg2 statusSize:(CGSize*)arg3 baselineAdjustment:(double*)arg4 ;
-(double)_baselineDistance;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPass:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_labelAttributedStringForString:(id)arg1 ;
-(id)_statusFont;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)_labelFont;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
@end

