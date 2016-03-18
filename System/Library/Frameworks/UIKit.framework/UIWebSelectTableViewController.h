/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIKeyInput.h>

@class DOMHTMLSelectElement, NSArray, UIWebSelectPopover, NSString;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {

	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	NSArray* _groupsAndOptions;
	unsigned long long _singleSelectionIndex;
	unsigned long long _singleSelectionSection;
	BOOL _allowsMultipleSelection;
	double _fontSize;
	double _maximumTextWidth;
	long long _textAlignment;
	UIWebSelectPopover* _popover;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;                      //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) NSArray * _groupsAndOptions;                                //@synthesize groupsAndOptions=_groupsAndOptions - In the implementation block
@property (nonatomic,retain) NSArray * _cachedItems;                                     //@synthesize cachedItems=_cachedItems - In the implementation block
@property (assign,nonatomic) UIWebSelectPopover * _popover;                              //@synthesize popover=_popover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_cachedItems:(NSArray *)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(NSArray *)_cachedItems;
-(void)set_groupsAndOptions:(NSArray *)arg1 ;
-(void)_setupGroupsAndOptions;
-(BOOL)_isEmpty;
-(id)_optionsForSection:(long long)arg1 ;
-(id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(BOOL)arg4 ;
-(NSArray *)_groupsAndOptions;
-(UIWebSelectPopover *)_popover;
-(void)set_popover:(UIWebSelectPopover *)arg1 ;
@end

