/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKeyPathDependencyRegistration.h>

@class AVWeakReference, AVWeakObservableCallbackCancellationHelper, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {

	AVWeakReference* _weakReferenceToDependencyHost;
	AVWeakObservableCallbackCancellationHelper* _callbackCancellationHelper;
	NSMutableSet* _keyPathDependencies;

}
-(id)initWithDependencyHost:(id)arg1 ;
-(void)dependencyHostIsFullyInitialized;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
-(void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2 ;
-(void)dealloc;
@end

