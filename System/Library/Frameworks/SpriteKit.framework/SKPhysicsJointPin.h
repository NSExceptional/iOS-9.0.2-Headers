/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerAngleLimit;
	double _upperAngleLimit;
	double _frictionTorque;
	double _rotationSpeed;
	CGPoint _anchor;

}

@property (assign,nonatomic) BOOL shouldEnableLimits;              //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerAngleLimit;               //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;               //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
@property (assign,nonatomic) double frictionTorque;                //@synthesize frictionTorque=_frictionTorque - In the implementation block
@property (assign,nonatomic) double rotationSpeed;                 //@synthesize rotationSpeed=_rotationSpeed - In the implementation block
@property (readonly) CGPoint anchor;                               //@synthesize anchor=_anchor - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(BOOL)shouldEnableLimits;
-(double)rotationSpeed;
-(void)setRotationSpeed:(double)arg1 ;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setFrictionTorque:(double)arg1 ;
-(double)frictionTorque;
-(CGPoint)anchor;
@end

