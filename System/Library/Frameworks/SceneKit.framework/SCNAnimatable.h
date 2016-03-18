/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCNAnimatable <NSObject>
@property (readonly) NSArray * animationKeys; 
@required
-(void)pauseAnimationForKey:(id)arg1;
-(void)resumeAnimationForKey:(id)arg1;
-(BOOL)isAnimationForKeyPaused:(id)arg1;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1;
-(void)removeAnimationForKey:(id)arg1;
-(void)addAnimation:(id)arg1 forKey:(id)arg2;
-(void)removeAllAnimations;

@end

