/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:16 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {

	char mySet[32];

}
+(id)ASCIIByteSet;
+(id)asciiWhitespaceSet;
+(id)nonASCIIByteSet;
+(id)suspiciousCodepage1252ByteSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)_initWithSet:(const char*)arg1 ;
-(BOOL)byteIsMember:(char)arg1 ;
-(id)invertedSet;
-(id)initWithRange:(NSRange)arg1 ;
-(id)initWithCString:(const char*)arg1 ;
@end

