/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FIUIAnimatableObject : NSObject {

	NSMutableDictionary* _animatableProperties;

}
-(void)update:(double)arg1 ;
-(void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2 ;
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(id)_animatablePropertyForType:(unsigned long long)arg1 ;
-(void)removeAllAnimationsForPropertyType:(unsigned long long)arg1 ;
-(BOOL)areAnimationsInProgress;
-(id)endingValueForPropertyType:(unsigned long long)arg1 ;
@end

