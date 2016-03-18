/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {

	BOOL _timerOn;
	long long _delayIndex;
	unsigned long long _numberOfTouchesRequired;
	double _force;
	unsigned long long _changeCount;

}

@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;                //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,setter=_setButtonType:,nonatomic) long long _buttonType; 
@property (nonatomic,readonly) double _force;                                           //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) unsigned long long changeCount;                            //@synthesize changeCount=_changeCount - In the implementation block
+(double)delayForRepeatNumber:(long long)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)_buttonType;
-(void)setView:(id)arg1 ;
-(unsigned long long)changeCount;
-(void)setChangeCount:(unsigned long long)arg1 ;
-(void)_setButtonType:(long long)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(void)_resetGestureRecognizer;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(void)_clearTapTimer;
-(void)_beginPress;
-(void)_endPress;
-(void)_cancelPress;
-(void)_changePress;
-(void)_scheduleNextTimer;
-(void)_nextStep:(id)arg1 ;
-(void)_finishNextStep:(id)arg1 ;
-(double)_force;
@end

