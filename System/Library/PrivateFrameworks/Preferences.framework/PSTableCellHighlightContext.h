/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, UITableViewCell;

@interface PSTableCellHighlightContext : NSObject {

	NSTimer* _timer;
	BOOL _animateUnhighlight;
	BOOL _valid;
	UITableViewCell* _cell;
	long long _originalSelectionStyle;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,readonly) BOOL animateUnhighlight;                     //@synthesize animateUnhighlight=_animateUnhighlight - In the implementation block
@property (assign,nonatomic) long long originalSelectionStyle;              //@synthesize originalSelectionStyle=_originalSelectionStyle - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                  //@synthesize valid=_valid - In the implementation block
+(id)contextWithCell:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(UITableViewCell *)cell;
-(BOOL)valid;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)_timerFired;
-(void)_killTimer;
-(void)performHighlightForDuration:(double)arg1 animateUnhighlight:(BOOL)arg2 ;
-(BOOL)animateUnhighlight;
-(long long)originalSelectionStyle;
-(void)setOriginalSelectionStyle:(long long)arg1 ;
@end

