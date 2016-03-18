/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@protocol MTDateLabelObserver;
@class NSTimeZone, NSDate, UILabel, NSArray, UIColor, UIFont;

@interface MTDateLabel : UIView {

	NSTimeZone* _timeZone;
	BOOL _hideTimeDesignator;
	NSDate* _date;
	UILabel* _dateLabel;
	UILabel* _timeDesignatorLabel;
	double _paddingFromTimeToDesignator;
	id<MTDateLabelObserver> _observer;
	NSArray* _currentConstraints;

}

@property (nonatomic,copy) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (nonatomic,readonly) UILabel * dateLabel;                                //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timeDesignatorLabel;                      //@synthesize timeDesignatorLabel=_timeDesignatorLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) BOOL hasTimeDesignator; 
@property (assign,nonatomic) BOOL hideTimeDesignator;                              //@synthesize hideTimeDesignator=_hideTimeDesignator - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                   //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
@property (assign,nonatomic,__weak) id<MTDateLabelObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (retain) NSArray * currentConstraints;                                   //@synthesize currentConstraints=_currentConstraints - In the implementation block
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)viewForBaselineLayout;
-(UIFont *)font;
-(UIColor *)textColor;
-(void)updateConstraints;
-(id<MTDateLabelObserver>)observer;
-(void)setObserver:(id<MTDateLabelObserver>)arg1 ;
-(UIFont *)timeDesignatorFont;
-(void)setDate:(NSDate *)arg1 ;
-(double)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
-(NSTimeZone *)timeZone;
-(UILabel *)dateLabel;
-(void)setTimeDesignatorFont:(UIFont *)arg1 ;
-(void)setHideTimeDesignator:(BOOL)arg1 ;
-(void)_updateDateString;
-(BOOL)hasTimeDesignator;
-(void)_noteLayoutChange;
-(UILabel *)timeDesignatorLabel;
-(BOOL)hideTimeDesignator;
@end

