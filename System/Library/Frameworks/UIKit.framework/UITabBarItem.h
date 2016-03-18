/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>

@class NSString, UIImage, UIView, UIColor;

@interface UITabBarItem : UIBarItem {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	NSString* _badgeValue;
	UIView* _view;
	long long _tag;
	id _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	long long _barMetrics;
	long long _imageStyle;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) BOOL viewIsCustom; 
@property (assign,nonatomic) BOOL animatedBadge; 
@property (nonatomic,retain) UIImage * unselectedImage; 
@property (assign,nonatomic) SEL action; 
@property (assign,nonatomic) id target; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (assign,setter=_setBarMetrics:,nonatomic) long long _barMetrics;              //@synthesize barMetrics=_barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) long long _imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
+(id)_appearanceBlindViewClasses;
-(void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3 ;
-(id)nextResponder;
-(void)_updateView;
-(id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2 withTint:(BOOL)arg3 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3 ;
-(id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2 ;
-(void)_updateViewAndPositionItems:(BOOL)arg1 ;
-(void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2 ;
-(id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(UIOffset*)arg3 ;
-(UIView *)view;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(void)setView:(UIView *)arg1 ;
-(id)target;
-(BOOL)isSystemItem;
-(long long)systemItem;
-(void)setAction:(SEL)arg1 ;
-(UIImage *)unselectedImage;
-(id)_internalTitle;
-(id)_internalTemplateImage;
-(BOOL)viewIsCustom;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(void)setViewIsCustom:(BOOL)arg1 ;
-(void)setAnimatedBadge:(BOOL)arg1 ;
-(BOOL)animatedBadge;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)image;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(UIColor *)_tintColor;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 ;
-(UIImage *)selectedImage;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2 ;
-(NSString *)badgeValue;
-(id)titleTextAttributesForState:(unsigned long long)arg1 ;
-(BOOL)_isSelected;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)_setSelected:(BOOL)arg1 ;
-(void)_updateToMatchCurrentState;
-(long long)_barMetrics;
-(void)_setBarMetrics:(long long)arg1 ;
-(void)_setImageStyle:(long long)arg1 ;
-(long long)_imageStyle;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(id)_internalTemplateImages;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)imageInsets;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
@end

