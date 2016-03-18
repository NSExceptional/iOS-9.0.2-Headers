/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentRegistrationUtilities : NSObject
+(void)registerAndRetrieveCardsWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)registrationIsSupportedInCurrentRegionWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_retrieveRemoteCredentialsWithWebService:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_checkEligibilityForCredential:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)_checkRequirementsForCredential:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
