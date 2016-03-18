/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class EDWorkbook, EDResources, TCTracing;

@interface EBState : NSObject {

	XlLinkTable* mXlLinkTable;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mSheetNames;
	XlFormulaProcessor* mXlFormulaProcessor;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<TCCancelDelegate> mCancelDelegate;
	TCTracing* mTracing;

}

@property (nonatomic,readonly) id<TCCancelDelegate> cancelDelegate; 
-(void)dealloc;
-(BOOL)isCancelled;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)workbook;
-(void)setWorkbook:(id)arg1 ;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)tracing;
-(id<TCCancelDelegate>)cancelDelegate;
-(XlFormulaProcessor*)xlFormulaProcessor;
-(XlNameTable*)xlNameTable;
-(XlLinkTable*)xlLinkTable;
-(ChVector<OcText>*)sheetNames;
@end

