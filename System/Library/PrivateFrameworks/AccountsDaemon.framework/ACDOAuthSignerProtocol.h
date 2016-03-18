/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol <NSObject>
@required
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;

@end

