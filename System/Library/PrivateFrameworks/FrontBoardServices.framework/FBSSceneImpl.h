/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSScene.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>

@protocol FBSSceneDelegate, FBSSceneUpdater, OS_dispatch_queue;
@class NSString, FBSSceneSettings, FBSSceneClientSettings, CADisplay, FBSDisplay, FBSSerialQueue, NSObject, NSMutableArray;

@interface FBSSceneImpl : FBSScene <FBSSceneSnapshotRequestDelegate> {

	id<FBSSceneDelegate> _delegate;
	NSString* _identifier;
	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	id<FBSSceneUpdater> _updater;
	CADisplay* _display;
	FBSDisplay* _fbsDisplay;
	FBSSerialQueue* _callOutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _layers;
	BOOL _shouldObserveLayers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)delegate;
-(id)settings;
-(id)identifier;
-(id)fbsDisplay;
-(void)sendActions:(id)arg1 ;
-(id)display;
-(BOOL)invalidateSnapshotWithContext:(id)arg1 ;
-(BOOL)performSnapshotWithContext:(id)arg1 ;
-(id)layers;
-(void)attachLayer:(id)arg1 ;
-(void)detachLayer:(id)arg1 ;
-(id)initWithQueue:(id)arg1 identifier:(id)arg2 display:(id)arg3 settings:(id)arg4 clientSettings:(id)arg5 ;
-(id)clientSettings;
-(void)updateClientSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)updateClientSettingsWithTransitionBlock:(/*^block*/id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithInternalQueue:(id)arg1 callOutQueue:(id)arg2 updater:(id)arg3 identifier:(id)arg4 display:(id)arg5 settings:(id)arg6 clientSettings:(id)arg7 ;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)updater:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)contexts;
-(void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)attachSceneContext:(id)arg1 ;
-(void)detachSceneContext:(id)arg1 ;
-(void)attachContext:(id)arg1 ;
-(void)detachContext:(id)arg1 ;
-(id)snapshotRequest;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(void)_performDelegateCallOut:(/*^block*/id)arg1 ;
-(id)_initWithQueue:(id)arg1 callOutQueue:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(void)_updateLayer:(id)arg1 ;
-(void)_queue_configureReceivedActions:(id)arg1 ;
-(id)_initWithWorkspace:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(id)_initWithCallOutQueue:(id)arg1 updater:(id)arg2 identifier:(id)arg3 display:(id)arg4 settings:(id)arg5 clientSettings:(id)arg6 ;
-(BOOL)sceneLayerShouldObserveUpdates:(id)arg1 ;
-(void)sceneLayerDidUpdate:(id)arg1 ;
-(void)sceneLayerDidInvalidate:(id)arg1 ;
-(void)_queue_invalidate;
@end

