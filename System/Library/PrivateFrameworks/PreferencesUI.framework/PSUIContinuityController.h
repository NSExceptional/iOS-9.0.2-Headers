/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class SuggestedAppsController;

@interface PSUIContinuityController : PSListController {

	SuggestedAppsController* _suggestedAppsController;

}
-(id)specifiers;
-(id)init;
-(void)profileNotification:(id)arg1 ;
-(BOOL)isContinuityRestricted;
-(void)updateContinuitySpecifiers;
-(id)isContinuityEnabled:(id)arg1 ;
-(void)setContinuityEnabled:(id)arg1 specifier:(id)arg2 ;
@end
