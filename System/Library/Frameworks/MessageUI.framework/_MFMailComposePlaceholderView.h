/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class MFComposeHeaderView, MFComposeSubjectView;

@interface _MFMailComposePlaceholderView : UIScrollView {

	MFComposeHeaderView* _toField;
	MFComposeHeaderView* _multiView;
	MFComposeSubjectView* _subjectView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubject:(id)arg1 ;
@end

