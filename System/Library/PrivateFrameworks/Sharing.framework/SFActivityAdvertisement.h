/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, SFPeerDevice, NSString;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {

	long long _advertisementVersion;
	NSData* _advertisementPayload;
	NSDictionary* _options;
	SFPeerDevice* _device;
	NSData* _activityPayload;

}

@property (readonly) long long advertisementVersion;                     //@synthesize advertisementVersion=_advertisementVersion - In the implementation block
@property (copy,readonly) NSData * advertisementPayload;                 //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy,readonly) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (retain,readonly) SFPeerDevice * device;                       //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * deviceIdentifier; 
@property (copy,readonly) NSString * deviceName; 
@property (copy,readonly) NSString * deviceModelIdentifier; 
@property (copy,readonly) NSData * activityPayload;                      //@synthesize activityPayload=_activityPayload - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)activityPayload;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)options;
-(SFPeerDevice *)device;
-(NSString *)deviceName;
-(NSString *)deviceIdentifier;
-(NSData *)advertisementPayload;
-(id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4 ;
-(NSString *)deviceModelIdentifier;
-(long long)advertisementVersion;
@end

