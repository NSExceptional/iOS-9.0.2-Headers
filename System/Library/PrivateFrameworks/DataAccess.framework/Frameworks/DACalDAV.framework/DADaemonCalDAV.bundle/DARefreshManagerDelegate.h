/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DADaemonCalDAV.bundle/DADaemonCalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DATrustHandler;


@protocol DARefreshManagerDelegate
@property (nonatomic,readonly) DATrustHandler * trustHandler; 
@optional
-(id)password;
-(void)interfaceWentUp;
-(void)interfaceWentDown;
-(id)serverTokenRegistrationURL;
-(id)username;

@required
-(DATrustHandler *)trustHandler;
-(id)scheduleIdentifier;
-(id)getDAAccount;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2;
-(id)onBehalfOfBundleIdentifier;

@end

