/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVDrawable : NSObject
+(id)readDrawableFromNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(xmlDoc*)vmlDocumentFromPart:(id)arg1 ;
+(id)readDrawablesFromParent:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(void)readFromDrawable:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(CGRect)readCoordBounds:(xmlNode*)arg1 ;
@end

