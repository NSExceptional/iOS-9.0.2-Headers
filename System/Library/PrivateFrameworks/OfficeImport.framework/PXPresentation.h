/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PXPresentation : NSObject
+(CGSize)readSizeFromChildOfElement:(xmlNode*)arg1 childName:(const char*)arg2 state:(id)arg3 ;
+(void)readPresentationProperties:(id)arg1 to:(id)arg2 state:(id)arg3 ;
+(void)readSlideIndicesWithPresentationPart:(id)arg1 presentationState:(id)arg2 ;
+(id)readFromPackage:(id)arg1 fileName:(id)arg2 reader:(id)arg3 cancel:(id)arg4 isThumbnail:(BOOL)arg5 delegate:(id)arg6 ;
@end

