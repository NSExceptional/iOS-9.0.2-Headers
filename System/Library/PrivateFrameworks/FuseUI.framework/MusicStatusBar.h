/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBar.h>

@protocol MusicNowPlayingAtmosphericStatusBarDelegate;
@interface MusicStatusBar : UIStatusBar {

	id<MusicNowPlayingAtmosphericStatusBarDelegate> __music_statusBarDelegate;

}

@property (assign,nonatomic,__weak) id<MusicNowPlayingAtmosphericStatusBarDelegate> _music_statusBarDelegate;              //@synthesize _music_statusBarDelegate=__music_statusBarDelegate - In the implementation block
-(void)requestStyle:(long long)arg1 animationParameters:(id)arg2 ;
-(id<MusicNowPlayingAtmosphericStatusBarDelegate>)_music_statusBarDelegate;
-(void)set_music_statusBarDelegate:(id<MusicNowPlayingAtmosphericStatusBarDelegate>)arg1 ;
@end

