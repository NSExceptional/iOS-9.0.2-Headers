/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:38 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXDataLabel : NSObject
+(id)chdDataLabelFromXmlDataLabelElement:(xmlNode*)arg1 state:(id)arg2 ;
+(Class)chdDataValuePropertiesClassWithState:(id)arg1 ;
+(int)chdDataLabelPositionFromXmlDataLabelElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)stringFromDataLabelPosition:(int)arg1 ;
+(void)readFrom:(xmlNode*)arg1 dataValuePropertiesCollection:(id)arg2 state:(id)arg3 ;
@end
