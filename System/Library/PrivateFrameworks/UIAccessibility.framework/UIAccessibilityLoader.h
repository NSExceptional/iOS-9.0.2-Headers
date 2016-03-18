/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIAccessibilityLoader : NSObject
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 loadSubbundles:(BOOL)arg3 ;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
+(void)initialize;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(BOOL*)arg2 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(BOOL*)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 ;
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(BOOL*)arg2 force:(BOOL)arg3 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)_axAssertCheckNoOneHasTheirAccessibilityCategoriesInstalled;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(BOOL)_accessibilityServerStarted;
@end

