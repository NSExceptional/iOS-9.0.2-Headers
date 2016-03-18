/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSNumber* _destinationNetworkPrefixLength;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                          //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSNumber * destinationNetworkPrefixLength;              //@synthesize destinationNetworkPrefixLength=_destinationNetworkPrefixLength - In the implementation block
@property (copy) NSString * gatewayAddress;                                  //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(id)defaultRoute;
+(BOOL)supportsSecureCoding;
+(void)initGlobals;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(NSString *)gatewayAddress;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(BOOL)isDefaultRoute;
-(id)initWithDestinationAddress:(id)arg1 networkPrefixLength:(id)arg2 ;
-(NSNumber *)destinationNetworkPrefixLength;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destinationAddress;
@end

