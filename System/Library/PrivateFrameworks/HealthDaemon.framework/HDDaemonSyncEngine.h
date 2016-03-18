/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSyncEngine.h>

@protocol HDHealthDaemon;
@class NSString;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {

	id<HDHealthDaemon> _healthDaemon;

}

@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;              //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HDHealthDaemon>)healthDaemon;
-(BOOL)synchronizeStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3 ;
-(void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2 ;
-(void)resetStore:(id)arg1 ;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(BOOL)_synchronizeStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(long long)_receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)_resetStore:(id)arg1 ;
-(id)_sortedSyncEntitiesForStore:(id)arg1 ;
-(id)_syncAnchorMapForSyncEntityClass:(Class)arg1 store:(id)arg2 error:(id*)arg3 ;
-(BOOL)_sendChange:(id)arg1 withContext:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
@end

