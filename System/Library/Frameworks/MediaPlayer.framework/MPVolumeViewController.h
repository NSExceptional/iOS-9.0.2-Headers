/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>

@class MPVolumeView;

@interface MPVolumeViewController : UIViewController {

	MPVolumeView* _volumeView;

}

@property (nonatomic,readonly) MPVolumeView * volumeView;              //@synthesize volumeView=_volumeView - In the implementation block
-(MPVolumeView *)volumeView;
-(id)init;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
@end

