/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSMutableArray;

@interface CPMemoryPool : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long long _slotLength;

}

@property (nonatomic,readonly) unsigned long long slotLength;              //@synthesize slotLength=_slotLength - In the implementation block
-(void)dealloc;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLabel:(const char*)arg1 slotLength:(unsigned long long)arg2 ;
-(unsigned long long)slotLength;
@end

