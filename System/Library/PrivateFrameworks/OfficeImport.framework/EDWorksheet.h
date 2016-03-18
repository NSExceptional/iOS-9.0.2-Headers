/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDSheet.h>

@class EDRowBlocks, EDColumnInfoCollection, EDCollection, EDMergedCellCollection, EDPane, EDWarnings, EDReference, OITSUPointerKeyDictionary;

@interface EDWorksheet : EDSheet {

	EDRowBlocks* mRowBlocks;
	EDColumnInfoCollection* mColumnInfos;
	EDCollection* mConditionalFormattings;
	EDCollection* mHyperlinks;
	EDCollection* mTables;
	EDCollection* mPivotTables;
	EDMergedCellCollection* mMergedCells;
	EDPane* mPane;
	EDWarnings* mWorksheetWarnings;
	double mDefaultColumnWidth;
	unsigned short mDefaultRowHeight;
	unsigned long long mMaxRowOutlineLevel;
	unsigned long long mMaxColumnOutlineLevel;
	BOOL mFitToPage;
	EDReference* mMaxCellReferencedInFormulas;
	OITSUPointerKeyDictionary* mMergedRows;
	OITSUPointerKeyDictionary* mMergedCols;
	EDReference* mImplicitCellArea;

}
-(id)implicitCellArea;
-(void)setImplicitCellArea:(id)arg1 ;
-(id)maxCellReferencedInFormulas;
-(void)setup;
-(void)teardown;
-(void)setMaxRowOutlineLevel:(unsigned long long)arg1 ;
-(void)setMaxColumnOutlineLevel:(unsigned long long)arg1 ;
-(void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long long)arg1 ;
-(unsigned long long)maxRowOutlineLevel;
-(void)updateMaxRowOutlineLevelIfNeeded:(unsigned long long)arg1 ;
-(unsigned long long)maxColumnOutlineLevel;
-(void)setMergedRowsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(void)setMergedColsRef:(id)arg1 from:(unsigned)arg2 to:(unsigned)arg3 ;
-(BOOL)hasMergedRow;
-(BOOL)isRowMerged:(unsigned)arg1 ;
-(id)mergedRowRef:(unsigned)arg1 ;
-(BOOL)hasMergedCol;
-(BOOL)isColMerged:(unsigned)arg1 ;
-(id)mergedColRef:(unsigned)arg1 ;
-(void)reduceMemoryIfPossible;
-(id)description;
-(id)mergedCells;
-(id)rowBlocks;
-(double)defaultColumnWidth;
-(unsigned short)defaultRowHeight;
-(id)columnInfos;
-(id)hyperlinks;
-(id)conditionalFormattings;
-(void)setPane:(id)arg1 ;
-(id)worksheetWarnings;
-(void)setDefaultColumnWidth:(double)arg1 ;
-(void)setDefaultRowHeight:(unsigned short)arg1 ;
-(void)setFitToPage:(BOOL)arg1 ;
-(id)tables;
-(BOOL)fitToPage;
-(BOOL)hasMergedCells;
-(id)pivotTables;
-(id)pane;
@end

