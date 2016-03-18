/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UILabel, NSArray, PSSpecifier;

@interface PSLargeTextController : PSListController {

	UILabel* _bodyExampleLabel;
	UILabel* _headlineExampleLabel;
	long long _selectedCategoryIndex;
	NSArray* _contentSizeCategories;
	PSSpecifier* _sliderGroupSpecifier;
	BOOL _usesExtendedRange;
	BOOL _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) BOOL showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(id)specifiers;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getDynamicTypeValueForSpecifier:(id)arg1 ;
-(void)setShowsExtendedRangeSwitch:(BOOL)arg1 ;
-(BOOL)showsExtendedRangeSwitch;
@end
