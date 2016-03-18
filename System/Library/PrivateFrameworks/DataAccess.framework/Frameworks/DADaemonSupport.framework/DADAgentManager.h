/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DADaemonSupport/DADaemonSupport-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSArray;

@interface DADAgentManager : NSObject {

	NSMutableArray* _activeAgents;
	NSMutableArray* _agentsAwaitingShutdown;
	int _disableMonitoringRequests;
	NSMutableDictionary* _watchedIDs;
	unsigned _pmNotifier;
	IONotificationPortRef _pmPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	/*^block*/id _startAgentsWhenSystemReadyBlock;
	int _pendingAccountSetupCount;
	NSMutableArray* _subCalHandlers;

}

@property (nonatomic,retain) NSArray * activeAgents;                       //@synthesize activeAgents=_activeAgents - In the implementation block
@property (nonatomic,retain) NSMutableArray * subCalHandlers;              //@synthesize subCalHandlers=_subCalHandlers - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(BOOL)_systemMayNowBeReady;
-(BOOL)hasActiveAccounts;
-(id)_phoneVersion;
-(void)_ensureHolidaySubscribedCalendarExists;
-(void)enableDaemon;
-(id)_accountInfoPath;
-(void)_deviceDidWake;
-(void)_deviceWillSleep;
-(BOOL)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void*)arg2 ;
-(BOOL)_clearOrphanedSubscribedCalendars:(void*)arg1 eventAccountIds:(id)arg2 toDoAccountIds:(id)arg3 ;
-(void)loadAgents;
-(void)clearOrphanedStores;
-(NSArray *)activeAgents;
-(void)agentHasStoppedMonitoring:(id)arg1 ;
-(void)saveAndReleaseAgents;
-(void)_loadAndStartMonitoringAgents;
-(void)_stopMonitoringAndSaveAgents;
-(BOOL)_hasDataclassWeCareAbout:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 ;
-(id)accountWithAccountID:(id)arg1 andClassName:(id)arg2 ;
-(void)_simulateNotificationOnWatchedFolders:(id)arg1 ;
-(id)_configFileForAgent:(id)arg1 ;
-(BOOL)dadRemoveStoresForAccountWithID:(id)arg1 ;
-(id)currentPolicyKeyForAccount:(id)arg1 ;
-(void)requestPolicyUpdateForAccount:(id)arg1 ;
-(BOOL)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(BOOL)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2 ;
-(void)enableMonitoringAgents;
-(void)disableMonitoringAgents;
-(int)numDisableMonitoringRequests;
-(BOOL)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(BOOL)arg4 ;
-(BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(/*^block*/id)arg6 ;
-(BOOL)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(long long)arg2 ;
-(void)handleURLString:(id)arg1 ;
-(BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getStatusReportDictsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)addPendingAccountSetup;
-(void)removePendingAccountSetup;
-(BOOL)hasPendingAccountSetup;
-(void)disableDaemon;
-(void)cleanupLaunchdSemaphore;
-(void)setActiveAgents:(NSArray *)arg1 ;
-(NSMutableArray *)subCalHandlers;
-(void)setSubCalHandlers:(NSMutableArray *)arg1 ;
-(id)agentWithAccountID:(id)arg1 ;
-(id)stateString;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4 ;
-(void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4 ;
-(BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4 ;
@end

