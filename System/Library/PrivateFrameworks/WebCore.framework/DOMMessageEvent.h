/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@class NSString, DOMMessagePort;

@interface DOMMessageEvent : DOMEvent

@property (copy,readonly) NSString * origin; 
@property (copy,readonly) NSString * lastEventId; 
@property (readonly) id<DOMEventTarget> source; 
@property (readonly) NSString * data; 
@property (readonly) DOMMessagePort * messagePort; 
-(NSString *)data;
-(NSString *)origin;
-(id<DOMEventTarget>)source;
-(NSString *)lastEventId;
-(DOMMessagePort *)messagePort;
-(void)initMessageEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8 ;
@end

