/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSDictionary, ML3MusicLibrary, NSString, NSURL;

@interface ML3Artwork : NSObject {

	long long _artworkType;
	long long _sourceType;
	NSDictionary* _interestDictionary;
	ML3MusicLibrary* _musicLibrary;
	NSString* _artworkToken;
	NSString* _relativePath;
	NSURL* _originalFileURL;

}

@property (nonatomic,__weak,readonly) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                            //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) long long artworkType;                              //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                               //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) NSString * relativePath;                            //@synthesize relativePath=_relativePath - In the implementation block
@property (nonatomic,retain) NSDictionary * interestDictionary;                    //@synthesize interestDictionary=_interestDictionary - In the implementation block
@property (nonatomic,readonly) NSURL * originalFileURL;                            //@synthesize originalFileURL=_originalFileURL - In the implementation block
-(id)initWithToken:(id)arg1 artworkType:(long long)arg2 musicLibrary:(id)arg3 ;
-(id)fileURLForSize:(CGSize)arg1 ;
-(NSDictionary *)interestDictionary;
-(void)setInterestDictionary:(NSDictionary *)arg1 ;
-(NSURL *)originalFileURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)sourceType;
-(long long)artworkType;
-(ML3MusicLibrary *)musicLibrary;
-(id)initWithToken:(id)arg1 relativePath:(id)arg2 artworkType:(long long)arg3 musicLibrary:(id)arg4 ;
-(void)_faultInProperties;
-(id)_interestDataFromInterestDictionary:(id)arg1 ;
-(NSString *)artworkToken;
-(id)_interestDictionaryFromInterestData:(id)arg1 ;
-(NSString *)relativePath;
@end

