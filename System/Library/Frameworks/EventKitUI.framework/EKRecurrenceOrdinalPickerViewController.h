/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;
@class UIPickerView, NSString;

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<EKRecurrenceOrdinalPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIPickerView * pickerView; 
@property (assign) id<EKRecurrenceOrdinalPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(int)ordinalValue;
-(id)_leftColumn;
-(id)_rightColumn;
-(int)dayMask;
-(UIPickerView *)pickerView;
-(void)setDelegate:(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id<EKRecurrenceOrdinalPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end

