/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCExtendedGamepad : NSObject

@property (nonatomic,__weak,readonly) GCController * controller; 
@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) GCControllerDirectionPad * dpad; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonA; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonB; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonX; 
@property (nonatomic,readonly) GCControllerButtonInput * buttonY; 
@property (nonatomic,readonly) GCControllerDirectionPad * leftThumbstick; 
@property (nonatomic,readonly) GCControllerDirectionPad * rightThumbstick; 
@property (nonatomic,readonly) GCControllerButtonInput * leftShoulder; 
@property (nonatomic,readonly) GCControllerButtonInput * rightShoulder; 
@property (nonatomic,readonly) GCControllerButtonInput * leftTrigger; 
@property (nonatomic,readonly) GCControllerButtonInput * rightTrigger; 
+(BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
-(id)saveSnapshot;
-(GCControllerDirectionPad *)dpad;
-(GCControllerButtonInput *)buttonA;
-(GCControllerButtonInput *)buttonB;
-(GCControllerButtonInput *)buttonX;
-(GCControllerButtonInput *)buttonY;
-(GCControllerButtonInput *)leftShoulder;
-(GCControllerButtonInput *)rightShoulder;
-(GCControllerDirectionPad *)leftThumbstick;
-(GCControllerDirectionPad *)rightThumbstick;
-(GCControllerButtonInput *)leftTrigger;
-(GCControllerButtonInput *)rightTrigger;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)button0;
-(id)button1;
-(id)button3;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(id)initWithController:(id)arg1 ;
-(GCController *)controller;
-(id)button2;
@end

