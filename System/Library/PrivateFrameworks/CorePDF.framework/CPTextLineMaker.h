/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface CPTextLineMaker : NSObject {

	NSMutableArray* textLines;

}
-(void)dealloc;
-(unsigned)makeTextLines:(id)arg1 ;
-(void)splitByGraphic:(id)arg1 with:(CPPDFContext*)arg2 ;
-(void)zOrderSplitLines:(id)arg1 ;
-(id)textLines;
@end
