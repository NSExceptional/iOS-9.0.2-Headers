/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject {

	MFMessageLibrary* library;
	unsigned libraryID;
	unsigned long long messageFlags;
	unsigned uid;
	unsigned encoding;
	BOOL isInvalid;
	unsigned mailboxID;
	long long conversationHash;
	long long messageIDHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;

}
-(id)externalID;
-(unsigned)libraryID;
-(id)mailbox;
-(unsigned long long)messageFlags;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)uid;
-(id)messageID;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(unsigned)mailboxID;
-(long long)messageIDHash;
-(id)remoteID;
-(id)copyMessageInfo;
@end
