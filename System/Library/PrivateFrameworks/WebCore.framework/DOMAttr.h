/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString, DOMElement, DOMCSSStyleDeclaration;

@interface DOMAttr : DOMNode

@property (copy,readonly) NSString * name; 
@property (readonly) BOOL specified; 
@property (copy) NSString * value; 
@property (readonly) DOMElement * ownerElement; 
@property (readonly) DOMCSSStyleDeclaration * style; 
-(NSString *)name;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(DOMCSSStyleDeclaration *)style;
-(BOOL)specified;
-(DOMElement *)ownerElement;
-(BOOL)isId;
@end

