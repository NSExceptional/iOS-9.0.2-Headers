/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, MDLVertexDescriptor, NSString, NSArray;

@interface MTKMesh : NSObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	MDLVertexDescriptor* _vertexDescriptor;
	unsigned long long _vertexCount;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * vertexBuffers;                             //@synthesize vertexBuffers=_vertexBuffers - In the implementation block
@property (nonatomic,readonly) MDLVertexDescriptor * vertexDescriptor;              //@synthesize vertexDescriptor=_vertexDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * submeshes;                                 //@synthesize submeshes=_submeshes - In the implementation block
@property (nonatomic,readonly) unsigned long long vertexCount;                      //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(void)_createMeshesFromObject:(id)arg1 newMeshes:(id)arg2 sourceMeshes:(id)arg3 device:(id)arg4 error:(id*)arg5 ;
+(id)newMeshesFromAsset:(id)arg1 device:(id)arg2 sourceMeshes:(id*)arg3 error:(id*)arg4 ;
-(id)initWithMesh:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(MDLVertexDescriptor *)vertexDescriptor;
-(NSArray *)submeshes;
-(NSArray *)vertexBuffers;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)vertexCount;
@end

