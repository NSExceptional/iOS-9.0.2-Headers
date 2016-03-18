/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLVertexAttributeDescriptorArray * attributes; 
+(id)vertexDescriptor;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

