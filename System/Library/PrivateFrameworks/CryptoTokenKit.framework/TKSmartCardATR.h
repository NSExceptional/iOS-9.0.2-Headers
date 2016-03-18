/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:39 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSData, NSArray;

@interface TKSmartCardATR : NSObject {

	NSMutableArray* _interfaces;
	NSData* _bytes;
	NSData* _historicalBytes;

}

@property (nonatomic,readonly) NSData * bytes;                        //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,readonly) NSArray * protocols; 
@property (nonatomic,readonly) NSData * historicalBytes;              //@synthesize historicalBytes=_historicalBytes - In the implementation block
-(id)initWithSource:(/*^block*/id)arg1 ;
-(NSArray *)protocols;
-(id)description;
-(NSData *)bytes;
-(id)historicalRecords;
-(id)parseFromSource:(/*^block*/id)arg1 ;
-(id)interfaceGroupAtIndex:(long long)arg1 ;
-(id)_formatHexData:(id)arg1 to:(id)arg2 ;
-(id)interfaceGroupForProtocol:(unsigned long long)arg1 ;
-(NSData *)historicalBytes;
-(id)initWithBytes:(id)arg1 ;
@end

