/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AXBinaryMonitor : NSObject {

	NSMutableDictionary* _bundleHandlerMap;
	NSMutableDictionary* _frameworkHandlerMap;
	NSMutableDictionary* _dylibHandlerMap;
	NSObject*<OS_dispatch_queue> _binaryMonitorQueue;

}

@property (nonatomic,retain) NSMutableDictionary * bundleHandlerMap;                       //@synthesize bundleHandlerMap=_bundleHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * frameworkHandlerMap;                    //@synthesize frameworkHandlerMap=_frameworkHandlerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dylibHandlerMap;                        //@synthesize dylibHandlerMap=_dylibHandlerMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> binaryMonitorQueue;              //@synthesize binaryMonitorQueue=_binaryMonitorQueue - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)setBundleHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setFrameworkHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setDylibHandlerMap:(NSMutableDictionary *)arg1 ;
-(void)setBinaryMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_addHandler:(/*^block*/id)arg1 withName:(id)arg2 toMap:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)binaryMonitorQueue;
-(void)_handleLoadedImagePath:(id)arg1 ;
-(BOOL)_loadImageIsFramework:(id)arg1 ;
-(id)_frameworkNameForImage:(id)arg1 ;
-(NSMutableDictionary *)frameworkHandlerMap;
-(BOOL)_loadImageIsBundle:(id)arg1 ;
-(id)_bundleNameForImage:(id)arg1 ;
-(NSMutableDictionary *)bundleHandlerMap;
-(BOOL)_loadImageIsDylib:(id)arg1 ;
-(id)_dylibNameForImage:(id)arg1 ;
-(NSMutableDictionary *)dylibHandlerMap;
-(void)addHandler:(/*^block*/id)arg1 forBundleID:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forBundleName:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forFramework:(id)arg2 ;
-(void)addHandler:(/*^block*/id)arg1 forDylib:(id)arg2 ;
@end

