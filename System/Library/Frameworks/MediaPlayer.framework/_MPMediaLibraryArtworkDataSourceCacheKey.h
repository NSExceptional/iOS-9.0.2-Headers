/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject {

	id _catalogIdentifier;
	CGSize _representationSize;

}

@property (nonatomic,copy) id catalogIdentifier;                     //@synthesize catalogIdentifier=_catalogIdentifier - In the implementation block
@property (assign,nonatomic) CGSize representationSize;              //@synthesize representationSize=_representationSize - In the implementation block
-(CGSize)representationSize;
-(void)setRepresentationSize:(CGSize)arg1 ;
-(id)initWithArtworkCatalog:(id)arg1 representativeSize:(CGSize)arg2 ;
-(id)catalogIdentifier;
-(void)setCatalogIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

