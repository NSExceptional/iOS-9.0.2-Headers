/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:46 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIPrintPaper : NSObject {

	int _paperOrientation;
	id _internal;

}

@property (readonly) CGSize paperSize; 
@property (readonly) CGRect printableRect; 
+(id)bestPaperForPageSize:(CGSize)arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3 ;
+(id)_defaultPaperForOutputType:(long long)arg1 ;
+(id)_defaultPKPaperForOuptutType:(long long)arg1 ;
+(id)bestPaperForPageSize:(CGSize)arg1 withPapersFromArray:(id)arg2 ;
+(id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(CGSize)arg4 ;
+(id)_readyDocumentPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 contentSize:(CGSize)arg3 scaleUpForRoll:(BOOL)arg4 ;
+(id)_defaultPaperListForOutputType:(long long)arg1 ;
-(CGRect)printRect;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CGRect)printableRect;
-(CGSize)paperSize;
-(id)_pkPaper;
-(void)_updatePKPaper:(id)arg1 ;
-(id)_initWithPrintKitPaper:(id)arg1 ;
-(CGRect)_printableRectForDuplex:(BOOL)arg1 ;
-(id)_localizedName;
-(id)_localizedMediaTypeName;
-(void)_setPaperOrientation:(int)arg1 ;
-(int)_paperOrientation;
@end

