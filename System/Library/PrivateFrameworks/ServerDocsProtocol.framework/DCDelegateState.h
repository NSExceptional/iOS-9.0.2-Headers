/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DCDocumentManagerDelegate, OS_dispatch_queue;
@class NSObject, DCCachedItem, NSData;

@interface DCDelegateState : NSObject {

	id<DCDocumentManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	DCCachedItem* _item;
	NSData* _watchedVersionIdentifier;

}

@property (__weak,readonly) id<DCDocumentManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (readonly) DCCachedItem * item;                                        //@synthesize item=_item - In the implementation block
@property (retain) NSData * watchedVersionIdentifier;                            //@synthesize watchedVersionIdentifier=_watchedVersionIdentifier - In the implementation block
+(id)delegateStateWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DCDocumentManagerDelegate>)delegate;
-(DCCachedItem *)item;
-(NSData *)watchedVersionIdentifier;
-(void)setWatchedVersionIdentifier:(NSData *)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3 ;
@end

