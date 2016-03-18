/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class PDSlideMaster, NSMutableArray, NSDictionary, NSMutableDictionary;

@interface PBMasterInfo : NSObject {

	PDSlideMaster* mSlideMaster;
	NSMutableArray* mTgtSlideLayoutArray;
	unsigned mMainPbRef;
	unsigned mTitlePbRef;
	NSDictionary* mLayoutMap;
	ChVector<PBReaderMasterStyleInfo>* mSrcTextStyling;
	unsigned mXmlMainMasterId;
	NSMutableDictionary* mXmlLayoutMap;
	BOOL mUseXmlBlobs;

}

@property (assign,nonatomic) unsigned xmlMainMasterId; 
@property (assign,nonatomic) BOOL useXmlBlobs; 
-(void)dealloc;
-(id)init;
-(id)slideMaster;
-(BOOL)useXmlBlobs;
-(unsigned)xmlMainMasterId;
-(id)slideLayoutForXmlLayoutId:(unsigned short)arg1 ;
-(id)uniqueXmlSlideLayout;
-(void)setSlideMaster:(id)arg1 ;
-(void)setMainPbRef:(unsigned)arg1 ;
-(unsigned)mainPbRef;
-(void)setTitlePbRef:(unsigned)arg1 ;
-(unsigned)titlePbRef;
-(void)cacheTargetLayoutType:(int)arg1 ;
-(id)allTargetLayoutTypes;
-(void)cacheSlideLayouts;
-(id)slideLayoutForSlideHolder:(id)arg1 ;
-(ChVector<PBReaderMasterStyleInfo>*)sourceTextStyling;
-(void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2 ;
-(void)setXmlMainMasterId:(unsigned)arg1 ;
-(void)setUseXmlBlobs:(BOOL)arg1 ;
@end
