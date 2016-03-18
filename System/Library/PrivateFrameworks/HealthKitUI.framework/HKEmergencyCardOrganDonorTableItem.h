/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>

@class HKMedicalIDEditorPickerCell, _HKMedicalIDMultilineStringCell, _HKCustomInsetCellLayoutManager;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {

	HKMedicalIDEditorPickerCell* _editableCell;
	_HKMedicalIDMultilineStringCell* _displayCell;
	_HKCustomInsetCellLayoutManager* _layoutManager;

}
-(id)title;
-(void)commitEditing;
-(BOOL)hasPresentableData;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(BOOL)canEditRowAtIndex:(long long)arg1 ;
-(long long)editingStyleForRowAtIndex:(long long)arg1 ;
-(long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(id)_createEditableCell;
-(id)_displayCell;
@end

