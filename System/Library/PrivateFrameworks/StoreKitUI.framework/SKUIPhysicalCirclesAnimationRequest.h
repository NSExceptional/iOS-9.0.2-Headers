/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {

	long long _animationType;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAnimationType:(long long)arg1 ;
-(long long)animationType;
-(void)finishAnimation;
-(void)_setCompletionBlock:(/*^block*/id)arg1 ;
@end

