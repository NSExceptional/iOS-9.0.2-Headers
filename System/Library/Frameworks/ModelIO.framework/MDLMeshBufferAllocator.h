/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBufferAllocator <NSObject>
@required
-(id)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
-(id)newBufferFromZone:(id)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
-(id)newZone:(unsigned long long)arg1;
-(id)newZoneForBuffersWithSize:(id)arg1 andType:(id)arg2;
-(id)newBufferFromZone:(id)arg1 data:(id)arg2 type:(unsigned long long)arg3;
-(id)newBufferWithData:(id)arg1 type:(unsigned long long)arg2;

@end

