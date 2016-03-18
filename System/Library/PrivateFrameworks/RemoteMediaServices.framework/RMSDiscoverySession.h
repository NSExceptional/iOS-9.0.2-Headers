/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RMSServiceProviderDelegate.h>
#import <libobjc.A.dylib/RMSDiscoverySession.h>

@protocol RMSDiscoverySessionDelegate;
@class Reachability, NSMutableSet, NSArray, NSString;

@interface RMSDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession> {

	long long _discoveryTypes;
	Reachability* _reachability;
	NSMutableSet* _availableServices;
	NSArray* _providers;
	BOOL _networkAvailable;
	id<RMSDiscoverySessionDelegate> _delegate;
	NSArray* _pairedNetworkNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<RMSDiscoverySessionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryTypes;                                       //@synthesize discoveryTypes=_discoveryTypes - In the implementation block
@property (nonatomic,readonly) NSArray * availableServices; 
@property (getter=isNetworkAvailable,nonatomic,readonly) BOOL networkAvailable;              //@synthesize networkAvailable=_networkAvailable - In the implementation block
@property (nonatomic,retain) NSArray * pairedNetworkNames;                                   //@synthesize pairedNetworkNames=_pairedNetworkNames - In the implementation block
+(id)localDiscoverySession;
+(id)proxyDiscoverySession;
-(void)setDelegate:(id<RMSDiscoverySessionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<RMSDiscoverySessionDelegate>)delegate;
-(void)beginDiscovery;
-(void)endDiscovery;
-(long long)discoveryTypes;
-(void)setDiscoveryTypes:(long long)arg1 ;
-(NSArray *)availableServices;
-(BOOL)isNetworkAvailable;
-(NSArray *)pairedNetworkNames;
-(void)setPairedNetworkNames:(NSArray *)arg1 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2 ;
-(void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2 ;
-(void)_handleHSGroupIDDidChangeNotification:(id)arg1 ;
-(void)_handleReachabilityChangedNotification:(id)arg1 ;
-(void)_enableProviders;
-(void)_updateWifiAvailability;
-(id)_providerForDiscoveryType:(long long)arg1 ;
@end

