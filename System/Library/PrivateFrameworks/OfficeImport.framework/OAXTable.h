/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTable : NSObject
+(id)readThemableFillFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readThemableEffectsFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readPartStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readPropertiesFromXmlNode:(xmlNode*)arg1 toProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readGridFromXmlNode:(xmlNode*)arg1 toGrid:(id)arg2 drawingState:(id)arg3 ;
+(void)readRowsFromTableXmlNode:(xmlNode*)arg1 toTable:(id)arg2 drawingState:(id)arg3 ;
+(id)readThemableStrokeFromParent:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellBorderStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(int)readOnOffFlag:(id)arg1 ;
+(id)readCellStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readTextStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readCellPropertiesFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)readCellFromXmlNode:(xmlNode*)arg1 toCell:(id)arg2 drawingState:(id)arg3 ;
+(void)readRowFromXmlNode:(xmlNode*)arg1 toRow:(id)arg2 drawingState:(id)arg3 ;
+(id)readFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readTableStyle:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(void)cacheTableStylesInPart:(id)arg1 cache:(id)arg2 drawingState:(id)arg3 ;
+(id)readDefaultTableStyleWithDrawingState:(id)arg1 ;
@end

