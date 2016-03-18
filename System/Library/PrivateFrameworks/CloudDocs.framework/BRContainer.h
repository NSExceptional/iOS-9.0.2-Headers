/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSDictionary, NSNumber, NSDate, NSData, NSPurgeableData, NSURL;

@interface BRContainer : NSObject <NSSecureCoding> {

	NSString* _containerID;
	NSSet* _bundleIDs;
	NSDictionary* _bundleIDVersions;
	NSString* _localizedName;
	NSString* _supportedFolderLevels;
	NSSet* _documentsTypes;
	NSSet* _exportedTypes;
	NSSet* _importedTypes;
	NSDictionary* _iconMetadata;
	NSDictionary* _iconURLs;
	long long _isOverQuotaOnceToken;
	BOOL _isOverQuota;
	BOOL _isCloudSyncTCCDisabled;
	BOOL _isInInitialState;
	NSNumber* _isDocumentScopePublicAsNumber;
	long long _lastServerUpdateOnceToken;
	NSDate* _lastServerUpdate;
	long long _currentStatusOnceToken;
	unsigned _currentStatus;
	NSData* _imageSandboxExtension;
	BOOL _shouldUsePurgeableData;
	NSData* _dataRepresentation;
	NSPurgeableData* _purgeableDataRepresentation;

}

@property (nonatomic,copy,readonly) NSSet * bundleIdentifiers; 
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (assign,nonatomic) BOOL isInInitialState;                           //@synthesize isInInitialState=_isInInitialState - In the implementation block
@property (nonatomic,readonly) BOOL isDocumentScopePublic; 
@property (nonatomic,readonly) NSString * supportedFolderLevels; 
@property (nonatomic,readonly) NSURL * documentsURL; 
@property (nonatomic,readonly) NSSet * documentsTypes; 
@property (nonatomic,readonly) NSSet * exportedTypes; 
@property (nonatomic,readonly) NSSet * importedTypes; 
@property (assign,nonatomic) BOOL isCloudSyncTCCDisabled;                     //@synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled - In the implementation block
+(BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2 ;
+(id)classesForDecoding;
+(id)ownerNameFromSharedMangledID:(id)arg1 ;
+(BOOL)validateOwnerName:(id)arg1 ;
+(void)_generateiOSIconsForContainerID:(id)arg1 usingBundle:(CFBundleRef)arg2 generatedIcons:(id)arg3 ;
+(id)propertiesForContainerID:(id)arg1 usingBundle:(CFBundleRef)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4 ;
+(id)containerIDFromSharedMangledID:(id)arg1 ;
+(id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2 ;
+(void)postContainerListUpdateNotification;
+(id)privateMangledContainerID:(id)arg1 ;
+(BOOL)validateContainerID:(id)arg1 ;
+(BOOL)isDocumentScopePublicWithProperties:(id)arg1 containerID:(id)arg2 ;
+(void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3 ;
+(BOOL)validateSharedMangledID:(id)arg1 ;
+(id)privateUnmangledContainerID:(id)arg1 ;
+(id)containerForContainerID:(id)arg1 ;
+(id)containerForItemAtURL:(id)arg1 error:(id*)arg2 ;
+(id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3 ;
+(id)containerInRepositoryURL:(id)arg1 error:(id*)arg2 ;
+(id)allContainers;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)allContainersByContainerID;
+(id)documentContainers;
+(id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_bundleIDVersionsWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_bundleIDsWithProperties:(id)arg1 ;
+(id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 preferredLanguages:(id)arg3 ;
+(id)_supportedFolderLevelsWithProperties:(id)arg1 ;
+(id)_documentsTypesWithProperties:(id)arg1 ;
+(id)_exportedTypesWithProperties:(id)arg1 ;
+(id)_importedTypesWithProperties:(id)arg1 ;
+(id)_iconMetadataWithProperties:(id)arg1 ;
+(id)_containerRepositoryURLForContainerID:(id)arg1 ;
+(id)_URLForPlistOfContainerID:(id)arg1 ;
+(id)bundleIdentifiersEnumeratorForProperties:(id)arg1 ;
+(id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3 ;
+(id)localizedNameForDefaultCloudDocsContainer;
+(id)_pathForIconName:(id)arg1 containerID:(id)arg2 ;
+(id)_iconURLsWithProperties:(id)arg1 containerID:(id)arg2 ;
+(id)containersRepositoryURL;
-(id)shortDescription;
-(void)accessDataRepresentationInBlock:(/*^block*/id)arg1 ;
-(BOOL)_updateMetadataOnDiskWithProperties:(id)arg1 ;
-(BOOL)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2 ;
-(BOOL)hasIconWithName:(id)arg1 ;
-(id)dataRepresentationCopy;
-(id)iconURLs;
-(id)versionNumberForBundleIdentifier:(id)arg1 ;
-(BOOL)updateMetadataWithExtractorProperties:(id)arg1 iconNames:(id)arg2 bundleID:(id)arg3 ;
-(void)setOverQuota:(BOOL)arg1 ;
-(BOOL)deleteAllContentsOnClientAndServer:(id*)arg1 ;
-(BOOL)isOverQuota;
-(void)setLastServerUpdate:(id)arg1 ;
-(void)setCurrentStatus:(unsigned)arg1 ;
-(unsigned)currentStatus;
-(id)lastServerUpdate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSURL *)documentsURL;
-(NSString *)localizedName;
-(BOOL)isInInitialState;
-(NSSet *)documentsTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL*)arg3 ;
-(id)imageRepresentationsAvailable;
-(NSSet *)bundleIdentifiers;
-(id)localizedNameWithPreferredLanguages:(id)arg1 ;
-(void)_replaceDataRepresentationWithData:(id)arg1 ;
-(id)_pathForPlist;
-(void)accessPropertiesInBlock:(/*^block*/id)arg1 ;
-(id)computedProperties;
-(id)iconMetadata;
-(id)_mangledID;
-(id)_pathForIconName:(id)arg1 ;
-(id)_containerRepositoryURL;
-(id)initWithContainerID:(id)arg1 dataRepresentation:(id)arg2 ;
-(id)bundleIDVersions;
-(NSString *)supportedFolderLevels;
-(NSSet *)exportedTypes;
-(NSSet *)importedTypes;
-(id)imageDataForSize:(CGSize)arg1 scale:(long long)arg2 ;
-(void)_performWhileAccessingSecurityScopedContainer:(/*^block*/id)arg1 ;
-(BOOL)isCloudSyncTCCDisabled;
-(void)setIsCloudSyncTCCDisabled:(BOOL)arg1 ;
-(BOOL)isDocumentScopePublic;
-(void)setIsInInitialState:(BOOL)arg1 ;
@end

