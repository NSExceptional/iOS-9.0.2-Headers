/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray, NSString;

@interface MPStoreArtworkRequestToken : NSObject <NSCopying> {

	BOOL _shouldIgnoreImage;
	NSURL* _artworkURL;
	NSArray* _lookupItemArtworks;
	NSString* _cropStyle;
	NSString* _sourceEditorialArtworkKind;

}

@property (nonatomic,copy) NSURL * artworkURL;                                 //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSArray * lookupItemArtworks;                       //@synthesize lookupItemArtworks=_lookupItemArtworks - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                               //@synthesize cropStyle=_cropStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreImage;                           //@synthesize shouldIgnoreImage=_shouldIgnoreImage - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;              //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setLookupItemArtworks:(NSArray *)arg1 ;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
-(BOOL)shouldIgnoreImage;
-(NSArray *)lookupItemArtworks;
-(NSURL *)artworkURL;
-(NSString *)cropStyle;
-(void)setCropStyle:(NSString *)arg1 ;
-(void)setShouldIgnoreImage:(BOOL)arg1 ;
-(NSString *)sourceEditorialArtworkKind;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

