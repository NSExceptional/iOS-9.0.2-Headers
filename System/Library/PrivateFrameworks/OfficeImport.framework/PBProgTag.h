/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBProgTag : NSObject
+(void)readBulletStylesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readBulletImagesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readMacCharStylesFromDocumentList:(id)arg1 state:(id)arg2 ;
+(void)readHyperlinkScreenTipsFromDocumentList:(id)arg1 state:(id)arg2 ;
+(id)readBulletStyleFromClientData:(id)arg1 ;
+(id)readMacCharStyleFromClientData:(id)arg1 ;
+(id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2 ;
+(void)readClientData:(id)arg1 state:(id)arg2 ;
+(void)readDocumentList:(id)arg1 state:(id)arg2 ;
+(id)binaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2 ;
+(id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTags:(id)arg2 ;
+(const PBTextFormatProgTagInfo*)textFormatInfoForProgTagName:(const unsigned short*)arg1 ;
+(void)readBulletStylesFromMainMaster:(id)arg1 state:(id)arg2 ;
+(void)readBulletImagesFromContainerParent:(id)arg1 state:(id)arg2 ;
+(id)ensureBinaryTagDataWithName:(const unsigned short*)arg1 inProgTagsParent:(id)arg2 ;
@end

