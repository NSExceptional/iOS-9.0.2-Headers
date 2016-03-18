/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIButton.h>

@interface AVButton : UIButton {

	UIEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitRectInsets;              //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
-(void)_updateSelected:(BOOL)arg1 highlighted:(BOOL)arg2 ;
-(BOOL)_drawingAsSelected;
-(void)_updateForStateChangeAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)didMoveToSuperview;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
@end

