/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError, SKPaymentTransaction, SKPayment, NSString, NSDate, NSData;

@interface SKPaymentTransactionInternal : NSObject {

	NSArray* _downloads;
	NSError* _error;
	SKPaymentTransaction* _originalTransaction;
	SKPayment* _payment;
	NSString* _temporaryIdentifier;
	NSDate* _transactionDate;
	NSString* _transactionIdentifier;
	NSData* _transactionReceipt;
	long long _transactionState;

}
-(void)dealloc;
@end

