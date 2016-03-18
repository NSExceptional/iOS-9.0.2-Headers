/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDAccessoryManagerDelegate.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSUUID, HMMessageDispatcher, HMDAccessoryManager, NSMutableSet, NSHashTable, NSString;

@interface HMDAccessoryBrowser : NSObject <HMDAccessoryManagerDelegate, HMMessageReceiver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uuid;
	HMMessageDispatcher* _messageDispatcher;
	HMDAccessoryManager* _accessoryManager;
	unsigned long long _generationCounter;
	NSMutableSet* _browsingXPCConnections;
	NSHashTable* _unpairedAccessories;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * messageDispatcher;                         //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (nonatomic,retain) HMDAccessoryManager * accessoryManager;                          //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                            //@synthesize generationCounter=_generationCounter - In the implementation block
@property (nonatomic,retain) NSMutableSet * browsingXPCConnections;                           //@synthesize browsingXPCConnections=_browsingXPCConnections - In the implementation block
@property (nonatomic,readonly) NSHashTable * unpairedAccessories;                             //@synthesize unpairedAccessories=_unpairedAccessories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setAccessoryManager:(HMDAccessoryManager *)arg1 ;
-(void)setMessageDispatcher:(HMMessageDispatcher *)arg1 ;
-(HMMessageDispatcher *)messageDispatcher;
-(HMDAccessoryManager *)accessoryManager;
-(id)initWithMessageDispatcher:(id)arg1 accessoryManager:(id)arg2 ;
-(NSHashTable *)unpairedAccessories;
-(void)accessoryManager:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didRemoveNewAccessory:(id)arg2 ;
-(void)_handleRequestFetchNewAccessories:(id)arg1 ;
-(void)_handleRequestSearchForNewAccessories:(id)arg1 ;
-(void)_handleInvalidatedXPCConnection:(id)arg1 ;
-(unsigned long long)generationCounter;
-(NSMutableSet *)browsingXPCConnections;
-(void)_startDiscoveringAccessories;
-(void)_stopSearchingWithXPCConnection:(id)arg1 ;
-(void)_stopDiscoveringAccessories;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(void)setBrowsingXPCConnections:(NSMutableSet *)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

