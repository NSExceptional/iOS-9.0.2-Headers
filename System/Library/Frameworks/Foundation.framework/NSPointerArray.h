/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSCoding>

@property (copy,readonly) NSPointerFunctions * pointerFunctions; 
@property (assign) unsigned long long count; 
+(id)pointerArrayWithStrongObjects;
+(id)pointerArrayWithWeakObjects;
+(id)strongObjectsPointerArray;
+(id)weakObjectsPointerArray;
+(id)pointerArrayWithOptions:(unsigned long long)arg1 ;
+(id)pointerArrayWithPointerFunctions:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)mutableArray;
-(id)allObjects;
-(id)initWithPointerFunctions:(id)arg1 ;
-(NSPointerFunctions *)pointerFunctions;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)compact;
@end
