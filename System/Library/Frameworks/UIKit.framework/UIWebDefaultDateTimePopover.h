/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebDateTimePopoverViewController* _webDateTimeViewController;

}

@property (nonatomic,retain) UIWebDateTimePopoverViewController * _webDateTimeViewController;              //@synthesize webDateTimeViewController=_webDateTimeViewController - In the implementation block
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)clear:(id)arg1 ;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)set_webDateTimeViewController:(UIWebDateTimePopoverViewController *)arg1 ;
-(UIWebDateTimePopoverViewController *)_webDateTimeViewController;
@end

