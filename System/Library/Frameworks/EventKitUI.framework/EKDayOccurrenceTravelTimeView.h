/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol EKDayOccurrenceTravelTimeViewMetricsDelegate;
@class UIImageView, UILabel, UIView, NSString, UIColor;

@interface EKDayOccurrenceTravelTimeView : UIView {

	UIImageView* _travelTimeIcon;
	UILabel* _travelTimeLabel;
	UIView* _horizontalLineView;
	BOOL _selected;
	int _occurrenceBackgroundStyle;
	id<EKDayOccurrenceTravelTimeViewMetricsDelegate> _delegate;
	NSString* _location;
	UIColor* _elementColor;
	UIColor* _lineColor;
	long long _routingMode;
	double _travelTime;
	double _hairlineYPosition;

}

@property (assign,nonatomic,__weak) id<EKDayOccurrenceTravelTimeViewMetricsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * location;                                                             //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * elementColor;                                                        //@synthesize elementColor=_elementColor - In the implementation block
@property (nonatomic,retain) UIColor * lineColor;                                                           //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                                 //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                                                 //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) long long routingMode;                                                         //@synthesize routingMode=_routingMode - In the implementation block
@property (assign,nonatomic) double travelTime;                                                             //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) double hairlineYPosition;                                                      //@synthesize hairlineYPosition=_hairlineYPosition - In the implementation block
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(id)_textFont;
-(UIColor *)elementColor;
-(void)setElementColor:(UIColor *)arg1 ;
-(long long)routingMode;
-(void)setRoutingMode:(long long)arg1 ;
-(void)_setupStringContent;
-(id)_travelTimeIconForTravelModeWithColor:(id)arg1 ;
-(double)_iconScale;
-(UIEdgeInsets)_parentPadding;
-(double)hairlineYPosition;
-(id)initWithReusableTravelTimeView:(id)arg1 ;
-(double)minimumNaturalHeightForPrimaryText;
-(void)setHairlineYPosition:(double)arg1 ;
-(void)_updateColors;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EKDayOccurrenceTravelTimeViewMetricsDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<EKDayOccurrenceTravelTimeViewMetricsDelegate>)delegate;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)location;
-(BOOL)selected;
-(void)setLocation:(NSString *)arg1 ;
-(void)setTravelTime:(double)arg1 ;
-(double)travelTime;
@end

