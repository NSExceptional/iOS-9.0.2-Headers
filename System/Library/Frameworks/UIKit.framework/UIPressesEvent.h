/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIEvent.h>

@class NSMutableSet, UIPress;

@interface UIPressesEvent : UIEvent {

	NSMutableSet* _allPresses;
	BOOL __isFromGameControllerStickControl;
	UIPress* _triggeringPhysicalButton;

}

@property (nonatomic,retain) UIPress * _triggeringPhysicalButton;                                                              //@synthesize triggeringPhysicalButton=_triggeringPhysicalButton - In the implementation block
@property (assign,setter=_setIsFromGameControllerStickControl:,nonatomic) BOOL _isFromGameControllerStickControl;              //@synthesize _isFromGameControllerStickControl=__isFromGameControllerStickControl - In the implementation block
-(id)description;
-(id)_init;
-(void)_addPhysicalButton:(id)arg1 ;
-(id)allPresses;
-(void)set_triggeringPhysicalButton:(UIPress *)arg1 ;
-(void)_setIsFromGameControllerStickControl:(BOOL)arg1 ;
-(long long)type;
-(void)_removePhysicalButton:(id)arg1 ;
-(id)pressesForGestureRecognizer:(id)arg1 ;
-(id)_windows;
-(long long)subtype;
-(UIPress *)_triggeringPhysicalButton;
-(BOOL)_isFromGameControllerStickControl;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 withPhase:(long long)arg2 ;
-(id)_respondersForWindow:(id)arg1 ;
-(id)_physicalButtonsForResponder:(id)arg1 withPhase:(long long)arg2 ;
-(id)_allPhysicalButtons;
-(id)_physicalButtonsForResponder:(id)arg1 ;
-(id)_physicalButtonsForGestureRecognizer:(id)arg1 ;
-(id)_allPresses;
-(id)physicalButtonsForWindow:(id)arg1 ;
-(void)_addGesturesForPress:(id)arg1 ;
-(id)_directionalPressWithStrongestForce;
@end

