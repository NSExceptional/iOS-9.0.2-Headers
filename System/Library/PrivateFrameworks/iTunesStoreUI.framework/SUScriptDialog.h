/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {

	NSString* _body;
	id _buttons;
	NSNumber* _cancelButtonIndex;
	NSNumber* _destructiveButtonIndex;
	id _textFields;
	NSString* _title;

}

@property (retain) NSString * body; 
@property (retain) id buttons; 
@property (retain) NSNumber * cancelButtonIndex; 
@property (retain) NSNumber * destructiveButtonIndex; 
@property (retain) id textFields; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)cancelButtonIndex;
-(void)setCancelButtonIndex:(NSNumber *)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(void)dismiss;
-(id)textFields;
-(id)buttons;
-(void)setDestructiveButtonIndex:(NSNumber *)arg1 ;
-(NSNumber *)destructiveButtonIndex;
-(void)setBody:(NSString *)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setTextFields:(id)arg1 ;
-(void)setButtons:(id)arg1 ;
-(id)_nativeDialog;
-(void)_logSheetWarnings;
-(void)showSheet;
-(void)showFromDOMElement:(id)arg1 ;
-(void)showSheetInPopOver:(id)arg1 ;
@end
