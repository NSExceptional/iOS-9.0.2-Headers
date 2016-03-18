/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLCardViewDelegate <NSObject>
@optional
-(void)passViewTapped:(id)arg1;
-(BOOL)passViewShouldFlip:(id)arg1;
-(BOOL)passViewShouldResize:(id)arg1;
-(BOOL)passViewBackGrowsCentered:(id)arg1;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
-(void)passView:(id)arg1 resizeButtonPressedForPass:(id)arg2;
-(void)passViewWillFlip:(id)arg1 animated:(BOOL)arg2;
-(void)passViewDidFlip:(id)arg1 animated:(BOOL)arg2;
-(void)passViewDidResize:(id)arg1 animated:(BOOL)arg2;

@end

