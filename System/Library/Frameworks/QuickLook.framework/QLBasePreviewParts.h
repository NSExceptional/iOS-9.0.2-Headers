/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(/*function pointer*/void*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2 ;
+(BOOL)isBundleURL:(id)arg1 ;
+(/*function pointer*/void*)urlCallbackForUTI:(id)arg1 ;
-(void)computePreview;
@end

