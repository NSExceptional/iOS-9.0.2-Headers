/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)defaultConnection;
+(id)secondaryConnection;
+(id)homeDirectoryURL;
+(id)mobileDocumentsURL;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)invalidateCachedURLProperties;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
-(void)dealloc;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)syncTokenProxy;
-(BRXPCSyncProxy*)syncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

