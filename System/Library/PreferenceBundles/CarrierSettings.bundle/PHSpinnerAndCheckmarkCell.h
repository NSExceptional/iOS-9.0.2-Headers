/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:56 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/CarrierSettings.bundle/CarrierSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIProgressIndicator;

@interface PHSpinnerAndCheckmarkCell : PSTableCell {

	UIProgressIndicator* _spinner;
	unsigned _loading : 1;
	unsigned _rightAlignSpinner : 1;
	int _row;

}
-(void)setChecked:(BOOL)arg1 ;
-(void)setReallyChecked:(BOOL)arg1 ;
-(void)_removeSpinner;
-(void)_addSpinner;
-(void)setRow:(int)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
@end

