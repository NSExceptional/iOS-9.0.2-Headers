/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface RMListItem : NSObject {

	CGPDFNode* _paragraphs;
	unsigned long long _count;
	unsigned long long _pos;

}

@property (readonly) CGPDFNode* paragraphNodes;              //@synthesize paragraphs=_paragraphs - In the implementation block
@property (readonly) CGPDFPageRef page; 
-(id)initWithCount:(unsigned long long)arg1 ;
-(CGRect)bounds;
-(void)dealloc;
-(CGPDFPageRef)page;
-(void)addParagraph:(CGPDFNodeRef)arg1 ;
-(CGPDFNode*)paragraphNodes;
@end

