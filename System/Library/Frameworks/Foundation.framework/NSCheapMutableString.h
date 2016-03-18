/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSCheapMutableString : NSMutableString {

	SCD_Union_NS45* contents;
	fields flags;
	unsigned long long numCharacters;
	void* _reserved;

}
-(unsigned long long)fastestEncoding;
-(unsigned long long)cStringLength;
-(const char*)lossyCString;
-(void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4 ;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(const char*)cString;
-(void)finalize;
@end

