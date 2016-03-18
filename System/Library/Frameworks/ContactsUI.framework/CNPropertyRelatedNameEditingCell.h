/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleEditingCell.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>

@class NSString;

@interface CNPropertyRelatedNameEditingCell : CNPropertySimpleEditingCell <CNContactPickerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performAccessoryAction;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
@end

