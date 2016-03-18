/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLCloudScenarioProducer.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudLegacyPruneAgent : PLCloudScenarioProducer {

	long long _lastPruneRequest;
	NSObject*<OS_dispatch_queue> _agentQueue;
	SCD_Struct_PL26 _walkStatus[7];
	PLPhotoLibrary* _localLibrary;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}

@property (retain) PLPhotoLibrary * localLibrary;                           //@synthesize localLibrary=_localLibrary - In the implementation block
@property (retain) PLCloudPhotoLibraryManager * remoteLibrary;              //@synthesize remoteLibrary=_remoteLibrary - In the implementation block
-(unsigned long long)batchSize;
-(void)dealloc;
-(id)init;
-(void)activate;
-(void)systemStarted:(id)arg1 ;
-(BOOL)spaceAvailable:(long long*)arg1 totalSpace:(long long*)arg2 ;
-(void)_runOnAgentQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)pruningEnabled;
-(int)typeToIndex:(unsigned long long)arg1 ;
-(void)_beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned long long)arg3 then:(/*^block*/id)arg4 ;
-(void)pruneResources:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginPruningResourcesOfType:(unsigned long long)arg1 withFetchRequest:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)_runOnAgentQueueWithTransaction:(id)arg1 delay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned long long)arg2 startingAtOffset:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(PLCloudPhotoLibraryManager *)remoteLibrary;
-(void)pruneOlderMediums;
-(void)pruneResourcesOfType:(unsigned long long)arg1 createdBeforeDate:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)pruneResourcesOfType:(unsigned long long)arg1 then:(/*^block*/id)arg2 ;
-(void)pruneOlderOriginals;
-(void)appInForeground:(id)arg1 ;
-(void)standardPruningKick:(id)arg1 ;
-(void)settingsChanged:(id)arg1 ;
-(void)cacheDeleteRequestReceived:(id)arg1 ;
-(void)setLocalLibrary:(PLPhotoLibrary *)arg1 ;
-(void)setRemoteLibrary:(PLCloudPhotoLibraryManager *)arg1 ;
-(void)resetWalkStatus;
-(void)pruneResources;
-(void)emergencyPrune;
-(PLPhotoLibrary *)localLibrary;
@end

