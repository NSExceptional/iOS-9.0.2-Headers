/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject {

	NSInvocation* _invocation;
	unsigned long long _errorCount;

}

@property (nonatomic,readonly) NSInvocation * invocation; 
@property (assign,nonatomic) unsigned long long errorCount;              //@synthesize errorCount=_errorCount - In the implementation block
+(id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2 ;
-(void)dealloc;
-(id)initWithInvocation:(id)arg1 ;
-(NSInvocation *)invocation;
-(unsigned long long)errorCount;
-(void)setErrorCount:(unsigned long long)arg1 ;
@end

