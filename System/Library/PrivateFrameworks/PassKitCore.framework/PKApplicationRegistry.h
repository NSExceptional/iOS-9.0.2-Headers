/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableSet, NSString, NSObject;

@interface PKApplicationRegistry : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableSet* _registeredBundleIdentifiers;
	NSString* _archiveFilePath;
	NSObject*<OS_dispatch_semaphore> _archiveSemaphore;
	NSObject*<OS_dispatch_queue> _registrySerialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)applicationRegistryWithArchiveFilePath:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setArchiveFilePath:(id)arg1 ;
-(id)initWithArchivePath:(id)arg1 ;
-(void)_validateRegisteredApplications;
-(void)_requestArchiveToDisk;
-(BOOL)registerApplicationWithBundeIdentifier:(id)arg1 ;
-(BOOL)applicationIsRegisteredWithBundleIdentifier:(id)arg1 ;
@end

