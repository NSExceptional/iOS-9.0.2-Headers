/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {

	NSString* _messageID;
	NSString* _attachmentName;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * attachmentName;              //@synthesize attachmentName=_attachmentName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)messageID;
-(NSString *)attachmentName;
-(void)setAttachmentName:(NSString *)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2 ;
@end

