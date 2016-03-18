/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(id)queuePlayerWithItems:(id)arg1 ;
+(id)playerWithPlayerItem:(id)arg1 ;
+(void)initialize;
-(long long)_defaultActionAtItemEnd;
-(BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)removeAllItems;
-(void)advanceToNextItem;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeItem:(id)arg1 ;
-(id)items;
-(id)initWithItems:(id)arg1 ;
@end

