/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBAlignmentInfo : NSObject
+(int)convertXlHorizAlignEnumToED:(int)arg1 ;
+(int)convertXlVertAlignEnumToED:(int)arg1 ;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)arg1 ;
+(int)convertEDVerticalAlignmentEnumToXl:(int)arg1 ;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlXf:(XlXf*)arg2 ;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)arg1 ;
+(void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(XlGraphicsInfo*)arg2 ;
+(id)edAlignmentInfoFromXlXf:(XlXf*)arg1 ;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)arg1 ;
@end

