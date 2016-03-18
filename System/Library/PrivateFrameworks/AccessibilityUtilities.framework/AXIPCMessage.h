/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {

	int _key;
	unsigned _clientPort;
	NSDictionary* _payload;
	SCD_Struct_AX0 _auditToken;

}

@property (assign,nonatomic) int key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                   //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned clientPort;                      //@synthesize clientPort=_clientPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX0 auditToken;                //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSString * senderBundleId; 
+(BOOL)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)key;
-(NSDictionary *)payload;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setKey:(int)arg1 ;
-(SCD_Struct_AX0)auditToken;
-(void)setPayload:(NSDictionary *)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(unsigned)clientPort;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
-(NSString *)senderBundleId;
-(void)setAuditToken:(SCD_Struct_AX0)arg1 ;
-(id)initWithKey:(int)arg1 ;
@end

