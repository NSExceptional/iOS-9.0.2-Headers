/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _NSKnownKeysEnumerator : NSEnumerator {

	id _target;
	const id* _list;
	const id* _referenceItems;
	NSRange _range;
	unsigned long long _index;
	unsigned long long _flags;

}
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(NSRange)arg4 andCopyItems:(BOOL)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(void)_invalidate;
@end

