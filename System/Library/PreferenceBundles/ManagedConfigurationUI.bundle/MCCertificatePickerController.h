/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListItemsController.h>

@interface MCCertificatePickerController : PSListItemsController
-(id)specifiers;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_setCellPropertiesOnSpecifier:(id)arg1 forCertificate:(SecCertificateRef)arg2 ;
-(void)setRowToSelect;
-(id)navigationTitle;
@end

