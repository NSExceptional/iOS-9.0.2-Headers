/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIUCBBarButtonVisualProviderIOS.h>

@class UIView, UIColor;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	UIView* _selectionBackgroundView;
	UIColor* _selectionBackgroundTintColor;
	UIColor* _selectionTintColor;

}

@property (nonatomic,retain) UIColor * selectionBackgroundTintColor;              //@synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor - In the implementation block
@property (nonatomic,retain) UIColor * selectionTintColor;                        //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)setSelectionBackgroundTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionBackgroundTintColor;
@end

