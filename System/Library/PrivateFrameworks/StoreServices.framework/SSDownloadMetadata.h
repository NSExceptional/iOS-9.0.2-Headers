/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSLock, NSString, NSURL, NSDate, NSNumber, SSItemImageCollection, NSDictionary, NSData, NSArray;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	long long _keyStyle;
	NSLock* _lock;

}

@property (assign) unsigned long long artistIdentifier; 
@property (copy) NSString * artistName; 
@property (retain) NSURL * fullSizeImageURL; 
@property (retain) NSString * genre; 
@property (assign) unsigned long long genreIdentifier; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (copy) NSString * longDescription; 
@property (retain) NSDate * releaseDate; 
@property (retain) NSNumber * releaseYear; 
@property (copy) NSString * shortDescription; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSString * transactionIdentifier; 
@property (readonly) SSItemImageCollection * thumbnailImageCollection; 
@property (retain) NSString * thumbnailNewsstandBindingEdge; 
@property (retain) NSString * thumbnailNewsstandBindingType; 
@property (retain) NSURL * thumbnailImageURL; 
@property (readonly) NSDictionary * primaryAssetDictionary; 
@property (assign) long long keyStyle; 
@property (retain,readonly) NSData * appReceiptData; 
@property (getter=isAutomaticDownload) BOOL automaticDownload; 
@property (retain) NSURL * cancelDownloadURL; 
@property (retain) NSString * copyright; 
@property (getter=isDeviceBasedVPP) BOOL deviceBasedVPP; 
@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (readonly) NSNumber * downloaderAccountIdentifier; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * fileExtension; 
@property (getter=isTvTemplate) BOOL tvTemplate; 
@property (retain) NSURL * launchExtrasUrl; 
@property (readonly) NSArray * MD5HashStrings; 
@property (readonly) NSNumber * numberOfBytesToHash; 
@property (copy) NSString * pageProgressionDirection; 
@property (assign) unsigned long long preOrderIdentifier; 
@property (retain) NSURL * primaryAssetURL; 
@property (copy) NSString * preferredAssetFlavor; 
@property (copy) NSURL * transitMapDataURL; 
@property (copy) NSString * redownloadActionParameters; 
@property (getter=isRedownloadDownload) BOOL redownloadDownload; 
@property (retain) NSString * releaseDateString; 
@property (copy) id requiredDeviceCapabilities; 
@property (getter=isContentRestricted,readonly) BOOL contentRestricted; 
@property (assign) BOOL shouldDownloadAutomatically; 
@property (retain) NSString * sortArtistName; 
@property (retain) NSString * sortCollectionName; 
@property (retain) NSString * sortTitle; 
@property (retain) NSArray * sinfs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)genre;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(NSDate *)releaseDate;
-(id)composerName;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(NSString *)downloadKey;
-(id)seasonNumber;
-(void)setSeasonNumber:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)bundleIdentifier;
-(NSDictionary *)dictionary;
-(NSString *)title;
-(id)applicationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)shortDescription;
-(NSString *)kind;
-(void)setComposerName:(id)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(void)setCompilation:(BOOL)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setSample:(BOOL)arg1 ;
-(id)initWithKind:(id)arg1 ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)fileExtension;
-(void)setCollectionIdentifier:(unsigned long long)arg1 ;
-(void)setCollectionName:(id)arg1 ;
-(unsigned long long)collectionIdentifier;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(void)setDurationInMilliseconds:(id)arg1 ;
-(id)seriesName;
-(void)setSeriesName:(id)arg1 ;
-(NSNumber *)releaseYear;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(id)cloudIdentifier;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)variantIdentifier;
-(void)setVariantIdentifier:(id)arg1 ;
-(BOOL)isSample;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(NSString *)artistName;
-(id)collectionName;
-(NSString *)releaseDateString;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(NSURL *)primaryAssetURL;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setHighDefinition:(BOOL)arg1 ;
-(BOOL)isRental;
-(void)setRental:(BOOL)arg1 ;
-(void)setContentRating:(id)arg1 ;
-(id)contentRating;
-(BOOL)isHighDefinition;
-(id)indexInCollection;
-(void)setIndexInCollection:(id)arg1 ;
-(NSURL *)thumbnailImageURL;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(id)_assetDictionary;
-(NSNumber *)downloaderAccountIdentifier;
-(id)newDownloadProperties;
-(NSURL *)fullSizeImageURL;
-(id)podcastFeedURL;
-(void)setValuesFromDownload:(id)arg1 ;
-(unsigned long long)preOrderIdentifier;
-(void)setPreOrderIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)artistIdentifier;
-(void)setArtistIdentifier:(unsigned long long)arg1 ;
-(id)collectionArtistName;
-(void)setCollectionArtistName:(id)arg1 ;
-(id)collectionIndexInCollectionGroup;
-(void)setCollectionIndexInCollectionGroup:(id)arg1 ;
-(id)episodeIdentifier;
-(void)setEpisodeIdentifier:(id)arg1 ;
-(id)episodeSortIdentifier;
-(void)setEpisodeSortIdentifier:(id)arg1 ;
-(unsigned long long)genreIdentifier;
-(void)setGenreIdentifier:(unsigned long long)arg1 ;
-(id)networkName;
-(void)setNetworkName:(id)arg1 ;
-(id)numberOfCollectionsInCollectionGroup;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg1 ;
-(id)numberOfItemsInCollection;
-(void)setNumberOfItemsInCollection:(id)arg1 ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(void)setVideoDetailsDictionary:(id)arg1 ;
-(void)setExplicitContent:(BOOL)arg1 ;
-(void)setArtworkIsPrerendered:(BOOL)arg1 ;
-(void)setThumbnailNewsstandBindingEdge:(NSString *)arg1 ;
-(void)setThumbnailNewsstandBindingType:(NSString *)arg1 ;
-(void)setPodcastType:(id)arg1 ;
-(void)setPodcastFeedURL:(id)arg1 ;
-(void)setPrimaryAssetURL:(NSURL *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(id)valueForFirstAvailableKey:(id)arg1 ;
-(id)_stringValueForValue:(id)arg1 ;
-(id)_urlValueForValue:(id)arg1 ;
-(id)_dateValueForValue:(id)arg1 ;
-(id)_releaseDateValue;
-(long long)keyStyle;
-(void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)_newImageCollectionWithURLString:(id)arg1 ;
-(id)_thumbnailArtworkImage;
-(id)betaExternalVersionIdentifier;
-(id)documentTargetIdentifier;
-(id)longSeasonDescription;
-(NSString *)pageProgressionDirection;
-(id)podcastType;
-(id)purchaseDate;
-(NSURL *)cancelDownloadURL;
-(NSString *)redownloadActionParameters;
-(NSString *)thumbnailNewsstandBindingEdge;
-(NSString *)thumbnailNewsstandBindingType;
-(id)viewStoreItemURL;
-(BOOL)artworkIsPrerendered;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isTvTemplate;
-(unsigned long long)composerIdentifier;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg1 ;
-(id)_newDateFormatter;
-(void)_setValue:(id)arg1 forTopLevelKey:(id)arg2 ;
-(void)setBetaExternalVersionIdentifier:(id)arg1 ;
-(void)setCancelDownloadURL:(NSURL *)arg1 ;
-(void)setCloudIdentifier:(id)arg1 ;
-(void)setLongSeasonDescription:(id)arg1 ;
-(void)setPageProgressionDirection:(NSString *)arg1 ;
-(void)setPurchaseDate:(id)arg1 ;
-(void)setRedownloadActionParameters:(NSString *)arg1 ;
-(void)setViewStoreItemURL:(id)arg1 ;
-(void)setComposerIdentifier:(unsigned long long)arg1 ;
-(void)setAutomaticDownload:(BOOL)arg1 ;
-(void)setDeviceBasedVPP:(BOOL)arg1 ;
-(void)setTvTemplate:(BOOL)arg1 ;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(SSItemImageCollection *)thumbnailImageCollection;
-(NSURL *)launchExtrasUrl;
-(NSDictionary *)primaryAssetDictionary;
-(unsigned long long)sagaIdentifier;
-(void)setLaunchExtrasUrl:(NSURL *)arg1 ;
-(void)setSagaIdentifier:(unsigned long long)arg1 ;
-(void)setSortArtistName:(NSString *)arg1 ;
-(void)setSortCollectionName:(NSString *)arg1 ;
-(NSString *)sortArtistName;
-(NSString *)sortCollectionName;
-(id)videoDetailsDictionary;
-(NSData *)appReceiptData;
-(id)copyWritableMetadata;
-(NSData *)epubRightsData;
-(BOOL)isAutomaticDownload;
-(BOOL)isRedownloadDownload;
-(NSArray *)MD5HashStrings;
-(NSNumber *)numberOfBytesToHash;
-(NSString *)preferredAssetFlavor;
-(id)requiredDeviceCapabilities;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setKeyStyle:(long long)arg1 ;
-(void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2 ;
-(void)setRedownloadDownload:(BOOL)arg1 ;
-(void)setShouldDownloadAutomatically:(BOOL)arg1 ;
-(void)setTransitMapDataURL:(NSURL *)arg1 ;
-(BOOL)shouldDownloadAutomatically;
-(NSURL *)transitMapDataURL;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(NSString *)copyright;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(BOOL)isContentRestricted;
-(id)durationInMilliseconds;
@end

