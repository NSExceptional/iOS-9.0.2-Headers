/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor;

@interface WBSGeneratedTouchIcon : NSObject {

	BOOL _generatedFromIcon;
	BOOL _generatedFromFallbackIcon;
	UIImage* _touchIcon;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIImage * touchIcon;                                                            //@synthesize touchIcon=_touchIcon - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,getter=isGeneratedFromIcon,nonatomic) BOOL generatedFromIcon;                              //@synthesize generatedFromIcon=_generatedFromIcon - In the implementation block
@property (assign,getter=isGeneratedFromFallbackIcon,nonatomic) BOOL generatedFromFallbackIcon;              //@synthesize generatedFromFallbackIcon=_generatedFromFallbackIcon - In the implementation block
+(id)generatedTouchIconWithIcon:(id)arg1 backgroundColor:(id)arg2 generatedFromIcon:(BOOL)arg3 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)isGeneratedFromIcon;
-(BOOL)isGeneratedFromFallbackIcon;
-(void)setGeneratedFromFallbackIcon:(BOOL)arg1 ;
-(UIImage *)touchIcon;
-(void)setTouchIcon:(UIImage *)arg1 ;
-(void)setGeneratedFromIcon:(BOOL)arg1 ;
@end

