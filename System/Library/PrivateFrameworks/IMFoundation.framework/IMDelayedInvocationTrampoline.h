/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {

	NSArray* _modes;
	double _delay;

}
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3 ;
@end

