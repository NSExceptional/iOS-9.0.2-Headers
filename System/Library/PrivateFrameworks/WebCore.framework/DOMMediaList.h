/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:35 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMMediaList : DOMObject

@property (copy) NSString * mediaText; 
@property (readonly) unsigned length; 
-(void)dealloc;
-(unsigned)length;
-(id)item:(unsigned)arg1 ;
-(void)finalize;
-(NSString *)mediaText;
-(void)setMediaText:(NSString *)arg1 ;
-(void)deleteMedium:(id)arg1 ;
-(void)appendMedium:(id)arg1 ;
@end

