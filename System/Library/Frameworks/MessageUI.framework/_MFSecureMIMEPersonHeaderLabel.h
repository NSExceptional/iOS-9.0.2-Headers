/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString;

@interface _MFSecureMIMEPersonHeaderLabel : UIView {

	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
-(id)initWithImage:(id)arg1 text:(id)arg2 textColor:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end
