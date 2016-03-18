/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding> {

	BOOL _dictionaryMessage;
	NSString* _identifier;
	NSData* _data;

}

@property (copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (getter=isDictionaryMessage,readonly) BOOL dictionaryMessage;              //@synthesize dictionaryMessage=_dictionaryMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSData *)data;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 dictionaryMessage:(BOOL)arg3 ;
-(BOOL)isDictionaryMessage;
@end

