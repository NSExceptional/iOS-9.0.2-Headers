/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <UIKit/UIWindow.h>

@interface _SCNSnapshotWindow : UIWindow
-(id)scnView;
-(CGPoint)_warpPoint:(CGPoint)arg1 outOfBounds:(BOOL*)arg2 ;
-(double)windowLevelForEventHandling;
-(void)dealloc;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)_setFirstResponder:(id)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_isSettingFirstResponder;
@end
