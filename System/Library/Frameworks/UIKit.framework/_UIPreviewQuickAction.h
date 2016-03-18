/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString, UIColor;

@interface _UIPreviewQuickAction : NSObject {

	UIImage* _image;
	UIImage* _highlightedImage;
	NSString* _title;
	UIColor* _titleColor;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * highlightedImage;              //@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                    //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
+(id)actionWithImage:(id)arg1 highlightedImage:(id)arg2 title:(id)arg3 titleColor:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
@end

