/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@interface XBFileLogger : BSFileLogger
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPreferenceDomain;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2 ;
-(void)reloadFromDefaults;
@end
