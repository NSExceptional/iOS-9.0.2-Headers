/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CMKTimelapseShutterRingView : UIView {

	BOOL _animating;
	CALayer* __smallTickLayer;
	CALayer* __largeTickLayer;
	CAReplicatorLayer* __smallTickReplicatorLayer;
	CAReplicatorLayer* __largeTickReplicatorLayer;
	CALayer* __timerHandLayer;
	CALayer* __timerHandParentLayer;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;                            //@synthesize animating=_animating - In the implementation block
@property (nonatomic,readonly) CALayer * _smallTickLayer;                                  //@synthesize _smallTickLayer=__smallTickLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _largeTickLayer;                                  //@synthesize _largeTickLayer=__largeTickLayer - In the implementation block
@property (nonatomic,readonly) CAReplicatorLayer * _smallTickReplicatorLayer;              //@synthesize _smallTickReplicatorLayer=__smallTickReplicatorLayer - In the implementation block
@property (nonatomic,readonly) CAReplicatorLayer * _largeTickReplicatorLayer;              //@synthesize _largeTickReplicatorLayer=__largeTickReplicatorLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _timerHandLayer;                                  //@synthesize _timerHandLayer=__timerHandLayer - In the implementation block
@property (nonatomic,readonly) CALayer * _timerHandParentLayer;                            //@synthesize _timerHandParentLayer=__timerHandParentLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)_removeStartAnimations;
-(void)_removeStopAnimations;
-(void)_addStartAnimations;
-(void)_addStopAnimations;
-(BOOL)_shouldUseAnimations;
-(double)_rotationZFromTransform:(CATransform3D)arg1 ;
-(CALayer *)_smallTickLayer;
-(CALayer *)_largeTickLayer;
-(CAReplicatorLayer *)_smallTickReplicatorLayer;
-(CAReplicatorLayer *)_largeTickReplicatorLayer;
-(CALayer *)_timerHandLayer;
-(CALayer *)_timerHandParentLayer;
@end

