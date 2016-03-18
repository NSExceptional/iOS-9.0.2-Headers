/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSMutableDictionary;

@interface MPSetPlaybackQueueCommand : MPRemoteCommand {

	NSMutableDictionary* _registeredSpecializedQueues;

}
-(id)_mediaRemoteCommandInfoOptions;
-(void)registerSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(int)arg3 queueParameters:(id)arg4 ;
-(void)unregisterSpecializedQueueIdentifier:(id)arg1 ;
@end

