/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKUIInviteesViewSection <NSObject>
@required
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1;
-(BOOL)canSelectRow:(id)arg1;
-(void)selectRow:(id)arg1;
-(double)estimatedHeightForRow:(id)arg1;
-(BOOL)canEditRow:(id)arg1;
-(long long)editingStyleForRow:(id)arg1;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2;
-(void)setTableViewCellHook:(/*^block*/id)arg1;
-(void)cancelOutstandingOperations;
-(unsigned long long)numberOfRows;
-(id)headerTitle;

@end

