/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMapTable, NSHashTable, NSObject;

@interface FigCaptureSessionObservatory : NSObject {

	NSMapTable* _captureSessionsStorage;
	NSHashTable* _registeredObservers;
	NSObject*<OS_dispatch_queue> _queue;
	long long _lastRunningIdentifier;

}
+(void)initialize;
+(id)sharedObservatory;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)captureSessionWasCreated:(void*)arg1 ;
-(void)_registerObserver:(id)arg1 ;
-(void)_setRunning:(BOOL)arg1 forCaptureSession:(OpaqueFigCaptureSessionRef)arg2 ;
@end
