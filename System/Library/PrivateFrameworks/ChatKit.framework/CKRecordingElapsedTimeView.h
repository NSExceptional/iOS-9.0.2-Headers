/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSTimer, NSDate;

@interface CKRecordingElapsedTimeView : UIView {

	UILabel* __timeLabel;
	UIView* __recordingDotView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,retain,readonly) UILabel * _timeLabel;                    //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * _recordingDotView;              //@synthesize _recordingDotView=__recordingDotView - In the implementation block
@property (nonatomic,retain,readonly) NSTimer * _updateTimer;                  //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,retain,readonly) NSDate * _startTime;                     //@synthesize _startTime=__startTime - In the implementation block
-(NSDate *)_startTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetTimer;
-(void)startTimer;
-(void)_update:(id)arg1 ;
-(UILabel *)_timeLabel;
-(void)_commonCAMElapsedTimeViewInitialization;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(UIView *)_recordingDotView;
-(NSTimer *)_updateTimer;
@end

