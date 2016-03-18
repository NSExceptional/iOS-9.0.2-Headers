/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray, DOMRange;

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser {

	/*^block*/id _foundDedentedAttributionRangeBlock;
	/*^block*/id _foundTrailingEmptyQuoteRangeBlock;
	id<MFMessageBodyElement_Private> _lastUnindentedElement;
	id<MFMessageBodyElement_Private> _lastUnindentedAttributionHint;
	NSMutableArray* _unindentedSiblingNodes;
	unsigned long long _unindentedSiblingGap;
	DOMRange* _trailingEmptyQuoteRange;
	unsigned long long _trailingEmptyQuoteLevel;

}
-(void)setFoundDedentedAttributionRangeBlock:(/*^block*/id)arg1 ;
-(void)setFoundTrailingEmptyQuoteRangeBlock:(/*^block*/id)arg1 ;
-(void)copyBlocks;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)_enumerateSurroundableRangesInRange:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)doesRange:(id)arg1 containAnyElementWithTagName:(id)arg2 ;
-(void)dealloc;
@end

