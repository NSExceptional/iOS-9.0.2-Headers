/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@interface IDSSocketPairHandshake : IDSSocketPairMessage {

	unsigned _versionNumber;

}

@property (nonatomic,readonly) unsigned versionNumber;              //@synthesize versionNumber=_versionNumber - In the implementation block
-(unsigned)versionNumber;
-(unsigned char)command;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithVersionNumber:(unsigned)arg1 ;
@end

