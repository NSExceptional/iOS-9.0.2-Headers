/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIInputViewSet;


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) UIView * hostView; 
@property (nonatomic,readonly) UIInputViewSet * inputViewSet; 
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@required
-(UIView *)hostView;
-(UIInputViewSet *)inputViewSet;
-(BOOL)isOnScreenRotating;
-(void)checkPlaceholdersForRemoteKeyboards;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;

@end
