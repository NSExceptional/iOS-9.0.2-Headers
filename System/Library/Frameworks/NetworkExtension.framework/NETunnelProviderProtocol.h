/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocol.h>

@class NSDictionary, NSString;

@interface NETunnelProviderProtocol : NEVPNProtocol {

	int _reassertTimeout;
	NSDictionary* _providerConfiguration;
	NSString* _providerBundleIdentifier;
	NSString* _pluginType;
	NSString* _authenticationPluginType;
	NSDictionary* _vendorInfo;
	long long _authenticationMethod;

}

@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (readonly) NSString * pluginType;                         //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * authenticationPluginType;               //@synthesize authenticationPluginType=_authenticationPluginType - In the implementation block
@property (copy) NSDictionary * vendorInfo;                         //@synthesize vendorInfo=_vendorInfo - In the implementation block
@property (assign) long long authenticationMethod;                  //@synthesize authenticationMethod=_authenticationMethod - In the implementation block
@property (assign) int reassertTimeout;                             //@synthesize reassertTimeout=_reassertTimeout - In the implementation block
+(BOOL)isLegacyPluginType:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPluginType:(NSString *)arg1 ;
-(id)initWithPluginType:(id)arg1 ;
-(NSString *)providerBundleIdentifier;
-(NSString *)pluginType;
-(id)copyLegacyDictionary;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)syncWithKeychainInDomain:(long long)arg1 configuration:(id)arg2 suffix:(id)arg3 ;
-(void)removeKeychainItemsInDomain:(long long)arg1 ;
-(BOOL)setServiceProtocolsInService:(SCNetworkServiceRef)arg1 ;
-(BOOL)updateWithServiceProtocolsFromService:(SCNetworkServiceRef)arg1 ;
-(SCNetworkInterfaceRef)createInterface;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)copyPasswordsFromKeychainInDomain:(long long)arg1 ;
-(NSDictionary *)providerConfiguration;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(void)setAuthenticationMethod:(long long)arg1 ;
-(void)initFromLegacyDictionaryExtra:(id)arg1 ;
-(void)setAuthenticationPluginType:(NSString *)arg1 ;
-(NSDictionary *)vendorInfo;
-(NSString *)authenticationPluginType;
-(int)reassertTimeout;
-(void)setVendorInfo:(NSDictionary *)arg1 ;
-(void)setReassertTimeout:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)authenticationMethod;
@end
