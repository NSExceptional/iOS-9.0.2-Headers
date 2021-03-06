/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>
#import <libobjc.A.dylib/PKPaymentWebServiceArchiver.h>

@protocol NPKPaymentWebServiceTargetDeviceDelegate, OS_dispatch_queue;
@class IDSService, NSMutableDictionary, NSObject, NSString;

@interface NPKPaymentWebServiceTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {

	id<NPKPaymentWebServiceTargetDeviceDelegate> _delegate;
	unsigned long long _context;
	IDSService* _provisioningService;
	NSMutableDictionary* _outstandingRequests;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;

}

@property (assign,nonatomic,__weak) id<NPKPaymentWebServiceTargetDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IDSService * provisioningService;                                          //@synthesize provisioningService=_provisioningService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;                                 //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;                                //@synthesize responseQueue=_responseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bridgedClientInfoHTTPHeader;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)noteProvisioningInProgress:(BOOL)arg1 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<NPKPaymentWebServiceTargetDeviceDelegate>)arg1 ;
-(id)init;
-(id<NPKPaymentWebServiceTargetDeviceDelegate>)delegate;
-(unsigned long long)context;
-(void)setContext:(unsigned long long)arg1 ;
-(id)deviceName;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(/*^block*/id)arg1 ;
-(void)queueTSMConnectionResponse:(id)arg1 ;
-(void)provisioningDataResponse:(id)arg1 ;
-(void)registrationDataResponse:(id)arg1 ;
-(void)configurationDataResponse:(id)arg1 ;
-(void)signDataResponse:(id)arg1 ;
-(void)secureElementGetAppletsResponse:(id)arg1 ;
-(void)secureElementRemoveAppletsResponse:(id)arg1 ;
-(void)setNewAuthRandomIfNecessaryResponse:(id)arg1 ;
-(void)didRegisterResponse:(id)arg1 ;
-(void)dumpLogsResponse:(id)arg1 ;
-(void)pendingRemovalResponse:(id)arg1 ;
-(void)updatePaymentPass:(id)arg1 ;
-(void)updatePushToken:(id)arg1 ;
-(void)preconditionNotMet:(id)arg1 ;
-(void)handleValueAddedServiceTransactions:(id)arg1 ;
-(void)preferredAIDRequest:(id)arg1 ;
-(void)preferredAIDResponse:(id)arg1 ;
-(void)setProvisioningService:(IDSService *)arg1 ;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outstandingRequests;
-(void)_setOrResetCleanupTimerForRequest:(id)arg1 ;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 ;
-(id)_supportedRegionsForWebService:(id)arg1 ;
-(void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(IDSService *)provisioningService;
-(void)secureElementCardsWithCompletion:(/*^block*/id)arg1 ;
-(void)dumpLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(id)deviceRegion;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessary:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

