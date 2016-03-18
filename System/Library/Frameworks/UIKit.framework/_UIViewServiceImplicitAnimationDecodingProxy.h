/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface.h>

@class _UIViewAnimationAttributes, NSString;

@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface> {

	SEL _implicitAnimationSelector;
	_UIViewAnimationAttributes* _animationAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyDecodingAnimationsForTarget:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 ;
@end
