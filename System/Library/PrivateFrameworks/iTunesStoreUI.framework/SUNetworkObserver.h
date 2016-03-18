/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISSingleton.h>
#import <libobjc.A.dylib/ISStoreURLOperationDelegate.h>

@class ISStoreURLOperation, NSString, NSTimer;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {

	ISStoreURLOperation* _partnerDetectOperation;
	BOOL _partnersEnabled;
	NSString* _partnerIdentifier;
	NSTimer* _startupTimer;
	long long _storeServicesNetworkUsageCount;

}

@property (nonatomic,retain) NSString * partnerIdentifier;              //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_networkTypeChanged:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(void)_partnerHeaderChanged:(id)arg1 ;
-(void)_storeServicesNetworkStartNotification:(id)arg1 ;
-(void)_storeServicesNetworkStopNotification:(id)arg1 ;
-(void)_networkUsageStateChanged:(id)arg1 ;
-(void)_cancelStartupTimer;
-(void)_startupTimer:(id)arg1 ;
-(void)_handleNetworkTypeChange:(id)arg1 ;
-(void)_handleUsingNetworkChange:(id)arg1 ;
-(void)_mainThreadSetPartnerIdentifier:(id)arg1 ;
-(void)_updateNetworkActivityIndicator;
-(void)_mainThreadScheduleNetworkActivityUpdate;
-(void)_mainThreadHandleNetworkTypeChange:(id)arg1 ;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)checkPartnerAvailability;
-(void)setPartnersEnabled:(BOOL)arg1 ;
-(void)startNetworkAvailabilityTimer;
@end

