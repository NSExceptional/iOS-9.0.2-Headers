/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)initWithData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSData *)sql;
@end

