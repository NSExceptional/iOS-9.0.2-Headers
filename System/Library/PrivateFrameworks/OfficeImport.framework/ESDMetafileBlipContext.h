/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDBlipContext.h>

@interface ESDMetafileBlipContext : ESDBlipContext {

	unsigned mCb;
	unsigned defaultHeaderSize;

}

@property (assign) unsigned defaultHeaderSize; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 uncompressed:(unsigned)arg3 stream:(SsrwOOStream*)arg4 streamID:(unsigned)arg5 ;
-(void)setDefaultHeaderSize:(unsigned)arg1 ;
-(unsigned)defaultHeaderSize;
@end

