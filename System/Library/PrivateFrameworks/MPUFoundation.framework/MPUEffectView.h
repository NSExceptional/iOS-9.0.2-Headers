/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MPUEffectCache, UIImage, _UIBackdropViewSettings, UIView;

@interface MPUEffectView : UIView {

	MPUEffectCache* _effectCache;
	UIImage* _effectImage;
	_UIBackdropViewSettings* _effectSettings;
	UIView* _referenceView;

}

@property (nonatomic,retain) MPUEffectCache * effectCache;                          //@synthesize effectCache=_effectCache - In the implementation block
@property (nonatomic,retain) UIImage * effectImage;                                 //@synthesize effectImage=_effectImage - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * effectSettings;              //@synthesize effectSettings=_effectSettings - In the implementation block
@property (nonatomic,retain) UIView * referenceView;                                //@synthesize referenceView=_referenceView - In the implementation block
+(void)coordinateAsyncEffectViewPropertyChanges:(/*^block*/id)arg1 withAnimationBlock:(/*^block*/id)arg2 ;
-(_UIBackdropViewSettings *)effectSettings;
-(UIView *)referenceView;
-(void)setReferenceView:(UIView *)arg1 ;
-(void)setEffectSettings:(_UIBackdropViewSettings *)arg1 ;
-(MPUEffectCache *)effectCache;
-(void)setEffectCache:(MPUEffectCache *)arg1 ;
-(void)setEffectImage:(UIImage *)arg1 ;
-(UIImage *)effectImage;
-(void)updateEffect;
@end

