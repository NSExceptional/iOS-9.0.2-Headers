/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class ACAccount, NSString, NSArray, NSMutableSet;

@interface ScheduleSettingsStyleController : PSListItemsController {

	ACAccount* _account;
	NSString* _mailAccountUniqueId;
	NSArray* _mailboxInfos;
	NSMutableSet* _monitored;
	BOOL _supportsUserPushedMailboxes;
	BOOL _isExchangeAccount;
	BOOL _ignoringNotifications;

}
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_accountsChanged;
-(id)notAvailableText;
-(BOOL)shouldShowMailboxes;
-(void)reloadFolders;
-(void)_reloadFoldersAndSpecifiersForced:(BOOL)arg1 ;
-(void)_reloadFoldersAndSpecifiers;
-(void)setPushStateForMailbox:(id)arg1 state:(BOOL)arg2 ;
-(void)listItemSelected:(id)arg1 ;
@end

