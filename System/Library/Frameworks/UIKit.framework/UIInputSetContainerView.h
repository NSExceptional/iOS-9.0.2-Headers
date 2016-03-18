/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputSetHostView.h>
#import <UIKit/_UIViewHost.h>

@class UIScreen, UIKBRenderConfig, NSMutableDictionary, NSString;

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost> {

	UIKBRenderConfig* _renderConfig;
	NSMutableDictionary* _hostedViews;
	BOOL _disableGeometryObserverNotifications;
	CGPoint _offsetOrigin;

}

@property (assign,nonatomic) CGPoint offsetOrigin;                  //@synthesize offsetOrigin=_offsetOrigin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) UIScreen * hostingScreen; 
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)_notifyOnExplicitLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(BOOL)_disableGeometryObserverNotification;
-(void)_didRemoveSubview:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)_inheritedRenderConfig;
-(BOOL)hasHostedViews;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2 ;
-(UIScreen *)hostingScreen;
-(CGRect)_accessoryViewFrame;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(id)_inputWindowController;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
-(void)setOffsetOrigin:(CGPoint)arg1 ;
-(CGPoint)offsetOrigin;
@end

