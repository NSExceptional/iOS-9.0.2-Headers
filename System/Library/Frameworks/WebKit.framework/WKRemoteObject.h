/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKRemoteObject : NSObject {

	RetainPtr<_WKRemoteObjectRegistry>* _objectRegistry;
	RetainPtr<_WKRemoteObjectInterface>* _interface;

}
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2 ;
@end

