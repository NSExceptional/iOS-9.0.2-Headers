/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage {

	unsigned char _reason;
	unsigned short _mappedStreamID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) unsigned char reason;                       //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned short mappedStreamID;              //@synthesize mappedStreamID=_mappedStreamID - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(unsigned char)command;
-(void)dealloc;
-(unsigned char)reason;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithReason:(unsigned char)arg1 mappedStreamID:(unsigned short)arg2 serviceName:(id)arg3 ;
-(unsigned short)mappedStreamID;
@end

