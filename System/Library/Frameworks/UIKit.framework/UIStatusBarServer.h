/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIStatusBarServerClient;
#import <UIKit/UIKit-Structs.h>
@interface UIStatusBarServer : NSObject {

	id<UIStatusBarServerClient> _statusBar;
	CFRunLoopSourceRef _source;

}

@property (nonatomic,retain) id<UIStatusBarServerClient> statusBar;              //@synthesize statusBar=_statusBar - In the implementation block
+(void)runServer;
+(void)addStyleOverrides:(int)arg1 ;
+(void)removeStyleOverrides:(int)arg1 ;
+(void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
+(void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2 ;
+(void)addStatusBarItem:(int)arg1 ;
+(void)removeStatusBarItem:(int)arg1 ;
+(double)getGlowAnimationEndTimeForStyle:(long long)arg1 ;
+(unsigned)_serverPort;
+(unsigned)_publisherPort;
+(void)postStatusBarData:(const SCD_Struct_UI74*)arg1 withActions:(int)arg2 ;
+(void)postStatusBarOverrideData:(SCD_Struct_UI75*)arg1 ;
+(void)permanentizeStatusBarOverrideData;
+(const SCD_Struct_UI74*)getStatusBarData;
+(SCD_Struct_UI75*)getStatusBarOverrideData;
+(int)getStyleOverrides;
+(BOOL)getGlowAnimationStateForStyle:(long long)arg1 ;
+(id)getDoubleHeightStatusStringForStyle:(long long)arg1 ;
-(void)dealloc;
-(id<UIStatusBarServerClient>)statusBar;
-(void)setStatusBar:(id<UIStatusBarServerClient>)arg1 ;
-(void)_receivedStatusBarData:(SCD_Struct_UI74*)arg1 actions:(int)arg2 ;
-(void)_receivedStyleOverrides:(int)arg1 ;
-(void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_receivedDoubleHeightStatus:(const char*)arg1 forStyle:(long long)arg2 ;
-(id)initWithStatusBar:(id)arg1 ;
@end

