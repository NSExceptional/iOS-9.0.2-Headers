/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	double _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	long long _atLeastTwoUpdates;
	double _percentComplete;

}

@property (nonatomic,readonly) double percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double velocity; 
-(id)init;
-(id)description;
-(double)percentComplete;
-(double)velocity;
-(void)addProgressObserver:(id)arg1 ;
-(void)endInteraction:(BOOL)arg1 ;
-(unsigned long long)_indexOfObserver:(id)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
-(void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
@end
