/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MDLMeshBufferZone.h>

@class NSMutableOrderedSet, GLKMeshBufferAllocator, NSString;

@interface GLKMeshBufferZone : NSObject <MDLMeshBufferZone> {

	NSMutableOrderedSet* _buffers;
	BOOL _destroyInvoked;
	GLKMeshBufferAllocator* _allocator;
	unsigned _glBufferName;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long capacity;                       //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator;              //@synthesize allocator=_allocator - In the implementation block
@property (nonatomic,readonly) unsigned glBufferName;                             //@synthesize glBufferName=_glBufferName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MDLMeshBufferAllocator>)allocator;
-(id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2 ;
-(id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2 ;
-(void)destroyBuffer:(id)arg1 ;
-(unsigned)glBufferName;
-(void)dealloc;
-(unsigned long long)capacity;
@end

