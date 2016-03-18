/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {

	NSMutableData* deflatedData;
	z_stream_s* zstream;
	char* _outputBuffer;
	int _bufferingSize;

}
+(id)dataByDeflatingData:(id)arg1 ;
-(void)dealloc;
-(id)close;
-(BOOL)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2 ;
@end

