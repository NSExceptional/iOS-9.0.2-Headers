/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface LSDXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _databaseAccessQueue;
	NSObject*<OS_dispatch_queue> _ioQueue;
	NSMutableDictionary* _canOpenURLsMap;
	NSXPCConnection* _odrConnection;

}
-(void)resolveAppLink:(id)arg1 connection:(id)arg2 ;
-(void)openAppLink:(id)arg1 connection:(id)arg2 ;
-(void)setAppLinkOpenStrategy:(id)arg1 connection:(id)arg2 ;
-(void)getAppLinkOpenStrategy:(id)arg1 connection:(id)arg2 ;
-(int)registerItemWithRegistrationInfo:(LSRegistrationInfo*)arg1 alias:(CFDataRef)arg2 diskImageAlias:(CFDataRef)arg3 containerAlias:(CFDataRef)arg4 plist:(CFDictionaryRef)arg5 installationDict:(CFDictionaryRef)arg6 extraItems:(CFArrayRef)arg7 withReply:(id)arg8 ;
-(id)odrConnection;
-(id)getServerStatus:(id)arg1 ;
-(id)setDatabaseIsSeeded:(id)arg1 ;
-(id)registerItemInfo:(id)arg1 withConnection:(id)arg2 Action:(unsigned)arg3 ;
-(id)setContentTypeHandlers:(id)arg1 connection:(id)arg2 ;
-(id)setContentTypeOptions:(id)arg1 connection:(id)arg2 ;
-(id)removeContentTypeHandlers:(id)arg1 connection:(id)arg2 ;
-(id)setSchemeHandler:(id)arg1 connection:(id)arg2 ;
-(id)removeSchemeHandler:(id)arg1 connection:(id)arg2 ;
-(id)copyServerStore:(id)arg1 ;
-(id)setServerStore:(id)arg1 connection:(id)arg2 ;
-(id)copyKernelPackageExtensionsFromServer:(id)arg1 ;
-(id)startOpenOperation:(id)arg1 connection:(id)arg2 ;
-(id)finishOpenOperation:(id)arg1 connection:(id)arg2 ;
-(id)openApplicationWithIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)copyLocalizedName:(id)arg1 ;
-(id)generateIconBitmap:(id)arg1 ;
-(id)generateIconBitmapForIconsDictionary:(id)arg1 ;
-(id)clearIconBitmapCache:(id)arg1 connection:(id)arg2 ;
-(id)copyIconBitmapCacheSalt:(id)arg1 connection:(id)arg2 ;
-(id)clearAdvertisingIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)copyAdvertisingIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)copyVendorIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)copyVendorIdentifierForAppIdentifier:(id)arg1 connection:(id)arg2 ;
-(id)copyURLOverrideForURL:(id)arg1 ;
-(id)rebuildApplicationDatabases:(id)arg1 connection:(id)arg2 ;
-(id)syncWithMobileInstallation:(id)arg1 connection:(id)arg2 ;
-(id)updateIdentifiersStore:(id)arg1 connection:(id)arg2 ;
-(id)updateDatabaseWithInfo:(id)arg1 ;
-(id)canOpenURL:(id)arg1 connection:(id)arg2 ;
-(id)copyDiskUsageForBundle:(id)arg1 ;
-(void)openUserActivity:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

