/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView {

	id _value;
	id _alternate;
	double _scale;
	BOOL _showAlternate;
	BOOL _flipped;
	int _currentAnimation;
	UITabBar* _tabBar;
	int _buttonTag;

}
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 ;
-(void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3 ;
-(void)setAlternateImage:(id)arg1 ;
@end
