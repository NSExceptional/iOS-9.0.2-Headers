/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSMutableSceneClientSettings.h>
#import <UIKit/UIApplicationSceneClientSettings.h>

@class NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>

@property (assign,nonatomic) long long statusBarStyle; 
@property (assign,nonatomic) BOOL statusBarHidden; 
@property (assign,nonatomic) unsigned statusBarContextID; 
@property (assign,nonatomic) long long defaultStatusBarStyle; 
@property (assign,nonatomic) BOOL defaultStatusBarHidden; 
@property (nonatomic,copy) NSString * defaultPNGName; 
@property (assign,nonatomic) double defaultPNGExpirationTime; 
@property (assign,nonatomic) long long compatibilityMode; 
@property (assign,nonatomic) BOOL deviceOrientationEventsEnabled; 
@property (assign,nonatomic) BOOL interfaceOrientationChangesDisabled; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations; 
@property (assign,nonatomic) BOOL idleTimerDisabled; 
@property (assign,nonatomic) unsigned long long proximityDetectionModes; 
@property (assign,nonatomic) long long controlCenterRevealMode; 
@property (assign,nonatomic) long long notificationCenterRevealMode; 
@property (assign,nonatomic) UIEdgeInsets primaryWindowOverlayInsets; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) BOOL idleModeVisualEffectsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)interfaceOrientation;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(BOOL)isUISubclass;
-(BOOL)statusBarHidden;
-(long long)statusBarStyle;
-(void)setStatusBarContextID:(unsigned)arg1 ;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDefaultStatusBarStyle:(long long)arg1 ;
-(void)setDefaultStatusBarHidden:(BOOL)arg1 ;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)setDefaultPNGName:(NSString *)arg1 ;
-(void)setDefaultPNGExpirationTime:(double)arg1 ;
-(void)setCompatibilityMode:(long long)arg1 ;
-(unsigned long long)proximityDetectionModes;
-(void)setProximityDetectionModes:(unsigned long long)arg1 ;
-(long long)compatibilityMode;
-(void)setIdleModeVisualEffectsEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrimaryWindowOverlayInsets:(UIEdgeInsets)arg1 ;
-(NSString *)defaultPNGName;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(void)setDeviceOrientationEventsEnabled:(BOOL)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)deviceOrientationEventsEnabled;
-(unsigned)statusBarContextID;
-(long long)defaultStatusBarStyle;
-(BOOL)defaultStatusBarHidden;
-(double)defaultPNGExpirationTime;
-(BOOL)interfaceOrientationChangesDisabled;
-(BOOL)idleTimerDisabled;
-(long long)controlCenterRevealMode;
-(long long)notificationCenterRevealMode;
-(UIEdgeInsets)primaryWindowOverlayInsets;
-(BOOL)idleModeVisualEffectsEnabled;
-(void)setInterfaceOrientationChangesDisabled:(BOOL)arg1 ;
-(void)setControlCenterRevealMode:(long long)arg1 ;
-(void)setNotificationCenterRevealMode:(long long)arg1 ;
@end

