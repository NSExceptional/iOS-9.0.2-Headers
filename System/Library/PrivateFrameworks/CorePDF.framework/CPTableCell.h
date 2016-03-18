/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>
#import <libobjc.A.dylib/CPDisposable.h>

@interface CPTableCell : CPChunk <CPDisposable> {

	CGRect cellBounds;
	SCD_Struct_CP15 rowSpan;
	SCD_Struct_CP15 columnSpan;
	SCD_Struct_CP16* borders;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;

}

@property (nonatomic,readonly) CGRect cellBounds; 
@property (assign,nonatomic) SCD_Struct_CP15 rowSpan; 
@property (assign,nonatomic) SCD_Struct_CP15 columnSpan; 
@property (nonatomic,readonly) unsigned backgroundGraphicCount; 
-(void)dispose;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(CGRect)cellBounds;
-(CGRect)boundsOfBorder:(int)arg1 ;
-(CGColorRef)colorOfBorder:(int)arg1 ;
-(void)setBackgroundGraphics:(id)arg1 ;
-(id)backgroundGraphicAtIndex:(unsigned)arg1 ;
-(unsigned)backgroundGraphicCount;
-(void)setBorder:(int)arg1 bounds:(CGRect)arg2 graphics:(id)arg3 ;
-(unsigned)graphicCountOfBorder:(int)arg1 ;
-(id)graphicObjectOfBorder:(int)arg1 atIndex:(unsigned)arg2 ;
-(long long)compareCellOrdinal:(id)arg1 ;
-(void)setColumnSpan:(SCD_Struct_CP15)arg1 ;
-(id)initWithBounds:(CGRect)arg1 ;
-(SCD_Struct_CP15)columnSpan;
-(SCD_Struct_CP15)rowSpan;
-(void)finalize;
-(void)setRowSpan:(SCD_Struct_CP15)arg1 ;
@end

