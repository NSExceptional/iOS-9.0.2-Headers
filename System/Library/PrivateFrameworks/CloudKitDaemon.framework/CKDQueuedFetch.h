/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSString, NSDate, CKDClientContext, NSOperationQueue, NSObject;

@interface CKDQueuedFetch : NSObject {

	BOOL _isFinished;
	BOOL _allowsCellularAccess;
	/*^block*/id _completionHandler;
	NSMutableDictionary* _completionHandlersByItemID;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _deviceIdentifier;
	NSDate* _startDate;
	NSDate* _lastRequestDate;
	CKDClientContext* _context;
	NSOperationQueue* _operationQueue;
	long long _scope;
	long long _usesBackgroundSession;
	long long _qos;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) BOOL shouldStart; 
@property (assign,nonatomic) BOOL isFinished;                                               //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlersByItemID;              //@synthesize completionHandlersByItemID=_completionHandlersByItemID - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                  //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;               //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                            //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestDate;                                      //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) NSOperationQueue * operationQueue;                      //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long scope;                                               //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                     //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long usesBackgroundSession;                               //@synthesize usesBackgroundSession=_usesBackgroundSession - In the implementation block
@property (assign,nonatomic) long long qos;                                                 //@synthesize qos=_qos - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                    //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(NSDate *)startDate;
-(id)init;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(CKDClientContext *)context;
-(void)start;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setContext:(CKDClientContext *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)isFinished;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(long long)usesBackgroundSession;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(BOOL)allowsCellularAccess;
-(NSString *)deviceIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)addCallbackForItemWithID:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(id)operationInfo;
-(void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3 ;
-(Class)operationInfoClass;
-(id)fetchOperationForItemIDs:(id)arg1 ;
-(NSMutableDictionary *)completionHandlersByItemID;
-(id)callbacksForItemWithID:(id)arg1 ;
-(void)removeCallbacksForItemWithID:(id)arg1 ;
-(id)allItemIDs;
-(NSDate *)lastRequestDate;
-(int)numberOfCallbacks;
-(void)finishFetchOperationWithError:(id)arg1 ;
-(id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(BOOL)canBeUsedForOperation:(id)arg1 ;
-(BOOL)shouldStart;
-(void)setCompletionHandlersByItemID:(NSMutableDictionary *)arg1 ;
-(void)setUsesBackgroundSession:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setQos:(long long)arg1 ;
-(long long)qos;
@end

