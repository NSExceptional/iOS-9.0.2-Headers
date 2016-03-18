/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

	double _huggingPriority;
	double _compressionResistancePriority;

}

@property (readonly) double huggingPriority;                            //@synthesize huggingPriority=_huggingPriority - In the implementation block
@property (readonly) double compressionResistancePriority;              //@synthesize compressionResistancePriority=_compressionResistancePriority - In the implementation block
-(id)_priorityDescription;
-(double)priorityForVariable:(id)arg1 ;
-(double)huggingPriority;
-(double)compressionResistancePriority;
-(id)initWithLayoutItem:(id)arg1 value:(double)arg2 huggingPriority:(double)arg3 compressionResistancePriority:(double)arg4 orientation:(long long)arg5 ;
@end

