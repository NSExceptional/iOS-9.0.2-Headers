/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	double maxAllowedRotationAngle;

}

@property (assign,nonatomic,__weak) SCNNode * joint; 
@property (assign,nonatomic) double maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(double)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(double)arg1 ;
@end

