/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) BOOL minimized; 
@required
-(BOOL)isActive;
-(BOOL)isMinimized;
-(BOOL)shouldSaveMinimizationState;
-(void)setMinimized:(BOOL)arg1;
-(BOOL)isAutomatic;
-(BOOL)canDismiss;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;

@end
