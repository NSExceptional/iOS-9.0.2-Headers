/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBSettingsGatewayClientInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {

	/*^block*/id _overrideStatusChangeHandler;
	/*^block*/id _activeOverrideTypesChangedHandler;
	/*^block*/id _overrideStateChangeHandler;
	/*^block*/id _overridesChangedHandler;
	/*^block*/id _overridesEffectiveWhileUnlockedChangedHandler;
	/*^block*/id _privilegedSenderGroupChangedHandler;
	/*^block*/id _privilegedSenderTypesChangedHandler;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serverInterface;
+(id)clientInterface;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 ;
-(void)getSectionOrderRuleWithCompletion:(/*^block*/id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2 ;
-(void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3 ;
-(void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2 ;
-(void)behaviorOverridesEffectiveWhileUnlockedChanged:(BOOL)arg1 source:(unsigned long long)arg2 ;
-(void)setSectionOrderRule:(long long)arg1 ;
-(void)setOrderedSectionIDs:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2 ;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3 ;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setBehaviorOverridesWithSourceChangeHandler:(/*^block*/id)arg1 ;
-(void)getSectionInfoForSectionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeHandler:(/*^block*/id)arg1 ;
-(void)setBehaviorOverrideStateChangeHandler:(/*^block*/id)arg1 ;
-(void)setPrivilegedSenderAddressBookGroupRecordIDWithSourceChangeHandler:(/*^block*/id)arg1 ;
-(void)setPrivilegedSenderTypesWithSourceChangeHandler:(/*^block*/id)arg1 ;
-(void)updateSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getBehaviorOverridesEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setBehaviorOverridesEnabled:(BOOL)arg1 ;
-(void)setBehaviorOverridesChangeHandler:(/*^block*/id)arg1 ;
-(void)setBehaviorOverrideStatusChangeHandler:(/*^block*/id)arg1 ;
-(void)setActiveBehaviorOverrideTypesChangeHandler:(/*^block*/id)arg1 ;
-(void)setBehaviorOverrideStatus:(long long)arg1 ;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 ;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2 ;
-(void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2 ;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 ;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 ;
-(void)setBehaviorOverrides:(id)arg1 ;
-(void)setActiveBehaviorOverrideTypesWithSourceChangeHandler:(/*^block*/id)arg1 ;
-(void)setBehaviorOverrideStatusWithSourceChangeHandler:(/*^block*/id)arg1 ;
-(void)getBehaviorOverridesWithCompletion:(/*^block*/id)arg1 ;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2 ;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithCompletion:(/*^block*/id)arg1 ;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithCompletion:(/*^block*/id)arg1 ;
-(void)getPrivilegedSenderTypesWithCompletion:(/*^block*/id)arg1 ;
@end

