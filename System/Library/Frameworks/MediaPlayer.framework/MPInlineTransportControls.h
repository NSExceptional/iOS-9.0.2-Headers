/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:21 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@class UILabel, UIActivityIndicatorView;

@interface MPInlineTransportControls : MPTransportControls {

	UILabel* _loadingMovieLabel;
	UIActivityIndicatorView* _loadingMovieIndicator;

}

@property (nonatomic,readonly) CGRect availableProgressControlAreaFrame; 
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(id)pauseButtonImage;
-(id)playButtonImage;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(void)_disableAnimationIfNecessary:(id)arg1 ;
-(void)_enableAnimationIfNecessary:(id)arg1 ;
-(CGRect)availableProgressControlAreaFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

