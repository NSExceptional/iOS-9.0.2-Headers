/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPTextObject.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {

	CPCharSequence* charSequence;
	SCD_Struct_CP17* wordArray;
	unsigned wordCount;
	CPInlineContainer* inlineList;
	int lineNumber;
	int columnNumber;
	double baseline;
	BOOL baseLineIsNull;
	BOOL hasBeenSplit;
	BOOL hasBeenProcessed;
	BOOL maySplit;
	BOOL hasTabs;
	NSArray* columnBreaks;
	NSArray* xsegments;
	int levels;
	float maximumLetterGap;
	float maximumWordGap;
	int tabsBefore;
	BOOL irregular;
	unsigned leftSpacerIndex;
	unsigned rightSpacerIndex;
	BOOL isListItem;
	unsigned listSpacerIndex;
	BOOL lineBreakAfter;
	CPPDFStyle* uniformStyle;
	unsigned short uniformStyleFlags;
	double monospaceWidth;
	unsigned* spacesBefore;
	BOOL disposed;

}

@property (assign,nonatomic) unsigned leftSpacerIndex; 
@property (assign,nonatomic) unsigned rightSpacerIndex; 
@property (assign,nonatomic) BOOL isListItem; 
@property (assign,nonatomic) unsigned listSpacerIndex; 
@property (assign,nonatomic) BOOL lineBreakAfter; 
-(void)dispose;
-(CGRect)bounds;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(CGPoint)anchor;
-(id)properties;
-(long long)zOrder;
-(void)fitBoundsToChildren;
-(void)accept:(id)arg1 ;
-(void)translateObjectYBy:(double)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isMonospaced;
-(unsigned)inlineCount;
-(BOOL)styleIsUniform:(CPPDFStyle*)arg1 styleFlags:(unsigned short)arg2 ;
-(id)charSequence;
-(double)monospaceWidth;
-(BOOL)hasDropCap;
-(BOOL)lineBreakAfter;
-(unsigned)wordCount;
-(CPInlineContainer*)inlineList;
-(SCD_Struct_CP17*)wordAtIndex:(unsigned)arg1 ;
-(unsigned)spacesBeforeWordAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP17*)firstWord;
-(SCD_Struct_CP17*)lastWord;
-(void)setCharSequence:(id)arg1 ;
-(SCD_Struct_CP17*)wordArrayOfSize:(unsigned)arg1 ;
-(void)recomputeLevels;
-(id)newTextLineFromWordAt:(unsigned)arg1 lengthInWords:(unsigned)arg2 ;
-(void)recomputeBaseline;
-(BOOL)overlapsHorizontally:(CGRect)arg1 ;
-(BOOL)mapToWordsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(SCD_Struct_CP17*)wordArray;
-(CGRect)boundsOfWordAtIndex:(unsigned)arg1 ;
-(void)anchorChunk:(id)arg1 atWordIndex:(unsigned)arg2 ;
-(BOOL)hasJustifiedAlignment;
-(BOOL)changesFontAt:(id)arg1 ;
-(BOOL)removeTextLines:(id)arg1 whereTrue:(/*function pointer*/void*)arg2 passing:(void*)arg3 ;
-(BOOL)mapToWords:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(void)setHasBeenSplit:(BOOL)arg1 ;
-(BOOL)hasBeenSplit;
-(void)setHasBeenProcessed:(BOOL)arg1 ;
-(BOOL)hasBeenProcessed;
-(id)columnBreaks;
-(void)setColumnBreaks:(id)arg1 ;
-(void)setHasTabs:(BOOL)arg1 ;
-(BOOL)hasTabs;
-(void)setTabsBefore:(int)arg1 ;
-(int)tabsBefore;
-(long long)baseLineAscending:(id)arg1 ;
-(long long)baseLineDescending:(id)arg1 ;
-(BOOL)overlapsWith:(id)arg1 ;
-(BOOL)hyphenated;
-(void)setBaselineToNull;
-(void)setSpaces:(unsigned)arg1 beforeWordAtIndex:(unsigned)arg2 ;
-(int)levels;
-(void)setLevels:(int)arg1 ;
-(float)maximumLetterGap;
-(void)setMaximumLetterGap:(float)arg1 ;
-(float)maximumWordGap;
-(void)setMaximumWordGap:(float)arg1 ;
-(BOOL)irregular;
-(void)setIrregular:(BOOL)arg1 ;
-(long long)topIsAbove:(id)arg1 ;
-(double)medianFontSize;
-(unsigned)leftSpacerIndex;
-(void)setLeftSpacerIndex:(unsigned)arg1 ;
-(unsigned)rightSpacerIndex;
-(void)setRightSpacerIndex:(unsigned)arg1 ;
-(void)setIsListItem:(BOOL)arg1 ;
-(unsigned)listSpacerIndex;
-(void)setListSpacerIndex:(unsigned)arg1 ;
-(void)setLineBreakAfter:(BOOL)arg1 ;
-(BOOL)isListItem;
-(int)align;
-(double)baseline;
-(void)finalize;
-(void)setBaseline:(double)arg1 ;
@end

