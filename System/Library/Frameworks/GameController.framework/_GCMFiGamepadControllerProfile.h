/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCGamepad.h>
#import <libobjc.A.dylib/_GCACHomeButtonDelegate.h>

@class _GCACHomeButton, GCMotion, NSString;

@interface _GCMFiGamepadControllerProfile : _GCGamepad <_GCACHomeButtonDelegate> {

	_GCACHomeButton* _acHome;
	GCMotion* _motion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)motion;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)handleReport:(unsigned)arg1 data:(id)arg2 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)set_motion:(id)arg1 ;
-(void)toggleSuspendResume;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
@end

