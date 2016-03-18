/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <Preferences/PSEditableListController.h>

@class NSSet;

@interface APKnownNetworksController : PSEditableListController {

	CFLocaleRef _locale;
	CFDateFormatterRef _formatter;
	NSSet* _managedNetworkNames;

}
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)_createFormatter;
-(void)removeNetwork:(id)arg1 ;
@end

