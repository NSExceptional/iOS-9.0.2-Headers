/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:30 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent {

	long long _commandType;
	unsigned long long _sessionID;
	NSString* _text;

}

@property (nonatomic,readonly) long long commandType;                     //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * text;                           //@synthesize text=_text - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(NSString *)text;
-(unsigned long long)sessionID;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithCommandType:(long long)arg1 sessionID:(unsigned long long)arg2 text:(id)arg3 ;
-(long long)commandType;
@end

