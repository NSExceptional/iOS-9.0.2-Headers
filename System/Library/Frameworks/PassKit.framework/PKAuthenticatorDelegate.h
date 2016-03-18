/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)presentPasscodeViewController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissPasscodeRemoteViewController;
-(void)presentPassphraseViewController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissPassphraseRemoteViewController;

@end

