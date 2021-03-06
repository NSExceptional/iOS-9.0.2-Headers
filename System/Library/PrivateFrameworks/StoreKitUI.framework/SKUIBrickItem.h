/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject {

	NSString* _accessibilityLabel;
	SKUIArtwork* _artwork;
	long long _brickIdentifier;
	SKUICountdown* _countdown;
	SKUIEditorialComponent* _editorial;
	SKUILink* _link;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                   //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * artwork;                           //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) long long brickIdentifier;                       //@synthesize brickIdentifier=_brickIdentifier - In the implementation block
@property (nonatomic,readonly) SKUICountdown * countdown;                       //@synthesize countdown=_countdown - In the implementation block
@property (nonatomic,readonly) SKUIEditorialComponent * editorial;              //@synthesize editorial=_editorial - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                                 //@synthesize link=_link - In the implementation block
-(id)description;
-(NSString *)accessibilityLabel;
-(SKUILink *)link;
-(SKUIArtwork *)artwork;
-(id)initWithCustomPageContext:(id)arg1 ;
-(SKUICountdown *)countdown;
-(id)initWithBannerRoomContext:(id)arg1 ;
-(SKUIEditorialComponent *)editorial;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(long long)brickIdentifier;
-(void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2 ;
@end

