/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSFileLogger.h>

@interface BKSFenceLogger : BSFileLogger {

	BOOL _reportable;

}

@property (getter=_isReportable,nonatomic,readonly) BOOL _reportable;              //@synthesize reportable=_reportable - In the implementation block
+(id)initializeLogging;
-(id)name;
-(int)level;
-(void)_setEnabled:(BOOL)arg1 ;
-(BOOL)_isReportable;
-(void)_reloadFromDefaultsDictionary:(id)arg1 ;
-(id)logPath;
-(void)_setLevel:(int)arg1 ;
-(id)logPreferenceName;
-(id)logPreferenceDomain;
-(id)logPrefixForCategory:(id)arg1 destination:(unsigned long long)arg2 ;
-(unsigned long long)logDestinations;
-(BOOL)shouldEnableOnInternalBuilds;
@end
