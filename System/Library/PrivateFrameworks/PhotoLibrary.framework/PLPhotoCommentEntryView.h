/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PLPhotoCommentEntryViewDelegate;
@class UILabel, UITextView, UIButton, NSString;

@interface PLPhotoCommentEntryView : UIView <UITextViewDelegate> {

	UILabel* placeholderLabel;
	UILabel* _placeholderLabel;
	UITextView* _textView;
	UIButton* _postButton;
	id<PLPhotoCommentEntryViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) UITextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * placeholderLabel;                       //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain,readonly) UIButton * postButton;                            //@synthesize postButton=_postButton - In the implementation block
@property (assign,nonatomic) id<PLPhotoCommentEntryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)trimmedText;
-(UIButton *)postButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PLPhotoCommentEntryViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PLPhotoCommentEntryViewDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)clearText;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(double)preferredHeight;
-(UITextView *)textView;
-(UILabel *)placeholderLabel;
@end

