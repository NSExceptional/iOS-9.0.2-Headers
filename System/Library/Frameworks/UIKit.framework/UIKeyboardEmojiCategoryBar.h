/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryControl.h>

@class UIKeyboardEmojiCategoryController, UIView, UIKeyboardEmojiGraphicsTraits, NSString;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {

	UIKeyboardEmojiCategoryController* _categoryController;
	int _selected;
	UIView* _scrubView;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isScrubbing;
	double _scrubStartXLocation;

}

@property (assign) long long selectedIndex; 
@property (nonatomic,retain) UIView * scrubView;                                               //@synthesize scrubView=_scrubView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;              //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dimKeys:(id)arg1 ;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(void)setCategory:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)receiveNotifictaion:(id)arg1 ;
-(UIView *)scrubView;
-(CGRect)categorySelectedCircleRect:(long long)arg1 ;
-(void)animateScrubberToRect:(CGRect)arg1 ;
-(CGRect)frameForDivider:(int)arg1 ;
-(void)updateCategory;
-(void)setScrubView:(UIView *)arg1 ;
-(void)setEmojiGraphicsTraits:(UIKeyboardEmojiGraphicsTraits *)arg1 ;
@end

