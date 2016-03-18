/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <iTunesStoreUI/SUMediaItemCellConfiguration.h>

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration {

	SCD_Struct_MS0 _position;

}

@property (assign,nonatomic) SCD_Struct_MS0 position;              //@synthesize position=_position - In the implementation block
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(id)init;
-(void)setPosition:(SCD_Struct_MS0)arg1 ;
-(SCD_Struct_MS0)position;
-(unsigned long long)indexOfLabelForPurchaseAnimation;
-(void)drawBackgroundWithModifiers:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(void)reloadImages;
-(void)reloadStrings;
-(void)reloadLayoutInformation;
-(BOOL)showContentRating;
@end

