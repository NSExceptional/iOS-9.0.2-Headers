/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMParentNode.h>

@class IKDOMHTMLCollection, IKDOMElement;

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
-(IKDOMElement *)firstElementChild;
-(long long)nodeType;
-(IKDOMHTMLCollection *)children;
-(id)nodeName;
-(IKDOMElement *)lastElementChild;
-(unsigned long long)childElementCount;
@end

