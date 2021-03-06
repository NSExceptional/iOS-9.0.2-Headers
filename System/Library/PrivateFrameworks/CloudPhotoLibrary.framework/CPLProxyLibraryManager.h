/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <libobjc.A.dylib/CPLClientLibraryManagerProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerImplementation.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSCountedSet, NSMutableArray, NSObject, NSString;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation> {

	NSXPCConnection* _connection;
	NSMutableDictionary* _downloadTasks;
	NSMutableDictionary* _uploadTasks;
	BOOL _diagnosticsEnabled;
	unsigned long long _foregroundCalls;
	NSCountedSet* _disablingReasons;
	NSMutableDictionary* _outstandingInvocations;
	unsigned long long _outstandingInvocationsCount;
	NSMutableArray* _pendingBlocksAfterOpening;
	int _openingStatus;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProtocolInterface;
+(id)clientProtocolInterface;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)barrier;
-(void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetStatus;
-(void)noteClientReceivedNotificationOfServerChanges;
-(BOOL)diagnosticsEnabled;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(void)downloadDidStartForResourceTransferTask:(id)arg1 ;
-(void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2 ;
-(void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3 ;
-(void)backgroundDownloadDidFinishForResource:(id)arg1 ;
-(void)backgroundDownloadDidFailForResource:(id)arg1 ;
-(void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2 ;
-(void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManagerHasChangesToPull;
-(void)libraryManagerDidUpdateStatusWithProperties:(id)arg1 ;
-(void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5 ;
-(id)proxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_setStatusFromDictionary:(id)arg1 ;
-(void)_reallyOpenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_dispatchBlockWhenOpen:(/*^block*/id)arg1 ;
-(void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1 ;
-(id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2 ;
-(void)dispatchBlockWhenLibraryIsOpen:(/*^block*/id)arg1 ;
-(void)cancelTask:(id)arg1 ;
-(void)deactivateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSyncSession;
-(void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addInfoToLog:(id)arg1 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)removeCloudLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
@end

