/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@protocol OS_dispatch_source;
@class NSURL, NSObject, NSLock, GEORequester, GEOLogMessageCollectionRequest, NSMapTable, NSString;

@interface GEORemoteLogAdaptor : GEOBaseLogAdaptor <PBRequesterDelegate> {

	NSURL* _remoteURL;
	NSObject*<OS_dispatch_source> _sendLogMessageTimer;
	NSLock* _sendLogMessageTimerLock;
	GEORequester* _requester;
	GEOLogMessageCollectionRequest* _request;
	NSLock* _requestLock;
	/*^block*/id _backgroundTaskStart;
	/*^block*/id _backgroundTaskEnd;
	NSMapTable* _requesterToBackgroundTask;
	NSString* _debugRequestName;

}

@property (nonatomic,copy) id backgroundTaskStart;                     //@synthesize backgroundTaskStart=_backgroundTaskStart - In the implementation block
@property (nonatomic,copy) id backgroundTaskEnd;                       //@synthesize backgroundTaskEnd=_backgroundTaskEnd - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                        //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;              //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)debugRequestName;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(void)_prepareRequest;
-(void)_startBackgroundTaskForRequester:(id)arg1 ;
-(void)setBackgroundTaskEnd:(id)arg1 ;
-(id)backgroundTaskEnd;
-(void)_cleanupRequester;
-(void)setBackgroundTaskStart:(id)arg1 ;
-(id)backgroundTaskStart;
-(void)_endBackgroundTaskForRequester:(id)arg1 ;
-(void)flushLogs;
-(NSURL *)remoteURL;
-(void)queueLogMessage:(id)arg1 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4 ;
-(void)_scheduleSendLogMessageTimer;
-(void)_cleanupSendLogMessageTimer;
-(void)_sendPendingLogMessageToRemoteServer;
@end

