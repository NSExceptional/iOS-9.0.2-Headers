/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKeyboardTextSelectionGestureController.h>

@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController {

	BOOL _delayForceMagnify;
	BOOL _didLongForcePress;

}

@property (assign,nonatomic) BOOL delayForceMagnify;              //@synthesize delayForceMagnify=_delayForceMagnify - In the implementation block
@property (assign,nonatomic) BOOL didLongForcePress;              //@synthesize didLongForcePress=_didLongForcePress - In the implementation block
+(id)sharedInstance;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_cleanupDeadGesturesIfNecessary;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(double)oneFingerForcePressMinimumDuration;
-(BOOL)oneFingerForcePressShouldFailWithoutForce;
-(BOOL)allowOneFingerDeepPress;
-(void)setDelayForceMagnify:(BOOL)arg1 ;
-(BOOL)delayForceMagnify;
-(BOOL)didLongForcePress;
-(void)transitionFromBlockMagnifyToBlockSelectWithLocation:(CGPoint)arg1 viaDrag:(BOOL)arg2 ;
-(void)setDidLongForcePress:(BOOL)arg1 ;
@end

