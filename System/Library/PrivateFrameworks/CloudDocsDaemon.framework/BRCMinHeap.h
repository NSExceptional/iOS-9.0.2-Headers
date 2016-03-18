/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {

	id* _array;
	unsigned long long _size;
	/*^block*/id _comparator;
	unsigned long long _mutation;
	NSMapTable* _objects;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
-(void)_moveDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUp:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_shrink;
-(BOOL)check;
-(void)removeFirstObject;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end

