/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSServiceDelegatePrivate <IDSServiceDelegate>
@optional
-(void)service:(id)arg1 account:(id)arg2 messageIdentifier:(id)arg3 alternateCallbackID:(id)arg4 updatedWithResponseCode:(long long)arg5 error:(id)arg6 lastCall:(BOOL)arg7;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)service:(id)arg1 token:(id)arg2 time:(double)arg3 error:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 alternateCallbackID:(id)arg4 willSendToDestinations:(id)arg5 skippedDestinations:(id)arg6 registrationPropertyToDestinations:(id)arg7;

@end

