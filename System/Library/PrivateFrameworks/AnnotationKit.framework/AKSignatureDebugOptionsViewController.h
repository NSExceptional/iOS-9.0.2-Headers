/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UILabel, UISlider;

@interface AKSignatureDebugOptionsViewController : UIViewController {

	double _minInValue;
	double _maxInValue;
	double _minOutValue;
	double _maxOutValue;
	/*^block*/id _completionHandler;
	UILabel* _minInValueLabel;
	UISlider* _minInValueSlider;
	UILabel* _maxInValueLabel;
	UISlider* _maxInValueSlider;
	UILabel* _minOutValueLabel;
	UISlider* _minOutValueSlider;
	UILabel* _maxOutValueLabel;
	UISlider* _maxOutValueSlider;

}

@property (assign,nonatomic) double minInValue;                         //@synthesize minInValue=_minInValue - In the implementation block
@property (assign,nonatomic) double maxInValue;                         //@synthesize maxInValue=_maxInValue - In the implementation block
@property (assign,nonatomic) double minOutValue;                        //@synthesize minOutValue=_minOutValue - In the implementation block
@property (assign,nonatomic) double maxOutValue;                        //@synthesize maxOutValue=_maxOutValue - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UILabel * minInValueLabel;                 //@synthesize minInValueLabel=_minInValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * minInValueSlider;               //@synthesize minInValueSlider=_minInValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * maxInValueLabel;                 //@synthesize maxInValueLabel=_maxInValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * maxInValueSlider;               //@synthesize maxInValueSlider=_maxInValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * minOutValueLabel;                //@synthesize minOutValueLabel=_minOutValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * minOutValueSlider;              //@synthesize minOutValueSlider=_minOutValueSlider - In the implementation block
@property (nonatomic,retain) UILabel * maxOutValueLabel;                //@synthesize maxOutValueLabel=_maxOutValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * maxOutValueSlider;              //@synthesize maxOutValueSlider=_maxOutValueSlider - In the implementation block
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)setMinInValue:(double)arg1 ;
-(void)setMaxInValue:(double)arg1 ;
-(void)setMinOutValue:(double)arg1 ;
-(void)setMaxOutValue:(double)arg1 ;
-(double)minInValue;
-(double)maxInValue;
-(double)minOutValue;
-(double)maxOutValue;
-(UISlider *)minInValueSlider;
-(UISlider *)maxInValueSlider;
-(UISlider *)minOutValueSlider;
-(UISlider *)maxOutValueSlider;
-(UILabel *)minInValueLabel;
-(double)_updateSlider:(id)arg1 andLabel:(id)arg2 withValue:(double)arg3 andLabelFormat:(id)arg4 ;
-(UILabel *)maxInValueLabel;
-(UILabel *)minOutValueLabel;
-(UILabel *)maxOutValueLabel;
-(void)sliderValueChanged:(id)arg1 ;
-(void)applyChanges:(id)arg1 ;
-(void)setMinInValueLabel:(UILabel *)arg1 ;
-(void)setMinInValueSlider:(UISlider *)arg1 ;
-(void)setMaxInValueLabel:(UILabel *)arg1 ;
-(void)setMaxInValueSlider:(UISlider *)arg1 ;
-(void)setMinOutValueLabel:(UILabel *)arg1 ;
-(void)setMinOutValueSlider:(UISlider *)arg1 ;
-(void)setMaxOutValueLabel:(UILabel *)arg1 ;
-(void)setMaxOutValueSlider:(UISlider *)arg1 ;
@end

