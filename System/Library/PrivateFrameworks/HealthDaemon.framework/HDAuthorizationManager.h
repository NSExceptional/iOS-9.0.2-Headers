/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:01 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableArray, _HDAuthorizationRequestGroup, NSString;

@interface HDAuthorizationManager : NSObject <HDDiagnosticObject> {

	BOOL _suppressAuthorizationPrompt;
	double _requestSessionTimeout;
	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requestGroupsByBundleIdentifier;
	NSMutableArray* _pendingRequestGroups;
	_HDAuthorizationRequestGroup* _promptingRequestGroup;

}

@property (assign,nonatomic) BOOL suppressAuthorizationPrompt;                                   //@synthesize suppressAuthorizationPrompt=_suppressAuthorizationPrompt - In the implementation block
@property (assign,nonatomic) double requestSessionTimeout;                                       //@synthesize requestSessionTimeout=_requestSessionTimeout - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;                             //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestGroupsByBundleIdentifier;              //@synthesize requestGroupsByBundleIdentifier=_requestGroupsByBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRequestGroups;                              //@synthesize pendingRequestGroups=_pendingRequestGroups - In the implementation block
@property (nonatomic,retain) _HDAuthorizationRequestGroup * promptingRequestGroup;               //@synthesize promptingRequestGroup=_promptingRequestGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id<HDHealthDaemon>)healthDaemon;
-(void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)diagnosticDescription;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)resetAllAuthorizationRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)applicationsUninstalledNotification:(id)arg1 ;
-(void)_queue_setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 writeTypes:(id)arg3 readTypes:(id)arg4 authorizationNeededHandler:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_queue_handleNextAuthorizationRequestGroup;
-(void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)arg1 ;
-(void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_queue_resetAllAuthorizationRecordsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)_needsAuthorizationForRequestGroup:(id)arg1 overwriteAuthorizationStatus:(BOOL)arg2 error:(id*)arg3 ;
-(void)_queue_finishRequestGroup:(id)arg1 error:(id)arg2 ;
-(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(BOOL)suppressAuthorizationPrompt;
-(void)setSuppressAuthorizationPrompt:(BOOL)arg1 ;
-(double)requestSessionTimeout;
-(void)setRequestSessionTimeout:(double)arg1 ;
-(NSMutableDictionary *)requestGroupsByBundleIdentifier;
-(void)setRequestGroupsByBundleIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingRequestGroups;
-(void)setPendingRequestGroups:(NSMutableArray *)arg1 ;
-(_HDAuthorizationRequestGroup *)promptingRequestGroup;
-(void)setPromptingRequestGroup:(_HDAuthorizationRequestGroup *)arg1 ;
@end

