/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTVoiceTriggerEnabledPolicy : _VTStatePolicy {

	int _notificationToken;
	BOOL _enabled;
	BOOL _primedPhraseSpotter;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_update;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_listenForReload;
@end

