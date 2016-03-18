/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {

	unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >* _textIterator;
	Vector<unsigned short, 0, WTF::CrashOnOverflow, 16>* _upconvertedText;

}

@property (readonly) BOOL atEnd; 
@property (readonly) WKDOMRange * currentRange; 
@property (readonly) unsigned long long currentTextLength; 
@property (readonly) const unsigned short* currentTextPointer; 
-(BOOL)atEnd;
-(unsigned long long)currentTextLength;
-(const unsigned short*)currentTextPointer;
-(WKDOMRange *)currentRange;
-(void)advance;
-(id)initWithRange:(id)arg1 ;
@end

