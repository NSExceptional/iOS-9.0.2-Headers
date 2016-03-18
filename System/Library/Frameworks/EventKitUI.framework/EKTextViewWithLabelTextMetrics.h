/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:09 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>
#import <libobjc.A.dylib/CalendarLabelTextMetrics.h>

@class UIFont, UIColor, NSString;

@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics> {

	long long lineBreakMode;

}

@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(long long)lineBreakMode;
-(CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2 ;
-(long long)numberOfLines;
-(void)setURL:(id)arg1 ;
@end

