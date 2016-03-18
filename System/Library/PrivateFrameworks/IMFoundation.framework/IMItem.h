/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMFoundation/IMRemoteObjectCoding.h>

@class NSString, NSDictionary, NSDate;

@interface IMItem : NSObject <NSCoding, NSCopying, IMRemoteObjectCoding> {

	NSString* _handle;
	NSString* _service;
	NSString* _account;
	NSString* _unformattedID;
	NSString* _accountID;
	NSString* _roomName;
	NSDictionary* _senderInfo;
	NSString* _guid;
	NSDate* _time;
	NSString* _countryCode;
	long long _messageID;
	id _context;
	long long _type;

}

@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * guid;                        //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) long long messageID;                    //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * account;                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * roomName;                    //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,retain) NSString * service;                     //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSDate * time;                          //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSString * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;               //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * sender; 
@property (nonatomic,retain) NSDictionary * senderInfo;              //@synthesize senderInfo=_senderInfo - In the implementation block
@property (nonatomic,retain) id context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
+(Class)contextClass;
+(Class)classForIMItemType:(long long)arg1 ;
-(BOOL)isTypingOrCancelTypingMessage;
-(BOOL)isIncomingTypingOrCancelTypingMessage;
-(id)_service;
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(id)_serviceHandle;
-(id)message;
-(id)_otherHandle;
-(id)_senderHandle;
-(BOOL)_isInvitation;
-(id)_copy;
-(void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2 ;
-(void)_setInvitation:(BOOL)arg1 ;
-(id)copyDictionaryRepresentation;
-(NSString *)handle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)context;
-(NSString *)sender;
-(void)setTime:(NSDate *)arg1 ;
-(NSDate *)time;
-(void)setContext:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)service;
-(BOOL)isFromMe;
-(long long)messageID;
-(NSString *)accountID;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)roomName;
-(id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4 ;
-(void)_setMessageID:(long long)arg1 ;
-(void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1 ;
-(id)initWithIMRemoteObjectSerializedDictionary:(id)arg1 ;
-(id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11 type:(long long)arg12 ;
-(NSDictionary *)senderInfo;
-(NSString *)unformattedID;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setSenderInfo:(NSDictionary *)arg1 ;
-(void)setUnformattedID:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(void)setHandle:(NSString *)arg1 ;
-(void)setService:(NSString *)arg1 ;
@end

