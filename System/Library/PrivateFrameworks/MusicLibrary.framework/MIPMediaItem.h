/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, MIPMovie, MIPPodcast, MIPSong, MIPTVShow;

@interface MIPMediaItem : PBCodable <NSCopying> {

	long long _accountId;
	long long _bookmarkTimeMilliseconds;
	long long _creationDateTime;
	long long _drmKey1IdCode;
	long long _drmKey2IdCode;
	long long _drmPlatformIdCode;
	long long _duration;
	long long _familyAccountId;
	long long _fileSize;
	long long _lastPlayedDateTime;
	long long _lastSkippedDateTime;
	long long _modificationDateTime;
	long long _purchaseDateTime;
	long long _purchaseHistoryId;
	long long _releaseDateTime;
	long long _sagaId;
	long long _storeId;
	long long _storePlaylistId;
	long long _storefrontId;
	long long _subscriptionStoreItemId;
	NSString* _artworkId;
	NSString* _chapterMetadataUrl;
	int _cloudStatus;
	NSString* _comment;
	int _contentRating;
	int _contentRatingLevel;
	NSString* _copyright;
	int _drmVersionsCode;
	NSString* _extrasUrl;
	int _fileKind;
	NSString* _grouping;
	NSMutableArray* _libraryIdentifiers;
	int _likedState;
	NSString* _longDescription;
	int _mediaType;
	MIPMovie* _movie;
	int _playCount;
	int _playCountDelta;
	MIPPodcast* _podcast;
	NSString* _purchaseHistoryRedownloadParams;
	int _purchaseHistoryToken;
	NSString* _sagaRedownloadParams;
	NSString* _shortDescription;
	int _skipCount;
	int _skipCountDelta;
	MIPSong* _song;
	NSString* _sortTitle;
	NSString* _storeAssetFlavor;
	NSString* _storeXID;
	NSString* _title;
	MIPTVShow* _tvShow;
	int _year;
	BOOL _explicitContent;
	BOOL _hasLocalAsset;
	BOOL _hidden;
	BOOL _isInUsersLibrary;
	BOOL _likedStateChanged;
	BOOL _needsReporting;
	BOOL _rememberBookmark;
	SCD_Struct_MI49 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSortTitle; 
@property (nonatomic,retain) NSString * sortTitle;                                    //@synthesize sortTitle=_sortTitle - In the implementation block
@property (assign,nonatomic) BOOL hasReleaseDateTime; 
@property (assign,nonatomic) long long releaseDateTime;                               //@synthesize releaseDateTime=_releaseDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCreationDateTime; 
@property (assign,nonatomic) long long creationDateTime;                              //@synthesize creationDateTime=_creationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDateTime; 
@property (assign,nonatomic) long long modificationDateTime;                          //@synthesize modificationDateTime=_modificationDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) long long fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) long long duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasContentRating; 
@property (assign,nonatomic) int contentRating;                                       //@synthesize contentRating=_contentRating - In the implementation block
@property (assign,nonatomic) BOOL hasExplicitContent; 
@property (assign,nonatomic) BOOL explicitContent;                                    //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,readonly) BOOL hasShortDescription; 
@property (nonatomic,retain) NSString * shortDescription;                             //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasLongDescription; 
@property (nonatomic,retain) NSString * longDescription;                              //@synthesize longDescription=_longDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasCopyright; 
@property (nonatomic,retain) NSString * copyright;                                    //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,readonly) BOOL hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                                    //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) int year;                                                //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasContentRatingLevel; 
@property (assign,nonatomic) int contentRatingLevel;                                  //@synthesize contentRatingLevel=_contentRatingLevel - In the implementation block
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) BOOL hasFileKind; 
@property (assign,nonatomic) int fileKind;                                            //@synthesize fileKind=_fileKind - In the implementation block
@property (assign,nonatomic) BOOL hasFamilyAccountId; 
@property (assign,nonatomic) long long familyAccountId;                               //@synthesize familyAccountId=_familyAccountId - In the implementation block
@property (assign,nonatomic) BOOL hasDrmVersionsCode; 
@property (assign,nonatomic) int drmVersionsCode;                                     //@synthesize drmVersionsCode=_drmVersionsCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmPlatformIdCode; 
@property (assign,nonatomic) long long drmPlatformIdCode;                             //@synthesize drmPlatformIdCode=_drmPlatformIdCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmKey1IdCode; 
@property (assign,nonatomic) long long drmKey1IdCode;                                 //@synthesize drmKey1IdCode=_drmKey1IdCode - In the implementation block
@property (assign,nonatomic) BOOL hasDrmKey2IdCode; 
@property (assign,nonatomic) long long drmKey2IdCode;                                 //@synthesize drmKey2IdCode=_drmKey2IdCode - In the implementation block
@property (nonatomic,readonly) BOOL hasChapterMetadataUrl; 
@property (nonatomic,retain) NSString * chapterMetadataUrl;                           //@synthesize chapterMetadataUrl=_chapterMetadataUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreAssetFlavor; 
@property (nonatomic,retain) NSString * storeAssetFlavor;                             //@synthesize storeAssetFlavor=_storeAssetFlavor - In the implementation block
@property (nonatomic,readonly) BOOL hasExtrasUrl; 
@property (nonatomic,retain) NSString * extrasUrl;                                    //@synthesize extrasUrl=_extrasUrl - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseDateTime; 
@property (assign,nonatomic) long long purchaseDateTime;                              //@synthesize purchaseDateTime=_purchaseDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasCloudStatus; 
@property (assign,nonatomic) int cloudStatus;                                         //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCount; 
@property (assign,nonatomic) int playCount;                                           //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL hasPlayCountDelta; 
@property (assign,nonatomic) int playCountDelta;                                      //@synthesize playCountDelta=_playCountDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLastPlayedDateTime; 
@property (assign,nonatomic) long long lastPlayedDateTime;                            //@synthesize lastPlayedDateTime=_lastPlayedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasSkipCount; 
@property (assign,nonatomic) int skipCount;                                           //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) BOOL hasSkipCountDelta; 
@property (assign,nonatomic) int skipCountDelta;                                      //@synthesize skipCountDelta=_skipCountDelta - In the implementation block
@property (assign,nonatomic) BOOL hasLastSkippedDateTime; 
@property (assign,nonatomic) long long lastSkippedDateTime;                           //@synthesize lastSkippedDateTime=_lastSkippedDateTime - In the implementation block
@property (assign,nonatomic) BOOL hasRememberBookmark; 
@property (assign,nonatomic) BOOL rememberBookmark;                                   //@synthesize rememberBookmark=_rememberBookmark - In the implementation block
@property (assign,nonatomic) BOOL hasBookmarkTimeMilliseconds; 
@property (assign,nonatomic) long long bookmarkTimeMilliseconds;                      //@synthesize bookmarkTimeMilliseconds=_bookmarkTimeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL hasStorePlaylistId; 
@property (assign,nonatomic) long long storePlaylistId;                               //@synthesize storePlaylistId=_storePlaylistId - In the implementation block
@property (assign,nonatomic) BOOL hasHasLocalAsset; 
@property (assign,nonatomic) BOOL hasLocalAsset;                                      //@synthesize hasLocalAsset=_hasLocalAsset - In the implementation block
@property (nonatomic,readonly) BOOL hasGrouping; 
@property (nonatomic,retain) NSString * grouping;                                     //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) BOOL hasLikedState; 
@property (assign,nonatomic) int likedState;                                          //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsReporting; 
@property (assign,nonatomic) BOOL needsReporting;                                     //@synthesize needsReporting=_needsReporting - In the implementation block
@property (assign,nonatomic) BOOL hasLikedStateChanged; 
@property (assign,nonatomic) BOOL likedStateChanged;                                  //@synthesize likedStateChanged=_likedStateChanged - In the implementation block
@property (assign,nonatomic) BOOL hasIsInUsersLibrary; 
@property (assign,nonatomic) BOOL isInUsersLibrary;                                   //@synthesize isInUsersLibrary=_isInUsersLibrary - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;                     //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL hasStoreId; 
@property (assign,nonatomic) long long storeId;                                       //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) BOOL hasStorefrontId; 
@property (assign,nonatomic) long long storefrontId;                                  //@synthesize storefrontId=_storefrontId - In the implementation block
@property (assign,nonatomic) BOOL hasAccountId; 
@property (assign,nonatomic) long long accountId;                                     //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                             //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseHistoryToken; 
@property (assign,nonatomic) int purchaseHistoryToken;                                //@synthesize purchaseHistoryToken=_purchaseHistoryToken - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseHistoryRedownloadParams; 
@property (nonatomic,retain) NSString * purchaseHistoryRedownloadParams;              //@synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams - In the implementation block
@property (assign,nonatomic) BOOL hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                        //@synthesize sagaId=_sagaId - In the implementation block
@property (nonatomic,readonly) BOOL hasSagaRedownloadParams; 
@property (nonatomic,retain) NSString * sagaRedownloadParams;                         //@synthesize sagaRedownloadParams=_sagaRedownloadParams - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreXID; 
@property (nonatomic,retain) NSString * storeXID;                                     //@synthesize storeXID=_storeXID - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionStoreItemId; 
@property (assign,nonatomic) long long subscriptionStoreItemId;                       //@synthesize subscriptionStoreItemId=_subscriptionStoreItemId - In the implementation block
@property (nonatomic,readonly) BOOL hasSong; 
@property (nonatomic,retain) MIPSong * song;                                          //@synthesize song=_song - In the implementation block
@property (nonatomic,readonly) BOOL hasMovie; 
@property (nonatomic,retain) MIPMovie * movie;                                        //@synthesize movie=_movie - In the implementation block
@property (nonatomic,readonly) BOOL hasTvShow; 
@property (nonatomic,retain) MIPTVShow * tvShow;                                      //@synthesize tvShow=_tvShow - In the implementation block
@property (nonatomic,readonly) BOOL hasPodcast; 
@property (nonatomic,retain) MIPPodcast * podcast;                                    //@synthesize podcast=_podcast - In the implementation block
-(int)likedState;
-(void)setLikedState:(int)arg1 ;
-(NSMutableArray *)libraryIdentifiers;
-(unsigned long long)libraryIdentifiersCount;
-(int)playCount;
-(void)setPlayCount:(int)arg1 ;
-(int)skipCount;
-(void)setSkipCount:(int)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(NSString *)shortDescription;
-(int)year;
-(void)setYear:(int)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasComment;
-(BOOL)hasHidden;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(BOOL)arg1 ;
-(BOOL)hasStoreId;
-(long long)storeId;
-(void)setArtworkId:(NSString *)arg1 ;
-(BOOL)hasArtworkId;
-(NSString *)artworkId;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setAccountId:(long long)arg1 ;
-(void)setHasAccountId:(BOOL)arg1 ;
-(BOOL)hasAccountId;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(BOOL)arg1 ;
-(BOOL)hasSagaId;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(BOOL)arg1 ;
-(BOOL)hasPurchaseHistoryId;
-(long long)accountId;
-(long long)sagaId;
-(long long)purchaseHistoryId;
-(void)setReleaseDateTime:(long long)arg1 ;
-(void)setCreationDateTime:(long long)arg1 ;
-(void)setModificationDateTime:(long long)arg1 ;
-(void)setStorefrontId:(long long)arg1 ;
-(void)setPurchaseHistoryToken:(int)arg1 ;
-(void)setPurchaseHistoryRedownloadParams:(NSString *)arg1 ;
-(void)setContentRatingLevel:(int)arg1 ;
-(void)setSagaRedownloadParams:(NSString *)arg1 ;
-(void)setFileKind:(int)arg1 ;
-(void)setDrmVersionsCode:(int)arg1 ;
-(void)setDrmPlatformIdCode:(long long)arg1 ;
-(void)setDrmKey1IdCode:(long long)arg1 ;
-(void)setDrmKey2IdCode:(long long)arg1 ;
-(void)setChapterMetadataUrl:(NSString *)arg1 ;
-(void)setStoreXID:(NSString *)arg1 ;
-(void)setExtrasUrl:(NSString *)arg1 ;
-(void)setCloudStatus:(int)arg1 ;
-(void)setPlayCountDelta:(int)arg1 ;
-(void)setLastPlayedDateTime:(long long)arg1 ;
-(void)setSkipCountDelta:(int)arg1 ;
-(void)setLastSkippedDateTime:(long long)arg1 ;
-(void)setRememberBookmark:(BOOL)arg1 ;
-(void)setBookmarkTimeMilliseconds:(long long)arg1 ;
-(void)setHasLocalAsset:(BOOL)arg1 ;
-(void)setStorePlaylistId:(long long)arg1 ;
-(void)setLikedStateChanged:(BOOL)arg1 ;
-(void)setNeedsReporting:(BOOL)arg1 ;
-(void)setSubscriptionStoreItemId:(long long)arg1 ;
-(void)setIsInUsersLibrary:(BOOL)arg1 ;
-(void)setSong:(MIPSong *)arg1 ;
-(void)setTvShow:(MIPTVShow *)arg1 ;
-(void)setPodcast:(MIPPodcast *)arg1 ;
-(void)setStoreAssetFlavor:(NSString *)arg1 ;
-(BOOL)hasSortTitle;
-(void)setHasReleaseDateTime:(BOOL)arg1 ;
-(BOOL)hasReleaseDateTime;
-(void)setHasCreationDateTime:(BOOL)arg1 ;
-(BOOL)hasCreationDateTime;
-(void)setHasModificationDateTime:(BOOL)arg1 ;
-(BOOL)hasModificationDateTime;
-(void)setHasFileSize:(BOOL)arg1 ;
-(BOOL)hasFileSize;
-(void)setHasContentRating:(BOOL)arg1 ;
-(BOOL)hasContentRating;
-(void)setHasExplicitContent:(BOOL)arg1 ;
-(BOOL)hasExplicitContent;
-(BOOL)hasShortDescription;
-(BOOL)hasLongDescription;
-(BOOL)hasCopyright;
-(void)setHasYear:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasContentRatingLevel:(BOOL)arg1 ;
-(BOOL)hasContentRatingLevel;
-(void)setHasFileKind:(BOOL)arg1 ;
-(BOOL)hasFileKind;
-(void)setFamilyAccountId:(long long)arg1 ;
-(void)setHasFamilyAccountId:(BOOL)arg1 ;
-(BOOL)hasFamilyAccountId;
-(void)setHasDrmVersionsCode:(BOOL)arg1 ;
-(BOOL)hasDrmVersionsCode;
-(void)setHasDrmPlatformIdCode:(BOOL)arg1 ;
-(BOOL)hasDrmPlatformIdCode;
-(void)setHasDrmKey1IdCode:(BOOL)arg1 ;
-(BOOL)hasDrmKey1IdCode;
-(void)setHasDrmKey2IdCode:(BOOL)arg1 ;
-(BOOL)hasDrmKey2IdCode;
-(BOOL)hasChapterMetadataUrl;
-(BOOL)hasStoreAssetFlavor;
-(BOOL)hasExtrasUrl;
-(void)setPurchaseDateTime:(long long)arg1 ;
-(void)setHasPurchaseDateTime:(BOOL)arg1 ;
-(BOOL)hasPurchaseDateTime;
-(void)setHasCloudStatus:(BOOL)arg1 ;
-(BOOL)hasCloudStatus;
-(void)setHasPlayCount:(BOOL)arg1 ;
-(BOOL)hasPlayCount;
-(void)setHasPlayCountDelta:(BOOL)arg1 ;
-(BOOL)hasPlayCountDelta;
-(void)setHasLastPlayedDateTime:(BOOL)arg1 ;
-(BOOL)hasLastPlayedDateTime;
-(void)setHasSkipCount:(BOOL)arg1 ;
-(BOOL)hasSkipCount;
-(void)setHasSkipCountDelta:(BOOL)arg1 ;
-(BOOL)hasSkipCountDelta;
-(void)setHasLastSkippedDateTime:(BOOL)arg1 ;
-(BOOL)hasLastSkippedDateTime;
-(void)setHasRememberBookmark:(BOOL)arg1 ;
-(BOOL)hasRememberBookmark;
-(void)setHasBookmarkTimeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasBookmarkTimeMilliseconds;
-(void)setHasStorePlaylistId:(BOOL)arg1 ;
-(BOOL)hasStorePlaylistId;
-(void)setHasHasLocalAsset:(BOOL)arg1 ;
-(BOOL)hasHasLocalAsset;
-(BOOL)hasGrouping;
-(void)setHasLikedState:(BOOL)arg1 ;
-(BOOL)hasLikedState;
-(void)setHasNeedsReporting:(BOOL)arg1 ;
-(BOOL)hasNeedsReporting;
-(void)setHasLikedStateChanged:(BOOL)arg1 ;
-(BOOL)hasLikedStateChanged;
-(void)setHasIsInUsersLibrary:(BOOL)arg1 ;
-(BOOL)hasIsInUsersLibrary;
-(void)setHasStorefrontId:(BOOL)arg1 ;
-(BOOL)hasStorefrontId;
-(void)setHasPurchaseHistoryToken:(BOOL)arg1 ;
-(BOOL)hasPurchaseHistoryToken;
-(BOOL)hasPurchaseHistoryRedownloadParams;
-(BOOL)hasSagaRedownloadParams;
-(BOOL)hasStoreXID;
-(void)setHasSubscriptionStoreItemId:(BOOL)arg1 ;
-(BOOL)hasSubscriptionStoreItemId;
-(BOOL)hasSong;
-(BOOL)hasMovie;
-(BOOL)hasTvShow;
-(BOOL)hasPodcast;
-(long long)releaseDateTime;
-(long long)creationDateTime;
-(long long)modificationDateTime;
-(BOOL)explicitContent;
-(int)contentRatingLevel;
-(int)fileKind;
-(long long)familyAccountId;
-(int)drmVersionsCode;
-(long long)drmPlatformIdCode;
-(long long)drmKey1IdCode;
-(long long)drmKey2IdCode;
-(NSString *)chapterMetadataUrl;
-(NSString *)storeAssetFlavor;
-(NSString *)extrasUrl;
-(long long)purchaseDateTime;
-(int)cloudStatus;
-(int)playCountDelta;
-(long long)lastPlayedDateTime;
-(int)skipCountDelta;
-(long long)lastSkippedDateTime;
-(BOOL)rememberBookmark;
-(long long)bookmarkTimeMilliseconds;
-(long long)storePlaylistId;
-(BOOL)hasLocalAsset;
-(BOOL)needsReporting;
-(BOOL)likedStateChanged;
-(BOOL)isInUsersLibrary;
-(long long)storefrontId;
-(int)purchaseHistoryToken;
-(NSString *)purchaseHistoryRedownloadParams;
-(NSString *)sagaRedownloadParams;
-(NSString *)storeXID;
-(long long)subscriptionStoreItemId;
-(BOOL)hidden;
-(NSString *)grouping;
-(NSString *)comment;
-(MIPMovie *)movie;
-(long long)fileSize;
-(void)setMovie:(MIPMovie *)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(MIPPodcast *)podcast;
-(MIPSong *)song;
-(MIPTVShow *)tvShow;
-(void)setContentRating:(int)arg1 ;
-(int)contentRating;
-(void)setExplicitContent:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(NSString *)copyright;
@end

