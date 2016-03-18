/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/NFHardwareManagerCallbacks.h>

@class NSXPCConnection, NSMutableSet, NSArray, NSDictionary, NFHardwareControllerInfo, NSString;

@interface NFHardwareManager : NSObject <NSXPCConnectionDelegate, NFHardwareManagerCallbacks> {

	NSXPCConnection* _connection;
	NSMutableSet* _sessions;
	BOOL _hasEventListener;
	NSMutableSet* _eventListeners;
	NSArray* _secureElements;
	NSDictionary* _secureElementsById;

}

@property (readonly) NFHardwareControllerInfo * controllerInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHardwareManager;
-(void)dealloc;
-(id)init;
-(void)_connectIfNeeded;
-(void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(void)didInvalidateXPCConnection:(id)arg1 ;
-(void)didCloseXPCConnection:(id)arg1 ;
-(id)secureElementWithIdentifier:(id)arg1 ;
-(id)secureElements;
-(void)sessionDidEnd:(id)arg1 ;
-(NFHardwareControllerInfo *)controllerInfo;
-(id)boosterInfo;
-(id)rfSettings;
-(BOOL)triggerDelayedWake:(unsigned char)arg1 ;
-(id)startContactlessPaymentSession:(/*^block*/id)arg1 ;
-(id)startContactlessUICCSession:(/*^block*/id)arg1 ;
-(id)startValueAddedServiceSession:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)startValueAddedServiceSession:(/*^block*/id)arg1 ;
-(id)getControllerInfo;
-(id)getSecureElementInfo;
-(id)getBoosterInfo;
-(id)startECommercePaymentSession:(/*^block*/id)arg1 ;
-(id)startLoyaltyAndContactlessPaymentSession:(/*^block*/id)arg1 ;
-(void)unregisterEventListener:(id)arg1 ;
-(id)startSecureElementSession:(id)arg1 didStartCallback:(/*^block*/id)arg2 ;
-(void)registerEventListener:(id)arg1 ;
-(BOOL)setFieldDetectEnabled:(BOOL)arg1 ;
-(id)startFieldDetectSession:(/*^block*/id)arg1 ;
@end

