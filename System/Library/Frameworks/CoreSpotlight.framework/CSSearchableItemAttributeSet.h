/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSMutableDictionary, CSDecoder, NSArray, NSDate, NSNumber;

@interface CSSearchableItemAttributeSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCodedCustomAttributes;
	NSDictionary* _attributes;
	NSString* _contentType;
	NSMutableDictionary* _mutableAttributes;
	NSMutableDictionary* _customAttributes;
	long long _searchableItemFlags;
	CSDecoder* _decoder;
	CSDecoder* _contentDecoder;
	SCD_Struct_CS2 _codedAttributes;
	SCD_Struct_CS2 _codedCustomAttributes;
	SCD_Struct_CS2 _contentObj;

}

@property (copy) NSArray * mailAttachmentNames; 
@property (copy) NSArray * mailAttachmentTypes; 
@property (copy) NSArray * mailAttachmentKinds; 
@property (copy) NSDate * mailDateReceived; 
@property (copy) NSDate * mailDateLastViewed; 
@property (copy) NSNumber * mailFlagged; 
@property (copy) NSNumber * mailFlagColor; 
@property (copy) NSNumber * mailRead; 
@property (copy) NSNumber * mailRepliedTo; 
@property (copy) NSNumber * mailPriority; 
@property (copy) NSArray * mailGMailLabels; 
@property (copy) NSString * mailMessageID; 
@property (copy) NSString * accountType; 
@property (copy) NSString * textSelected; 
@property (copy) NSString * subtitle; 
@property (copy) NSArray * userTags; 
@property (copy) NSString * albumPersistentID; 
@property (copy) NSString * adamID; 
@property (retain) NSNumber * extendedContentRating; 
@property (retain) NSNumber * fileIdentifier; 
@property (retain) NSNumber * parentFileIdentifier; 
@property (copy) NSString * filename; 
@property (retain) NSNumber * documentIdentifier; 
@property (getter=isExistingThread,retain) NSNumber * existingThread; 
@property (getter=isPartiallyDownloaded,retain) NSNumber * partiallyDownloaded; 
@property (readonly) NSArray * queryResultMatchedFields; 
@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * domainIdentifier; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protectionClass; 
@property (retain) NSDate * expirationDate; 
@property (copy) NSString * userActivityType; 
@property (copy) NSString * queryResultRelevance; 
@property (copy) NSString * applicationName; 
@property (readonly) NSString * contentType;                                                 //@synthesize contentType=_contentType - In the implementation block
@property (readonly) NSMutableDictionary * mutableAttributes;                                //@synthesize mutableAttributes=_mutableAttributes - In the implementation block
@property (readonly) NSMutableDictionary * customAttributes;                                 //@synthesize customAttributes=_customAttributes - In the implementation block
@property (readonly) NSDictionary * attributes;                                              //@synthesize attributes=_attributes - In the implementation block
@property (assign) long long searchableItemFlags;                                            //@synthesize searchableItemFlags=_searchableItemFlags - In the implementation block
@property (nonatomic,readonly) CSDecoder * decoder;                                          //@synthesize decoder=_decoder - In the implementation block
@property (nonatomic,readonly) CSDecoder * contentDecoder;                                   //@synthesize contentDecoder=_contentDecoder - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS3 codedAttributes;                               //@synthesize codedAttributes=_codedAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS3 codedCustomAttributes;                         //@synthesize codedCustomAttributes=_codedCustomAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CS3 contentObj;                                    //@synthesize contentObj=_contentObj - In the implementation block
@property (nonatomic,readonly) BOOL hasCodedCustomAttributes;                                //@synthesize hasCodedCustomAttributes=_hasCodedCustomAttributes - In the implementation block
+(id)_requiredAttributesForContentType:(id)arg1 ;
+(id)_sharedAttributeKeySet;
+(BOOL)supportsSecureCoding;
+(id)_allKeys;
-(void)encodeWithCSCoder:(id)arg1 includeText:(BOOL)arg2 ;
-(void)_stripContentURLAndEncodeWithCoder:(id)arg1 ;
-(void)encodeWithCSCoder:(id)arg1 ;
-(void)setValue:(id)arg1 forCustomKey:(id)arg2 ;
-(id)valueForCustomKey:(id)arg1 ;
-(void)setAllDay:(id)arg1 ;
-(id)allDay;
-(void)setContainerDisplayName:(id)arg1 ;
-(id)containerDisplayName;
-(void)setContainerOrder:(id)arg1 ;
-(id)containerOrder;
-(id)containerTitle;
-(void)setContainerTitle:(id)arg1 ;
-(id)containerIdentifier;
-(void)setContainerIdentifier:(id)arg1 ;
-(void)setMailAttachmentNames:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentNames;
-(void)setMailAttachmentTypes:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentTypes;
-(void)setMailAttachmentKinds:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentKinds;
-(void)setMailDateReceived:(NSDate *)arg1 ;
-(NSDate *)mailDateReceived;
-(void)setMailDateLastViewed:(NSDate *)arg1 ;
-(NSDate *)mailDateLastViewed;
-(void)setMailFlagged:(NSNumber *)arg1 ;
-(NSNumber *)mailFlagged;
-(void)setMailFlagColor:(NSNumber *)arg1 ;
-(NSNumber *)mailFlagColor;
-(void)setMailRead:(NSNumber *)arg1 ;
-(NSNumber *)mailRead;
-(void)setMailRepliedTo:(NSNumber *)arg1 ;
-(NSNumber *)mailRepliedTo;
-(void)setMailPriority:(NSNumber *)arg1 ;
-(NSNumber *)mailPriority;
-(void)setMailGMailLabels:(NSArray *)arg1 ;
-(NSArray *)mailGMailLabels;
-(void)setMailMessageID:(NSString *)arg1 ;
-(NSString *)mailMessageID;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)setParentFileIdentifier:(NSNumber *)arg1 ;
-(void)setFileIdentifier:(NSNumber *)arg1 ;
-(void)setTextSelected:(NSString *)arg1 ;
-(void)setUserTags:(NSArray *)arg1 ;
-(NSArray *)userTags;
-(void)setAlbumPersistentID:(NSString *)arg1 ;
-(void)setExtendedContentRating:(NSNumber *)arg1 ;
-(NSNumber *)extendedContentRating;
-(NSNumber *)fileIdentifier;
-(NSNumber *)parentFileIdentifier;
-(void)setQueryResultMatchedFields:(NSArray *)arg1 ;
-(NSArray *)queryResultMatchedFields;
-(void)setQueryResultRelevance:(NSString *)arg1 ;
-(NSString *)queryResultRelevance;
-(NSString *)textSelected;
-(NSString *)bundleID;
-(NSString *)albumPersistentID;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(NSString *)accountType;
-(NSString *)domainIdentifier;
-(id)isExistingThread;
-(NSString *)userActivityType;
-(id)isPartiallyDownloaded;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)protectionClass;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setExistingThread:(NSNumber *)arg1 ;
-(void)setPartiallyDownloaded:(NSNumber *)arg1 ;
-(NSString *)filename;
-(NSString *)applicationName;
-(void)setFilename:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSNumber *)documentIdentifier;
-(void)setDocumentIdentifier:(NSNumber *)arg1 ;
-(NSString *)adamID;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setAccountType:(NSString *)arg1 ;
-(void)setHeadline:(id)arg1 ;
-(id)headline;
-(void)setAlternateNames:(id)arg1 ;
-(id)instantMessageAddresses;
-(void)setInstantMessageAddresses:(id)arg1 ;
-(void)setOrganizations:(id)arg1 ;
-(void)setImportantDates:(id)arg1 ;
-(void)setAuthorAddresses:(id)arg1 ;
-(void)setRelatedUniqueIdentifier:(id)arg1 ;
-(id)city;
-(void)setContentTypeTree:(id)arg1 ;
-(void)_updateDocumentInfoForContentURL:(id)arg1 ;
-(id)relatedUniqueIdentifier;
-(void)setMetadataModificationDate:(id)arg1 ;
-(id)metadataModificationDate;
-(void)setEditors:(id)arg1 ;
-(id)editors;
-(void)setRecipientEmailAddresses:(id)arg1 ;
-(id)authorAddresses;
-(void)setProjects:(id)arg1 ;
-(id)projects;
-(void)setDownloadedDate:(id)arg1 ;
-(id)downloadedDate;
-(void)setContentSources:(id)arg1 ;
-(id)contentSources;
-(void)setLastUsedDate:(id)arg1 ;
-(id)lastUsedDate;
-(void)setContactKeywords:(id)arg1 ;
-(id)contactKeywords;
-(void)setPixelCount:(id)arg1 ;
-(id)pixelCount;
-(void)setBitsPerSample:(id)arg1 ;
-(id)bitsPerSample;
-(void)setFlashOn:(id)arg1 ;
-(id)isFlashOn;
-(void)setFocalLength:(id)arg1 ;
-(id)focalLength;
-(void)setFocalLength35mm:(id)arg1 ;
-(id)isFocalLength35mm;
-(void)setAcquisitionMake:(id)arg1 ;
-(id)acquisitionMake;
-(void)setAcquisitionModel:(id)arg1 ;
-(id)acquisitionModel;
-(void)setCameraOwner:(id)arg1 ;
-(id)cameraOwner;
-(void)setLensModel:(id)arg1 ;
-(void)setISOSpeed:(id)arg1 ;
-(id)ISOSpeed;
-(void)setLayerNames:(id)arg1 ;
-(void)setWhiteBalance:(id)arg1 ;
-(id)whiteBalance;
-(void)setProfileName:(id)arg1 ;
-(id)profileName;
-(void)setResolutionWidthDPI:(id)arg1 ;
-(id)resolutionWidthDPI;
-(void)setResolutionHeightDPI:(id)arg1 ;
-(id)resolutionHeightDPI;
-(void)setExposureTime:(id)arg1 ;
-(id)exposureTime;
-(void)setEXIFVersion:(id)arg1 ;
-(id)EXIFVersion;
-(void)setEXIFGPSVersion:(id)arg1 ;
-(id)EXIFGPSVersion;
-(void)setCodecs:(id)arg1 ;
-(id)codecs;
-(void)setStreamable:(id)arg1 ;
-(void)setTotalBitRate:(id)arg1 ;
-(id)totalBitRate;
-(void)setVideoBitRate:(id)arg1 ;
-(id)videoBitRate;
-(void)setAudioBitRate:(id)arg1 ;
-(id)audioBitRate;
-(void)setDeliveryType:(id)arg1 ;
-(id)deliveryType;
-(void)setHasAlphaChannel:(id)arg1 ;
-(id)hasAlphaChannel;
-(void)setRedEyeOn:(id)arg1 ;
-(id)isRedEyeOn;
-(void)setMeteringMode:(id)arg1 ;
-(id)meteringMode;
-(void)setMaxAperture:(id)arg1 ;
-(id)maxAperture;
-(void)setFNumber:(id)arg1 ;
-(id)fNumber;
-(void)setExposureProgram:(id)arg1 ;
-(id)exposureProgram;
-(void)setExposureTimeString:(id)arg1 ;
-(id)exposureTimeString;
-(id)stateOrProvince;
-(void)setSupportsNavigation:(id)arg1 ;
-(void)setImageDirection:(id)arg1 ;
-(id)imageDirection;
-(void)setGPSTrack:(id)arg1 ;
-(id)GPSTrack;
-(void)setGPSStatus:(id)arg1 ;
-(id)GPSStatus;
-(void)setGPSMeasureMode:(id)arg1 ;
-(id)GPSMeasureMode;
-(void)setGPSDOP:(id)arg1 ;
-(id)GPSDOP;
-(void)setGPSMapDatum:(id)arg1 ;
-(id)GPSMapDatum;
-(void)setGPSDestLatitude:(id)arg1 ;
-(id)GPSDestLatitude;
-(void)setGPSDestLongitude:(id)arg1 ;
-(id)GPSDestLongitude;
-(void)setGPSDestBearing:(id)arg1 ;
-(id)GPSDestBearing;
-(void)setGPSDestDistance:(id)arg1 ;
-(id)GPSDestDistance;
-(void)setGPSProcessingMethod:(id)arg1 ;
-(id)GPSProcessingMethod;
-(void)setGPSAreaInformation:(id)arg1 ;
-(id)GPSAreaInformation;
-(void)setGPSDateStamp:(id)arg1 ;
-(id)GPSDateStamp;
-(void)setGPSDifferental:(id)arg1 ;
-(id)GPSDifferental;
-(void)setAudioSampleRate:(id)arg1 ;
-(id)audioSampleRate;
-(void)setAudioChannelCount:(id)arg1 ;
-(id)audioChannelCount;
-(void)setTempo:(id)arg1 ;
-(id)tempo;
-(void)setKeySignature:(id)arg1 ;
-(id)keySignature;
-(void)setTimeSignature:(id)arg1 ;
-(id)timeSignature;
-(void)setAudioEncodingApplication:(id)arg1 ;
-(id)audioEncodingApplication;
-(void)setLyricist:(id)arg1 ;
-(id)lyricist;
-(void)setAudioTrackNumber:(id)arg1 ;
-(id)audioTrackNumber;
-(void)setRecordingDate:(id)arg1 ;
-(id)recordingDate;
-(void)setMusicalGenre:(id)arg1 ;
-(id)musicalGenre;
-(void)setGeneralMIDISequence:(id)arg1 ;
-(id)isGeneralMIDISequence;
-(id)organizations;
-(void)setRights:(id)arg1 ;
-(id)rights;
-(void)setPublishers:(id)arg1 ;
-(id)publishers;
-(void)setContributors:(id)arg1 ;
-(id)contributors;
-(void)setCoverage:(id)arg1 ;
-(id)coverage;
-(void)setAudiences:(id)arg1 ;
-(id)audiences;
-(void)setSecurityMethod:(id)arg1 ;
-(id)securityMethod;
-(void)setEncodingApplications:(id)arg1 ;
-(id)encodingApplications;
-(id)importantDates;
-(void)setSupportsPhoneCall:(id)arg1 ;
-(id)supportsPhoneCall;
-(void)setFinderComment:(id)arg1 ;
-(id)finderComment;
-(void)setFontNames:(id)arg1 ;
-(id)fontNames;
-(void)setAppleLoopsRootKey:(id)arg1 ;
-(id)appleLoopsRootKey;
-(void)setAppleLoopsKeyFilterType:(id)arg1 ;
-(id)appleLoopsKeyFilterType;
-(void)setAppleLoopsLoopMode:(id)arg1 ;
-(id)appleLoopsLoopMode;
-(void)setAppleLoopDescriptors:(id)arg1 ;
-(id)appleLoopDescriptors;
-(void)setMusicalInstrumentCategory:(id)arg1 ;
-(id)musicalInstrumentCategory;
-(void)setMusicalInstrumentName:(id)arg1 ;
-(id)musicalInstrumentName;
-(void)setExecutableArchitectures:(id)arg1 ;
-(void)setExecutablePlatform:(id)arg1 ;
-(id)executablePlatform;
-(void)setApplicationCategories:(id)arg1 ;
-(id)applicationCategories;
-(void)setApplicationManaged:(id)arg1 ;
-(id)isApplicationManaged;
-(void)setSupportFileType:(id)arg1 ;
-(id)supportFileType;
-(void)setInformation:(id)arg1 ;
-(id)information;
-(void)setProducer:(id)arg1 ;
-(void)setPerformers:(id)arg1 ;
-(id)performers;
-(void)setOriginalFormat:(id)arg1 ;
-(id)originalFormat;
-(void)setOriginalSource:(id)arg1 ;
-(id)originalSource;
-(void)setLikelyJunk:(id)arg1 ;
-(id)isLikelyJunk;
-(void)setParticipants:(id)arg1 ;
-(id)dueDate;
-(id)executableArchitectures;
-(void)setContentType:(NSString *)arg1 ;
-(void)setPhoneNumbers:(id)arg1 ;
-(void)setContentURL:(id)arg1 ;
-(id)contentURL;
-(id)artist;
-(id)composer;
-(id)genre;
-(id)isStreamable;
-(id)playCount;
-(void)setPlayCount:(id)arg1 ;
-(void)setArtist:(id)arg1 ;
-(id)ratingDescription;
-(void)setRatingDescription:(id)arg1 ;
-(id)director;
-(void)setDirector:(id)arg1 ;
-(id)emailAddresses;
-(id)startDate;
-(id)endDate;
-(id)pixelWidth;
-(id)pixelHeight;
-(id)album;
-(void)setKind:(id)arg1 ;
-(void)setAlbum:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(void)setTitle:(id)arg1 ;
-(void)setSpeed:(id)arg1 ;
-(id)timestamp;
-(id)duration;
-(id)identifier;
-(id)bundleIdentifier;
-(void)setOrientation:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)orientation;
-(void)setTimestamp:(id)arg1 ;
-(id)title;
-(id)path;
-(id)speed;
-(void)setIdentifier:(id)arg1 ;
-(NSString *)contentType;
-(id)URL;
-(void)setPath:(id)arg1 ;
-(id)pageCount;
-(void)setURL:(id)arg1 ;
-(void)setMediaTypes:(id)arg1 ;
-(id)mediaTypes;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(void)setPageCount:(id)arg1 ;
-(id)displayName;
-(id)kind;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(id)exposureMode;
-(void)setExposureMode:(id)arg1 ;
-(id)participants;
-(void)setRecipientNames:(id)arg1 ;
-(void)setEmailAddresses:(id)arg1 ;
-(id)contentTypeTree;
-(id)mailboxIdentifiers;
-(id)contentCreationDate;
-(id)accountHandles;
-(id)authorEmailAddresses;
-(id)authorNames;
-(id)primaryRecipients;
-(id)additionalRecipients;
-(id)hiddenAdditionalRecipients;
-(id)recipientEmailAddresses;
-(id)recipientNames;
-(id)emailHeaders;
-(void)setAuthorEmailAddresses:(id)arg1 ;
-(id)HTMLContentData;
-(void)setAuthorNames:(id)arg1 ;
-(void)setStateOrProvince:(id)arg1 ;
-(id)layerNames;
-(void)setCopyright:(id)arg1 ;
-(id)completionDate;
-(void)setCompletionDate:(id)arg1 ;
-(void)setInstructions:(id)arg1 ;
-(id)instructions;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setAltitude:(id)arg1 ;
-(id)altitude;
-(void)setCountry:(id)arg1 ;
-(id)country;
-(id)phoneNumbers;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(void)setLanguages:(id)arg1 ;
-(id)languages;
-(id)supportsNavigation;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(void)setCreator:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(id)contentDescription;
-(void)setContentCreationDate:(id)arg1 ;
-(void)setMailboxIdentifiers:(id)arg1 ;
-(void)setPrimaryRecipients:(id)arg1 ;
-(void)setAdditionalRecipients:(id)arg1 ;
-(void)setHiddenAdditionalRecipients:(id)arg1 ;
-(void)setEmailHeaders:(id)arg1 ;
-(void)setHTMLContentData:(id)arg1 ;
-(void)setAccountHandles:(id)arg1 ;
-(void)setComposer:(id)arg1 ;
-(void)setContentModificationDate:(id)arg1 ;
-(id)theme;
-(id)pageWidth;
-(id)pageHeight;
-(void)setPageHeight:(id)arg1 ;
-(id)comment;
-(id)fileSize;
-(void)setKeywords:(id)arg1 ;
-(id)keywords;
-(void)setTheme:(id)arg1 ;
-(id)creator;
-(void)setDisplayName:(id)arg1 ;
-(id)authors;
-(void)setPageWidth:(id)arg1 ;
-(id)alternateNames;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(void)setAuthors:(id)arg1 ;
-(id)colorSpace;
-(void)setColorSpace:(id)arg1 ;
-(id)thumbnailData;
-(void)setThumbnailData:(id)arg1 ;
-(void)setAddedDate:(id)arg1 ;
-(id)addedDate;
-(id)lensModel;
-(void)setThumbnailURL:(id)arg1 ;
-(id)thumbnailURL;
-(void)setFileSize:(id)arg1 ;
-(void)setGenre:(id)arg1 ;
-(void)setDueDate:(id)arg1 ;
-(void)setPixelHeight:(id)arg1 ;
-(void)setPixelWidth:(id)arg1 ;
-(void)setCity:(id)arg1 ;
-(id)contentModificationDate;
-(id)isLocal;
-(id)producer;
-(void)setLocal:(id)arg1 ;
-(void)setAperture:(id)arg1 ;
-(id)aperture;
-(id)recipientAddresses;
-(void)setRecipientAddresses:(id)arg1 ;
-(id)textContent;
-(void)setContentRating:(id)arg1 ;
-(id)contentRating;
-(id)accountIdentifier;
-(void)setEndDate:(id)arg1 ;
-(void)setStartDate:(id)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(void)setTextContent:(id)arg1 ;
-(id)copyright;
-(void)setRole:(id)arg1 ;
-(id)role;
-(id)initWithItemContentType:(id)arg1 ;
-(NSMutableDictionary *)customAttributes;
-(void)addAttributesFromAttributeSet:(id)arg1 ;
-(long long)searchableItemFlags;
-(void)setSearchableItemFlags:(long long)arg1 ;
-(SCD_Struct_CS3)codedAttributes;
-(SCD_Struct_CS3)codedCustomAttributes;
-(BOOL)hasCodedCustomAttributes;
-(id)_getNonNullValueForKey:(id)arg1 ;
-(void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2 copy:(BOOL)arg3 ;
-(id)initWithAttributesSet:(id)arg1 ;
-(id)customAttributeDictionary;
-(id)initWithSerializedAttributes:(id)arg1 ;
-(id)serializedAttributes;
-(BOOL)isValidAttributeSet;
-(id)requiredAttributes;
-(void)_setOrRemoveValue:(id)arg1 forKey:(id)arg2 ;
-(void)addAttributesFromDictionary:(id)arg1 ;
-(id)initWithDecoder:(id)arg1 obj:(SCD_Struct_CS3)arg2 ;
-(void)setContentObj:(id)arg1 obj:(SCD_Struct_CS3)arg2 ;
-(CSDecoder *)contentDecoder;
-(SCD_Struct_CS3)contentObj;
-(id)attributeForKey:(id)arg1 ;
-(CSDecoder *)decoder;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)contentType;
-(NSDictionary *)attributes;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)attributeDictionary;
-(id)initWithAttributes:(id)arg1 ;
-(NSMutableDictionary *)mutableAttributes;
@end

