/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PKNFCPayload : NSObject <NSSecureCoding, NSCopying> {

	BOOL _requiresCertificate;
	NSString* _message;
	NSData* _encryptionPublicKeyData;

}

@property (nonatomic,copy) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL requiresCertificate;                    //@synthesize requiresCertificate=_requiresCertificate - In the implementation block
@property (nonatomic,copy) NSData * encryptionPublicKeyData;              //@synthesize encryptionPublicKeyData=_encryptionPublicKeyData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSData *)encryptionPublicKeyData;
-(BOOL)isEqualToPKNFCPayload:(id)arg1 ;
-(id)initWithNFCDictionary:(id)arg1 ;
-(BOOL)requiresCertificate;
-(void)setRequiresCertificate:(BOOL)arg1 ;
-(void)setEncryptionPublicKeyData:(NSData *)arg1 ;
@end

