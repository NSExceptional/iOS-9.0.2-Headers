/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionRotate : SCNAction {

	SCNCActionRotate* _mycaction;

}
+(id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 ;
+(id)rotateByAngle:(double)arg1 aroundAxis:(SCNVector3)arg2 duration:(double)arg3 ;
+(id)rotateToAxisAngle:(SCNVector4)arg1 duration:(double)arg2 ;
+(id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(BOOL)arg5 ;
+(BOOL)supportsSecureCoding;
-(id)reversedAction;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
-(BOOL)isRelative;
@end

