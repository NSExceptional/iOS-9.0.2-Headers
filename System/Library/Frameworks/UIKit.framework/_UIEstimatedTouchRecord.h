/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UITouch, NSArray;

@interface _UIEstimatedTouchRecord : NSObject {

	NSMutableArray* _touchables;
	UITouch* _liveTouch;
	UITouch* _frozenTouch;

}

@property (retain,readonly) UITouch * liveTouch;                //@synthesize liveTouch=_liveTouch - In the implementation block
@property (retain,readonly) UITouch * frozenTouch;              //@synthesize frozenTouch=_frozenTouch - In the implementation block
@property (retain,readonly) NSArray * touchables;               //@synthesize touchables=_touchables - In the implementation block
-(id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 ;
-(void)addTouchable:(id)arg1 ;
-(void)removeTouchable:(id)arg1 ;
-(UITouch *)liveTouch;
-(UITouch *)frozenTouch;
-(NSArray *)touchables;
@end

