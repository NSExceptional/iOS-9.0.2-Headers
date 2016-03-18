/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKBKeyViewAnimator.h>

@class NSMutableDictionary;

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator {

	NSMutableDictionary* _selectedKeyTimestamps;
	NSMutableDictionary* _transitionCompletions;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(BOOL)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 ;
-(long long)_transitionFromState:(int)arg1 toState:(int)arg2 ;
-(Class)keyViewClassForKey:(id)arg1 traits:(id)arg2 ;
-(unsigned long long)controlStateForKeyState:(int)arg1 ;
-(void)addTransitionCompletion:(/*^block*/id)arg1 forKeyName:(id)arg2 ;
-(void)transitionFloatingKeyView:(id)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateFloatingKeyView:(id)arg1 toControlState:(unsigned long long)arg2 ;
-(void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(/*^block*/id)arg4 ;
@end

