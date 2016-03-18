/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, NSMutableDictionary, NSString;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {

	int _state;
	BOOL _renderHTML;
	NSMutableString* _currentPlist;
	NSMutableDictionary* _activationTicket;
	BOOL _recertifying;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)stringForState:(int)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(id)activationTicket:(id*)arg1 andRenderHTML:(BOOL*)arg2 ;
-(id)flattenedDictString:(id)arg1 ;
-(void)appendClosingTagForElementName:(id)arg1 ;
-(void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2 ;
-(void)setRecertifying:(BOOL)arg1 ;
-(id)activationTicket:(id*)arg1 ;
@end

