/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLEngineSyncEmergencyTaskDelegate.h>
#import <libobjc.A.dylib/CPLPushToTransportTaskDelegate.h>
#import <libobjc.A.dylib/CPLPullFromTransportTaskDelegate.h>
#import <libobjc.A.dylib/CPLMinglePulledChangesTaskDelegate.h>
#import <libobjc.A.dylib/CPLBackgroundUploadsTaskDelegate.h>
#import <libobjc.A.dylib/CPLBackgroundDownloadsTaskDelegate.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;
@class NSString, NSMutableArray, NSObject, NSError, CPLEngineSyncEmergencyTask, NSMutableDictionary, CPLPullFromTransportTask, CPLPushToTransportTask, CPLMinglePulledChangesTask, CPLBackgroundUploadsTask, CPLBackgroundDownloadsTask, CPLPlatformObject, CPLEngineLibrary;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncEmergencyTaskDelegate, CPLPushToTransportTaskDelegate, CPLPullFromTransportTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLBackgroundDownloadsTaskDelegate, CPLAbstractObject, CPLEngineComponent> {

	id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
	NSString* _libraryZoneName;
	BOOL _setupIsDone;
	id<CPLEngineTransportSetupTask> _setupTask;
	NSMutableArray* _setupBarriers;
	/*^block*/id _closingCompletionHandler;
	NSObject*<OS_dispatch_queue> _lock;
	NSError* _lastError;
	CPLEngineSyncEmergencyTask* _managementTask;
	NSMutableArray* _archivedManagementTasks;
	NSMutableDictionary* _completionHandlerPerTaskIdentifier;
	CPLPullFromTransportTask* _prePullTask;
	CPLPushToTransportTask* _pushTask;
	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;
	CPLBackgroundUploadsTask* _backgroundUploadsTask;
	CPLBackgroundDownloadsTask* _backgroundDownloadsTask;
	unsigned long long _shouldRestartSessionFromState;
	NSMutableArray* _lastErrors;
	BOOL _foreground;
	BOOL _hasTransactionForSyncSession;
	BOOL _shouldTryToMingleImmediately;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	unsigned long long _state;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;               //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (assign,setter=_setState:,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldTryToMingleImmediately;                       //@synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                    //@synthesize platformObject=_platformObject - In the implementation block
+(id)platformImplementationProtocol;
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)shortDescriptionForState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)_setState:(unsigned long long)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(CPLPlatformObject *)platformObject;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)startSyncSessionWithMinimalPhase:(unsigned long long)arg1 ;
-(void)kickOffSyncSession;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)cancelCurrentSyncSession;
-(void)resetTransportUserIdentifierAndRestartSync:(BOOL)arg1 ;
-(void)addSetupBarrier:(/*^block*/id)arg1 ;
-(id)task:(id)arg1 wantsToPushBatch:(id)arg2 progressBlock:(/*^block*/id)arg3 continuationBlock:(/*^block*/id)arg4 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(id)_descriptionForCurrentState;
-(void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1 ;
-(id)_descriptionForLaunchedTasks;
-(void)_cancelAllTasksForSetup;
-(void)_cancelAllTasksForManagement;
-(void)_cancelAllTasksForPrePull;
-(void)_cancelAllTasksForPush:(BOOL)arg1 ;
-(void)_cancelAllTasksForPull;
-(void)_cancelAllTasksForBackgroundUploads;
-(void)_cancelAllTasksForBackgroundDownloads;
-(id)_descriptionForSetupTasks;
-(id)_descriptionForManagementTasks;
-(id)_descriptionForPrePullTasks;
-(id)_descriptionForPushTasks;
-(id)_descriptionForPullTasks;
-(id)_descriptionForBackgroundUploadsTasks;
-(id)_descriptionForBackgroundDownloadsTasks;
-(BOOL)_launchSetupTask;
-(BOOL)_launchManagementTask;
-(BOOL)_launchNecessaryTasksForPrePull;
-(BOOL)_launchNecessaryTasksForPush;
-(BOOL)_launchNecessaryTasksForPull;
-(BOOL)_launchNecessaryTasksForBackgroundUploads;
-(BOOL)_launchNecessaryTasksForBackgroundDownloads;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(void)_notifyEndOfSyncSession;
-(void)_cancelAllTasksLocked;
-(void)_resetErrorForSyncSession;
-(void)_advanceToNextStateLocked;
-(void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 cancelIfNecessary:(BOOL)arg2 ;
-(void)_moveAllTasksToBackgroundLocked;
-(void)_setErrorForSyncSession:(id)arg1 ;
-(void)_saveManagementTasks;
-(BOOL)_prepareAndLaunchSyncTask:(id*)arg1 ;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
-(BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(BOOL)_didFinishManagementTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPrePullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishBackgroundUploadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(float)_progressForPrePullTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPushTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForPullTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForBackgroundUploadsTask:(id)arg1 progress:(float)arg2 ;
-(float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2 ;
-(void)_loadManagementTasks;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startEmergencyTask:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldTryToMingleImmediately;
-(void)setShouldTryToMingleImmediately:(BOOL)arg1 ;
@end

