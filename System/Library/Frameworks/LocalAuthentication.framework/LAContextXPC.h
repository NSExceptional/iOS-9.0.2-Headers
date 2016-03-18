/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LAContextXPC
@required
-(void)evaluateACL:(id)arg1 operation:(long long)arg2 options:(id)arg3 reply:(/*^block*/id)arg4;
-(void)enterPassword:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setCredential:(id)arg1 type:(long long)arg2 onlyGet:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)serverPropertyForOption:(long long)arg1 reply:(/*^block*/id)arg2;
-(void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(/*^block*/id)arg3;
-(void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3;
-(void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(/*^block*/id)arg3;

@end

