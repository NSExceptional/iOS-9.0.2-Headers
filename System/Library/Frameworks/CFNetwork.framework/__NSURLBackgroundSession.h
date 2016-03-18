/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLSession.h>
#import <libobjc.A.dylib/NDBackgroundSessionClient.h>
#import <libobjc.A.dylib/NSURLSessionSubclass.h>

@protocol NDBackgroundSessionProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSMutableArray, NSObject, NSString, NSURL, NSError;

@interface __NSURLBackgroundSession : __NSCFURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {

	unsigned long long _identSeed;
	id<NDBackgroundSessionProtocol> _remoteSession;
	NSXPCConnection* _xpcConn;
	NSMutableDictionary* _tasks;
	NSMutableArray* _taskIDsToFailOnReconnection;
	NSObject*<OS_dispatch_queue> _invalidateQueue;
	/*^block*/id _invalidateCallback;
	NSString* _appWakeUUID;
	NSURL* _downloadDirectory;
	BOOL _isPrivileged;
	BOOL _isInvalid;
	BOOL _companionAvailable;
	unsigned long long _wifiRetainCount;
	NSError* _invalidationError;
	BOOL _tryToReconnect;

}

@property (getter=isCompanionAvailable) BOOL companionAvailable;              //@synthesize companionAvailable=_companionAvailable - In the implementation block
@property (copy) NSString * appWakeUUID;                                      //@synthesize appWakeUUID=_appWakeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_invokeInvalidateCallback;
-(id)copyTasks;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_onqueue_invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_completeInvalidation:(BOOL)arg1 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)backgroundDownloadsDirectory;
-(void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3 ;
-(id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1 ;
-(void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1 ;
-(id)cachesDirectory;
-(void)setupXPCConnection;
-(void)setupBackgroundSession;
-(void)sendInvalidationRequest;
-(void)cleanupConfig;
-(void)wentToBackground:(id)arg1 ;
-(void)cameIntoForeground:(id)arg1 ;
-(void)recreateExistingTasks:(id)arg1 ;
-(void)failDisconnectedTasks;
-(id)taskForIdentifier:(unsigned long long)arg1 ;
-(void)_onqueue_retryDataTaskWithIdentifier:(unsigned long long)arg1 ;
-(id)disconnectedErrorWithURL:(id)arg1 ;
-(id)_onqueue_dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performBlockOnQueueAndRethrowExceptions:(/*^block*/id)arg1 ;
-(void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2 ;
-(id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3 ;
-(id)requestWithCookiesApplied:(id)arg1 ;
-(id)placeholderErrorWithURL:(id)arg1 ;
-(id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)validateUploadFile:(id)arg1 ;
-(id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)backgroundResumeDataFromClientResumeData:(id)arg1 ;
-(id)_downloadTaskForResumeData:(id)arg1 ;
-(id)_downloadTaskForRequest:(id)arg1 ;
-(id)_onqueue_AVAssetDownloadTaskForURLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 ;
-(id)connectionLostErrorWithURL:(id)arg1 ;
-(void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 ;
-(NSString *)appWakeUUID;
-(void)setAppWakeUUID:(NSString *)arg1 ;
-(void)backgroundTaskDidResume:(unsigned long long)arg1 ;
-(void)backgroundTaskDidSuspend:(unsigned long long)arg1 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTaskHasConnectionWaiting:(unsigned long long)arg1 ;
-(void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithReason:(long long)arg2 ;
-(void)backgroundTask:(unsigned long long)arg1 hasConnectionWaitingWithError:(id)arg2 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(void)backgroundTask:(unsigned long long)arg1 needNewBodyStream:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundDataTask:(unsigned long long)arg1 didReceiveData:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned long long)arg1 getAuthHeadersForResponse:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundDataTaskDidBecomeDownloadTask:(unsigned long long)arg1 ;
-(void)willRetryBackgroundDataTask:(unsigned long long)arg1 withError:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned long long)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 ;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didReceiveDownloadToken:(unsigned long long)arg2 ;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 ;
-(void)backgroundAVAssetDownloadTask:(unsigned long long)arg1 didResolveMediaSelectionProperyList:(id)arg2 ;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_allCredentialsWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)moveFileToTempForBackgroundResumeData:(id)arg1 ;
-(void)_onqueue_disavowTask:(id)arg1 ;
-(BOOL)isCompanionAvailable;
-(void)setCompanionAvailable:(BOOL)arg1 ;
-(void)dealloc;
@end

