/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying> {

	NSNumber* _itemIdentifier;
	NSString* _podcastFeedURLIdentifier;
	long long _identiferType;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedURLIdentifier;              //@synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier - In the implementation block
@property (nonatomic,readonly) long long identiferType;                        //@synthesize identiferType=_identiferType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)longLongValue;
-(id)stringValue;
-(id)initWithNumber:(id)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
-(NSNumber *)itemIdentifier;
-(id)numberValue;
-(void)setPodcastFeedURLIdentifier:(NSString *)arg1 ;
-(id)initWithPodcastFeedURL:(id)arg1 ;
-(long long)identiferType;
-(NSString *)podcastFeedURLIdentifier;
@end

