/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AASetupAssistantDelegateService
@optional
-(void)setupOperationFailed;
-(BOOL)canAutoSetupMailAccount:(id)arg1;
-(BOOL)needSetupForMailAccount:(id)arg1;
-(void)setupMailAccount:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3;
-(void)verifyAccountWithAppleID:(id)arg1 handler:(/*^block*/id)arg2;
-(void)setCloudServicesEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)setDeviceLocatorEnabled:(BOOL)arg1;
-(void)setBackupEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2;
-(void)completeEnablingCloudServicesWithHandler:(/*^block*/id)arg1;

@required
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2;

@end

