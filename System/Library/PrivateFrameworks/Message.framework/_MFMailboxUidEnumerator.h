/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned long long _index;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithMailbox:(id)arg1 ;
@end

