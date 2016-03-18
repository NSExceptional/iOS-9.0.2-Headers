/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, BLTCircularBitBuffer, NSString;

@interface BLTPBProtobufSequenceNumberManager : NSObject {

	unsigned long long _sendSequenceNumber;
	unsigned long long _recvSequenceNumber;
	NSLock* _sequenceNumberAccess;
	BLTCircularBitBuffer* _duplicateEntries;
	BOOL _isInitialSendSequenceNumber;
	NSString* _serviceName;

}

@property (assign,nonatomic) BOOL isInitialSendSequenceNumber;              //@synthesize isInitialSendSequenceNumber=_isInitialSendSequenceNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 ;
-(long long)setRecvSequenceNumber:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)setIsInitialSendSequenceNumber:(BOOL)arg1 ;
-(unsigned long long)nextSendSequenceNumber;
-(BOOL)isInitialSendSequenceNumber;
-(id)initWithServiceName:(id)arg1 duplicateCapacity:(unsigned long long)arg2 ;
-(void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1 ;
-(BOOL)_isSequenceNumberInOrder:(unsigned long long)arg1 ;
-(void)_writeSequenceNumbersToStore;
-(id)_sequenceNumbersURL;
@end

