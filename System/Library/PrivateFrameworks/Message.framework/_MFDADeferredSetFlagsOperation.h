/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDAOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {

	unsigned long long _onFlags;
	unsigned long long _offFlags;
	NSString* _messageID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithSetFlagsRequest:(id)arg1 ;
@end

