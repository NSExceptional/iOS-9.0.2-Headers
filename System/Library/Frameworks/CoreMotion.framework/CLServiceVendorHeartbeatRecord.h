/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol;
@class CLSilo;

@interface CLServiceVendorHeartbeatRecord : NSObject {

	int _synCount;
	int _ackCount;
	CLSilo* _silo;
	id<CLIntersiloServiceProtocol> _service;

}

@property (nonatomic,readonly) CLSilo * silo;                                              //@synthesize silo=_silo - In the implementation block
@property (nonatomic,__weak,readonly) id<CLIntersiloServiceProtocol> service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) int synCount;                                               //@synthesize synCount=_synCount - In the implementation block
@property (nonatomic,readonly) int ackCount;                                               //@synthesize ackCount=_ackCount - In the implementation block
-(CLSilo *)silo;
-(id)initTrackingService:(id)arg1 ;
-(void)syn;
-(int)synCount;
-(int)ackCount;
-(id<CLIntersiloServiceProtocol>)service;
-(void)ack;
@end

