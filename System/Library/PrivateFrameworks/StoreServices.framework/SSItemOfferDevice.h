/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:25 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSItemOfferDeviceError, NSString;

@interface SSItemOfferDevice : NSObject {

	long long _deviceIdentifier;
	SSItemOfferDeviceError* _incompatibleDeviceError;
	SSItemOfferDeviceError* _incompatibleSystemError;
	NSString* _minimumProductVersion;

}

@property (nonatomic,readonly) long long deviceIdentifier;                                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * minimumProductVersion;                              //@synthesize minimumProductVersion=_minimumProductVersion - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleDeviceError;              //@synthesize incompatibleDeviceError=_incompatibleDeviceError - In the implementation block
@property (nonatomic,readonly) SSItemOfferDeviceError * incompatibleSystemError;              //@synthesize incompatibleSystemError=_incompatibleSystemError - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)deviceIdentifier;
-(id)initWithOfferDeviceDicitionary:(id)arg1 ;
-(id)initWithDeviceIdentifier:(long long)arg1 ;
-(SSItemOfferDeviceError *)incompatibleDeviceError;
-(SSItemOfferDeviceError *)incompatibleSystemError;
-(NSString *)minimumProductVersion;
@end

