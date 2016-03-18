/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIAlertManager : NSObject
+(void)noteOrientationChangingTo:(long long)arg1 ;
+(void)hideAlertsForTermination;
+(void)initialize;
+(void)noteOrientationChangingTo:(long long)arg1 animated:(BOOL)arg2 ;
+(id)visibleAlert;
+(void)reorientAlertWindowTo:(long long)arg1 animated:(BOOL)arg2 keyboard:(id)arg3 ;
+(void)tellSpringboardShowingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3 ;
+(BOOL)hideTopMostAlertAnimated:(BOOL)arg1 ;
+(BOOL)stackContainsAlert:(id)arg1 ;
+(void)tellSpringboardHidingAlert:(id)arg1 animated:(BOOL)arg2 forSpringBoardAlertTransition:(BOOL)arg3 ;
+(void)sizeAlertWindowForCurrentOrientation;
+(void)addToStack:(id)arg1 dontDimBackground:(BOOL)arg2 ;
+(void)createAlertWindowIfNeeded:(BOOL)arg1 ;
+(id)topMostAlert;
+(void)removeFromStack:(id)arg1 ;
+(BOOL)cancelTopMostAlertAnimated:(BOOL)arg1 ;
+(CGAffineTransform)calculatedAlertTransform;
+(void)_applyAlertTransforms;
+(void)applyInternalWindowTransform:(CGAffineTransform)arg1 ;
+(void)alertWindowAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
+(void)hideDimmingViewAnimated:(BOOL)arg1 ;
+(void)createAlertWindowIfNeeded:(BOOL)arg1 deferDisplay:(BOOL)arg2 ;
+(BOOL)cancelAlertsAnimated:(BOOL)arg1 ;
+(CGAffineTransform)_alertTranslationForInterfaceOrientation:(long long)arg1 andTranslation:(double)arg2 ;
+(void)applyClientWindowTransform:(CGAffineTransform)arg1 ;
+(void)showDimmingViewAnimated:(BOOL)arg1 ;
+(void)alertPopoutCompleted;
-(void)_didHideDimmingView:(id)arg1 finished:(id)arg2 ;
@end

