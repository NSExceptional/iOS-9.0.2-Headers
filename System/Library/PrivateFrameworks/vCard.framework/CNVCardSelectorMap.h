/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject {

	NSMutableArray* _strings;
	NSMutableArray* _selectors;

}
-(void)dealloc;
-(id)init;
-(void)setSelector:(SEL)arg1 forString:(id)arg2 ;
-(SEL)selectorForString:(id)arg1 ;
@end

