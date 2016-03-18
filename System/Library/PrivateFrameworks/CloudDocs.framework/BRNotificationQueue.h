/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;

}

@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)_filterIndex:(id)arg1 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(void)processDequeueCallbacks;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
@end

