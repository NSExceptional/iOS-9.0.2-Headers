/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRCloudAvailabilityProtobuf, NSString;

@interface NMRCloudAvailabilityMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRCloudAvailabilityProtobuf* _protobuf;

}

@property (assign,nonatomic) BOOL hasProperNetworkConditionsToPlayMedia; 
@property (assign,nonatomic) BOOL canShowCloudMusic; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canShowCloudMusic;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(id)init;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(void)setHasProperNetworkConditionsToPlayMedia:(BOOL)arg1 ;
-(void)setCanShowCloudMusic:(BOOL)arg1 ;
@end

