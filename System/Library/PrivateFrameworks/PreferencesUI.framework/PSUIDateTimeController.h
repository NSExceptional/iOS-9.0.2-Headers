/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, NSTimer, PSSpecifier, PSWallClockMinuteTimer, NSString;

@interface PSUIDateTimeController : PSListController <UIPopoverControllerDelegate> {

	UIPopoverController* _setDateAndTimePopoverController;
	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	BOOL _localeForces24HourTime;
	BOOL _setDateAndTimePopoverShouldRePresent;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;
	PSWallClockMinuteTimer* _minuteTimer;

}

@property (retain) PSSpecifier * timeZoneSpecifier;                             //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;                           //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;                          //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSWallClockMinuteTimer * minuteTimer;              //@synthesize minuteTimer=_minuteTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(void)reloadTimezone;
-(PSWallClockMinuteTimer *)minuteTimer;
-(void)newCarrierNotification;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(void)_createDateTimeFormatters;
-(void)_updateCurrentTime;
-(void)setMinuteTimer:(PSWallClockMinuteTimer *)arg1 ;
-(void)setTimeZoneSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timeZoneSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2 ;
-(PSSpecifier *)currentTimeSpecifier;
-(id)makeCurrentTimeSpecifier;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)makeTimePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(id)is24HourTime:(id)arg1 ;
-(id)currentTimeString;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
@end

