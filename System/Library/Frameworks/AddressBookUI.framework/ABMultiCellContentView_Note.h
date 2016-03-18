/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABMultiCellContentView.h>
#import <libobjc.A.dylib/ABSwellTextViewDelegate.h>

@class ABSwellTextView, NSString;

@interface ABMultiCellContentView_Note : ABMultiCellContentView <ABSwellTextViewDelegate> {

	ABSwellTextView* _textView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)layoutSubviewsForView:(id)arg1 usingSize:(CGSize)arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6 ;
+(void)setupTextView:(id)arg1 withStyleProvider:(id)arg2 whenEditing:(BOOL)arg3 ;
+(id)swellTextViewForReuse;
+(id)labelTextForPropertyGroup:(id)arg1 info:(id)arg2 styleProvider:(id)arg3 ;
-(void)reloadFromModel;
-(void)setAbCellStyle:(int)arg1 ;
-(void)updateSubviewsForNewStateAnimated:(BOOL)arg1 ;
-(id)viewForFirstResponder;
-(BOOL)canBeginEditingAnytime;
-(BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2 ;
-(CGRect)focusRectForView:(id)arg1 ;
-(BOOL)shouldUseTwoLineLabels;
-(BOOL)swellTextViewShouldBeginEditing:(id)arg1 ;
-(BOOL)swellTextViewShouldEndEditing:(id)arg1 ;
-(void)swellTextViewDidBeginEditing:(id)arg1 ;
-(void)swellTextViewDidEndEditing:(id)arg1 ;
-(void)swellTextViewTextDidChange:(id)arg1 ;
-(void)swellTextView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(CGRect)frameForLabel;
-(void)dealloc;
-(void)reload;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setLabelText:(id)arg1 ;
@end

