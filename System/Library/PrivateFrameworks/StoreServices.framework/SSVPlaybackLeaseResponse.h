/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlaybackResponse.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying> {

	NSData* _certificateData;
	unsigned long long _kdMovieIdentifier;

}

@property (nonatomic,readonly) double leaseDuration; 
@property (getter=isOfflineSlotAvailable,nonatomic,readonly) BOOL offlineSlotAvailable; 
@property (nonatomic,copy,readonly) NSData * leaseInfoData; 
@property (nonatomic,copy,readonly) NSData * subscriptionKeyBagData; 
@property (nonatomic,copy) NSData * certificateData;                                                 //@synthesize certificateData=_certificateData - In the implementation block
@property (assign,nonatomic) unsigned long long KDMovieIdentifier;                                   //@synthesize kdMovieIdentifier=_kdMovieIdentifier - In the implementation block
-(double)leaseDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)itemForItemIdentifier:(id)arg1 ;
-(NSData *)certificateData;
-(unsigned long long)KDMovieIdentifier;
-(BOOL)isOfflineSlotAvailable;
-(void)setCertificateData:(NSData *)arg1 ;
-(NSData *)leaseInfoData;
-(NSData *)subscriptionKeyBagData;
-(void)setKDMovieIdentifier:(unsigned long long)arg1 ;
@end

