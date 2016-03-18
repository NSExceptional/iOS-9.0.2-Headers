/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKImageSet, NSString, NSData, PKDataAccessor, PKDisplayProfile, NSURL, PKContent, NSDate;

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {

	PKImageSet* _imageSets[5];
	BOOL _initializedViaInitWithCoder;
	NSString* _uniqueID;
	NSData* _manifestHash;
	PKDataAccessor* _dataAccessor;
	PKDisplayProfile* _displayProfile;
	double _preferredImageScale;
	NSString* _preferredImageSuffix;
	NSURL* _webServiceURL;
	NSString* _authenticationToken;
	unsigned long long _settings;
	long long _shareCount;
	PKContent* _content;

}

@property (nonatomic,retain,readonly) NSData * archiveData; 
@property (nonatomic,retain,readonly) NSData * serializedFileWrapper; 
@property (nonatomic,retain,readonly) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * uniqueID;                                    //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSData * manifestHash;                                  //@synthesize manifestHash=_manifestHash - In the implementation block
@property (nonatomic,retain) PKDataAccessor * dataAccessor;                        //@synthesize dataAccessor=_dataAccessor - In the implementation block
@property (nonatomic,retain) PKDisplayProfile * displayProfile;                    //@synthesize displayProfile=_displayProfile - In the implementation block
@property (assign,nonatomic) double preferredImageScale;                           //@synthesize preferredImageScale=_preferredImageScale - In the implementation block
@property (nonatomic,retain) NSString * preferredImageSuffix;                      //@synthesize preferredImageSuffix=_preferredImageSuffix - In the implementation block
@property (nonatomic,copy) NSURL * webServiceURL;                                  //@synthesize webServiceURL=_webServiceURL - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken;                         //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (assign,nonatomic) unsigned long long settings;                          //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long shareCount;                                 //@synthesize shareCount=_shareCount - In the implementation block
@property (nonatomic,readonly) BOOL remoteAssetsDownloaded; 
@property (nonatomic,readonly) BOOL initializedViaInitWithCoder;                   //@synthesize initializedViaInitWithCoder=_initializedViaInitWithCoder - In the implementation block
@property (nonatomic,retain) PKContent * content;                                  //@synthesize content=_content - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)defaultSettings;
+(BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(void)setSettingsWithoutUpdatingDataAccessor:(unsigned long long)arg1 ;
-(PKDisplayProfile *)displayProfile;
-(BOOL)isImageSetLoaded:(long long)arg1 ;
-(void)loadImageSetAsync:(long long)arg1 preheat:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)flushFormattedFieldValues;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(NSURL *)webServiceURL;
-(PKDataAccessor *)dataAccessor;
-(void)noteShared;
-(void)loadContentAsyncWithCompletion:(/*^block*/id)arg1 ;
-(void)loadImageSetSync:(long long)arg1 preheat:(BOOL)arg2 ;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)manifestHash;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)modificationDate;
-(PKContent *)content;
-(NSData *)archiveData;
-(void)setSettings:(unsigned long long)arg1 ;
-(double)preferredImageScale;
-(NSString *)uniqueID;
-(void)loadContentSync;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)serializedFileWrapper;
-(BOOL)remoteAssetsDownloaded;
-(void)setDataAccessor:(PKDataAccessor *)arg1 ;
-(BOOL)initializedViaInitWithCoder;
-(id)contentLoadedIfNeeded;
-(id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(id)initWithDataAccessor:(id)arg1 ;
-(id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(NSString *)preferredImageSuffix;
-(void)flushImageSetOfType:(long long)arg1 ;
-(id)imageSetLoadedIfNeeded:(long long)arg1 ;
-(long long)shareCount;
-(void)setShareCount:(long long)arg1 ;
-(void)setDisplayProfile:(PKDisplayProfile *)arg1 ;
-(void)setManifestHash:(NSData *)arg1 ;
-(void)setWebServiceURL:(NSURL *)arg1 ;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)flushLoadedContent;
-(void)flushLoadedImageSets;
-(void)updateImageSetCachesAtURL:(id)arg1 ;
-(id)localizedString:(id)arg1 ;
-(void)reloadDisplayProfileOfType:(long long)arg1 ;
-(BOOL)isImageSetType:(long long)arg1 equalToImageSetTypeFromObject:(id)arg2 ;
-(void)setMissingImageSetsFromObject:(id)arg1 ;
-(void)setPreferredImageScale:(double)arg1 ;
-(void)setPreferredImageSuffix:(NSString *)arg1 ;
-(void)setContent:(PKContent *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(BOOL)isContentLoaded;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

