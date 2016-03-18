/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITextSelectionForceGesture.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@protocol _UINonEditableTextSelectionForceGestureDelegate;
@class _UIKeyboardTextSelectionController, _UIKeyboardTextSelectionGestureController, NSString, UIKeyboardTaskQueue;

@interface _UINonEditableTextSelectionForceGesture : _UITextSelectionForceGesture <_UIKeyboardTextSelectionGestureControllerDelegate> {

	id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate;
	_UIKeyboardTextSelectionController* _textSelectionController;
	_UIKeyboardTextSelectionGestureController* _gestureController;

}

@property (assign,nonatomic) id<_UINonEditableTextSelectionForceGestureDelegate> forceGestureDelegate; 
@property (nonatomic,retain) _UIKeyboardTextSelectionController * textSelectionController;                          //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (assign,nonatomic) _UIKeyboardTextSelectionGestureController * gestureController;                         //@synthesize gestureController=_gestureController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
-(void)dealloc;
-(BOOL)_shouldDelayUntilForceLevelRequirementIsMet;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)setTextSelectionController:(_UIKeyboardTextSelectionController *)arg1 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)willBeginGesture;
-(id)initWithTextInput:(id)arg1 ;
-(id<_UINonEditableTextSelectionForceGestureDelegate>)forceGestureDelegate;
-(void)setForceGestureDelegate:(id<_UINonEditableTextSelectionForceGestureDelegate>)arg1 ;
-(_UIKeyboardTextSelectionGestureController *)gestureController;
-(void)setGestureController:(_UIKeyboardTextSelectionGestureController *)arg1 ;
@end

