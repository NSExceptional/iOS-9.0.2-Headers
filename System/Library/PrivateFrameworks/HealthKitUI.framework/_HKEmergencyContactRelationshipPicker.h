/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol _HKEmergencyContactRelationshipPickerDelegate;
@class NSArray;

@interface _HKEmergencyContactRelationshipPicker : UITableViewController {

	NSArray* _tokens;
	NSArray* _labels;
	id<_HKEmergencyContactRelationshipPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_HKEmergencyContactRelationshipPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_cancelTapped:(id)arg1 ;
-(void)setDelegate:(id<_HKEmergencyContactRelationshipPickerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<_HKEmergencyContactRelationshipPickerDelegate>)delegate;
-(void)viewDidLoad;
@end

