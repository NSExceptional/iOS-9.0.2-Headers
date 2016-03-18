/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView {

	BOOL _showsThumb;
	BOOL _showsLine;
	UILabel* _currentTimeLabel;

}

@property (assign,nonatomic) BOOL showsThumb;                         //@synthesize showsThumb=_showsThumb - In the implementation block
@property (assign,nonatomic) BOOL showsLine;                          //@synthesize showsLine=_showsLine - In the implementation block
@property (nonatomic,readonly) double markerWidth; 
@property (nonatomic,readonly) double markerMidHeight; 
@property (nonatomic,readonly) CGRect currentTimeFrame; 
@property (nonatomic,retain) UILabel * currentTimeLabel;              //@synthesize currentTimeLabel=_currentTimeLabel - In the implementation block
+(id)timeMarkerFont;
+(double)_spacingAdjustmentFontSize;
-(void)setShowsThumb:(BOOL)arg1 ;
-(BOOL)showsThumb;
-(CGRect)currentTimeFrame;
-(void)invalidateFonts;
-(void)setShowsLine:(BOOL)arg1 ;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(UILabel *)currentTimeLabel;
-(void)_updateTimeWithForce:(BOOL)arg1 ;
-(void)_updateTimeLabelColor;
-(CGRect)_lineFrame;
-(double)markerMidHeight;
-(BOOL)showsLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)updateTime;
-(double)markerWidth;
@end

