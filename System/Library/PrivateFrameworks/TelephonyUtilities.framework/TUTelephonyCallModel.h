/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModel.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface TUTelephonyCallModel : TUCallModel {

	BOOL _networkCanTakeCallsPrivate;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _callManagementState;

}

@property (getter=isWiFiCallingCurrentlyAvailable,nonatomic,readonly) BOOL wiFiCallingCurrentlyAvailable; 
@property (getter=isWiFiEmergencyCallingAllowed,nonatomic,readonly) BOOL wiFiEmergencyCallingAllowed; 
@property (nonatomic,readonly) int expectedOutgoingCallSubType; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * callManagementState;                                                       //@synthesize callManagementState=_callManagementState - In the implementation block
@property (assign,nonatomic) BOOL networkCanTakeCallsPrivate;                                                          //@synthesize networkCanTakeCallsPrivate=_networkCanTakeCallsPrivate - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isMergeable;
-(int)ambiguityState;
-(BOOL)isTakingCallsPrivateAllowed;
-(BOOL)isHardPauseAvailable;
-(BOOL)isEndAndAnswerAllowed;
-(BOOL)isSendToVoicemailAllowed;
-(id)audioCategoryForCall:(id)arg1 ;
-(BOOL)isSwappable;
-(BOOL)isHoldAllowed;
-(BOOL)isAddCallAllowed;
-(BOOL)isHoldAndAnswerAllowed;
-(id)audioModeForCall:(id)arg1 ;
-(BOOL)isWiFiCallingCurrentlyAvailable;
-(BOOL)isWiFiEmergencyCallingAllowed;
-(void)updateCallManagementState;
-(void)updateNetworkCanTakeCallsPrivate;
-(NSDictionary *)callManagementState;
-(BOOL)_isAmbiguousCallList;
-(BOOL)_isAmbiguousMultiPartyCall;
-(BOOL)networkCanTakeCallsPrivate;
-(int)expectedOutgoingCallSubType;
-(void)setCallManagementState:(NSDictionary *)arg1 ;
-(void)setNetworkCanTakeCallsPrivate:(BOOL)arg1 ;
@end

