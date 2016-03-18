/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPAVItemQueueIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPMediaItem, NSString;

@interface MPMediaQueryQueueFeederItemIdentifier : NSObject <MPAVItemQueueIdentifier, NSSecureCoding> {

	unsigned long long _feederRevisionID;
	MPMediaItem* _mediaItem;
	unsigned long long _repeatIndex;

}

@property (nonatomic,readonly) unsigned long long feederRevisionID;              //@synthesize feederRevisionID=_feederRevisionID - In the implementation block
@property (nonatomic,readonly) MPMediaItem * mediaItem;                          //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatIndex;                   //@synthesize repeatIndex=_repeatIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithMediaItem:(id)arg1 repeatIndex:(unsigned long long)arg2 feederRevisionID:(unsigned long long)arg3 ;
-(unsigned long long)feederRevisionID;
-(unsigned long long)repeatIndex;
-(MPMediaItem *)mediaItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

