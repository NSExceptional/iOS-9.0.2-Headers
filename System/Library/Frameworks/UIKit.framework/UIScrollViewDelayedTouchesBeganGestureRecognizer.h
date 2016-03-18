/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UIDelayedAction;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {

	UIDelayedAction* _touchDelay;
	CGPoint _startSceneReferenceLocation;

}
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)sendDelayedTouches;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)sendTouchesShouldBeginForDelayedTouches:(id)arg1 ;
-(void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2 ;
@end

