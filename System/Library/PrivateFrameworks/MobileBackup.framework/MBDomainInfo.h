/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSCoding> {

	BOOL _systemApp;
	BOOL _enabled;
	BOOL _restricted;
	NSString* _domainName;
	unsigned long long _remoteSize;
	unsigned long long _localSize;

}

@property (getter=isAppDomain,nonatomic,readonly) BOOL appDomain; 
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;                              //@synthesize systemApp=_systemApp - In the implementation block
@property (getter=isCameraRollDomain,nonatomic,readonly) BOOL cameraRollDomain; 
@property (nonatomic,retain) NSString * domainName;                                          //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) unsigned long long size; 
@property (assign,nonatomic) unsigned long long remoteSize;                                  //@synthesize remoteSize=_remoteSize - In the implementation block
@property (assign,nonatomic) unsigned long long localSize;                                   //@synthesize localSize=_localSize - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                            //@synthesize restricted=_restricted - In the implementation block
+(id)domainNameForBundleID:(id)arg1 ;
+(id)domainInfoWithName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6 ;
-(NSString *)bundleID;
-(unsigned long long)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(BOOL)isAppDomain;
-(BOOL)isSystemApp;
-(id)initWithDomainName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6 ;
-(BOOL)isCameraRollDomain;
-(void)setSystemApp:(BOOL)arg1 ;
-(void)setRemoteSize:(unsigned long long)arg1 ;
-(unsigned long long)localSize;
-(void)setLocalSize:(unsigned long long)arg1 ;
-(unsigned long long)remoteSize;
-(void)setRestricted:(BOOL)arg1 ;
-(BOOL)isRestricted;
@end

