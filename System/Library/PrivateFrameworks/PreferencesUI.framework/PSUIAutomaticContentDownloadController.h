/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, NSMutableDictionary;

@interface PSUIAutomaticContentDownloadController : PSListController {

	id _settingsChangedObserver;
	NSMutableArray* _applications;
	NSMutableDictionary* _applicationStates;

}

@property (nonatomic,retain) NSMutableArray * applications;                        //@synthesize applications=_applications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationStates;              //@synthesize applicationStates=_applicationStates - In the implementation block
-(id)whitelist;
-(id)specifiers;
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setApplications:(NSMutableArray *)arg1 ;
-(void)setApplicationEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)applicationEnabled:(id)arg1 ;
-(void)setBackgroundRefreshState:(id)arg1 withSpecifier:(id)arg2 ;
-(id)backgroundRefreshState:(id)arg1 ;
-(NSMutableDictionary *)applicationStates;
-(void)setApplicationStates:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)applications;
@end

