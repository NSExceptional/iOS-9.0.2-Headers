/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:12 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMChatItemRules.h>

@class IMChat, NSArray, NSMutableArray, IMChatItem, NSString;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules> {

	IMChat* _chat;
	NSArray* _items;
	NSMutableArray* _chatItems;
	IMChatItem* _nextStaleChatItem;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)testChatItems;
-(void)dealloc;
-(id)_items;
-(void)_setItems:(id)arg1 ;
-(void)_invalidate;
-(BOOL)shouldShowRaiseMessageStatus;
-(id)_initWithChat:(id)arg1 ;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1 ;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2 ;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1 ;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2 ;
-(id)chatItemForIMChatItem:(id)arg1 ;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2 ;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3 ;
@end

