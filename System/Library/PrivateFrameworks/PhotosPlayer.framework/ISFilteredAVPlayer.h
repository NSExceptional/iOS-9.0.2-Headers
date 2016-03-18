/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@interface ISFilteredAVPlayer : AVPlayer {

	BOOL _filterEnabled;
	float _filterSweepValue;

}

@property (assign,getter=isFilterEnabled,nonatomic) BOOL filterEnabled;              //@synthesize filterEnabled=_filterEnabled - In the implementation block
@property (assign,nonatomic) float filterSweepValue;                                 //@synthesize filterSweepValue=_filterSweepValue - In the implementation block
-(void)replaceCurrentItemWithPlayerItem:(id)arg1 ;
-(void)_updateAudioMix;
-(BOOL)isFilterEnabled;
-(float)filterSweepValue;
-(void)setFilterEnabled:(BOOL)arg1 ;
-(void)setFilterSweepValue:(float)arg1 ;
@end

