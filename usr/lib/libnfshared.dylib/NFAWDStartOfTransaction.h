/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCHCIStartOfTransactionEvent, NSString;

@interface NFAWDStartOfTransaction : NSObject <NFAWDEventProtocol> {

	unsigned version;
	unsigned status;
	AWDNFCHCIStartOfTransactionEvent* _metric;

}

@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned status; 
@property (nonatomic,retain) AWDNFCHCIStartOfTransactionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(void)setMetric:(AWDNFCHCIStartOfTransactionEvent *)arg1 ;
-(AWDNFCHCIStartOfTransactionEvent *)metric;
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2 ;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1 ;
@end

