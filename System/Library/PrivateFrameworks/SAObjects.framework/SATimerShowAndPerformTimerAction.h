/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SATimerShowAndPerformTimerAction : SABaseClientBoundCommand

@property (nonatomic,retain) id<SATimerTimerAction> timerAction; 
+(id)showAndPerformTimerAction;
+(id)showAndPerformTimerActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id<SATimerTimerAction>)timerAction;
-(void)setTimerAction:(id<SATimerTimerAction>)arg1 ;
@end

