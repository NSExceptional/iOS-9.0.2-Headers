/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <libobjc.A.dylib/CMMapperRoot.h>

@class EDWorkbook, NSMutableArray, NSString, CMArchiveManager, OIXMLDocument, OIXMLElement;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {

	unsigned long long mRealSheetCount;
	int mWidth;
	int mHeight;
	EDWorkbook* edWorkbook;
	NSMutableArray* mWorksheetUrls;
	NSMutableArray* mWorksheetNames;
	NSMutableArray* mWorksheetGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	NSString* mStyleSheetGuid;
	CMArchiveManager* mArchiver;
	NSString* mFileName;
	unsigned mSheetIndex;
	BOOL mIsFirstMappedSheet;
	BOOL mIsFrameset;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	OIXMLDocument* mTabBarDoc;
	NSString* mTabBarURL;
	NSMutableArray* mSheetURLs;
	double mTabPosition;
	unsigned long long mNumberOfMappedSheets;
	BOOL mHasPushedHeader;
	BOOL mHasPushedFirstSheet;
	BOOL mLoadingMessageVisible;

}
+(id)borderStyleCache;
+(id)borderWidthCache;
+(id)cssStyleCache;
-(void)mapBodyStyleAt:(id)arg1 ;
-(id)copySheetMapperWithEdSheet:(id)arg1 ;
-(void)dealloc;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGSize)pageSizeForDevice;
-(id)documentTitle;
-(id)styleMatrix;
-(id)fileName;
-(id)archiver;
-(void)setFileName:(id)arg1 ;
-(void)startMappingWithState:(id)arg1 ;
-(void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)finishMappingWithState:(id)arg1 ;
-(id)workbook;
-(id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2 ;
-(BOOL)hasMultipleSheets;
-(id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4 ;
-(id)_frontPageByCopyingMainPage;
-(void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_mainPageBack;
-(BOOL)isMultiPage;
@end

