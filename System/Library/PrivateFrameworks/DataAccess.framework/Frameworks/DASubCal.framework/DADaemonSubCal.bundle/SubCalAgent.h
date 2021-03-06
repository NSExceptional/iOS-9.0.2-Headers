/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSubCal/DARefreshManagerDelegate.h>
#import <libobjc.A.dylib/SubCalDaemonAccountDelegate.h>

@class DATrustHandler, NSString;

@interface SubCalAgent : DAAgent <DARefreshManagerDelegate, SubCalDaemonAccountDelegate>

@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startMonitoring;
-(id)scheduleIdentifier;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(BOOL)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)accountDidCompleteRefresh:(id)arg1 withError:(id)arg2 ;
@end

