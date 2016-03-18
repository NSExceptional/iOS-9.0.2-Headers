/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:59 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, CBCentral, CBCharacteristic, NSNumber, NSData;

@interface CBATTRequest : NSObject {

	NSMutableData* _value;
	BOOL _ignoreResponse;
	CBCentral* _central;
	CBCharacteristic* _characteristic;
	unsigned long long _offset;
	NSNumber* _transactionID;

}

@property (nonatomic,readonly) CBCentral * central;                          //@synthesize central=_central - In the implementation block
@property (nonatomic,retain) CBCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (copy) NSData * value;                                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionID;                     //@synthesize transactionID=_transactionID - In the implementation block
@property (assign,nonatomic) BOOL ignoreResponse;                            //@synthesize ignoreResponse=_ignoreResponse - In the implementation block
-(BOOL)ignoreResponse;
-(id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned long long)arg3 transactionID:(id)arg4 ;
-(void)appendValueData:(id)arg1 ;
-(void)setIgnoreResponse:(BOOL)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(unsigned long long)endOffset;
-(unsigned long long)offset;
-(void)setCharacteristic:(CBCharacteristic *)arg1 ;
-(NSNumber *)transactionID;
-(CBCentral *)central;
-(CBCharacteristic *)characteristic;
@end

