/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextTapRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UISelectionTapRecognizer : UITextTapRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(UIResponder*<UITextInput>)textView;
-(BOOL)isCloseToSelection;
@end

