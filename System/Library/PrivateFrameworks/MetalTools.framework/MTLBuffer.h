/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer <MTLResource>
@property (readonly) unsigned long long length; 
@required
-(id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
-(void)didModifyRange:(NSRange)arg1;
-(unsigned long long)length;
-(void*)contents;

@end
