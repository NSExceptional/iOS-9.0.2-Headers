/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UITextContentViewDelegate.h>

@class PSTextView, NSString;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {

	PSTextView* _textView;

}

@property (nonatomic,retain) PSTextView * textView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)layoutSubviews;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTextView:(PSTextView *)arg1 ;
-(void)textContentViewDidEndEditing:(id)arg1 ;
-(void)textContentViewDidChange:(id)arg1 ;
-(PSTextView *)textView;
-(void)cellRemovedFromView;
-(void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3 ;
-(void)drawTitleInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
@end

