/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewControllerDelegate <NSObject>
@optional
-(void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
-(void)dayViewControllerIsPinchingDayView:(id)arg1;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
-(void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
-(void)dayViewControllerDidReloadData:(id)arg1;
-(void)dayViewControllerDidUpdateScrollPosition:(id)arg1;
-(void)dayViewControllerDidTapEmptySpace:(id)arg1;
-(id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(BOOL)arg3;
-(BOOL)dayViewControllerShouldAllowLongPress:(id)arg1;
-(void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
-(void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
-(BOOL)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
-(BOOL)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
-(void)dayViewController:(id)arg1 didScrollToDate:(id)arg2 normalizedOffset:(double)arg3;
-(void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
-(void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
-(void)dayViewControllerDidBeginScrolling:(id)arg1;
-(void)dayViewControllerDidEndScrolling:(id)arg1;
-(BOOL)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
-(void)updateSelectedOccurrenceView;

@required
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(BOOL)arg3;
-(void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;

@end

