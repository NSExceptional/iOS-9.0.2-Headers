/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentDataItem.h>

@class CNContact, NSString;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic,readonly) CNContact * shippingAddress; 
@property (nonatomic,readonly) NSString * shippingType; 
@property (nonatomic,readonly) BOOL isShippingEditable; 
+(long long)dataType;
-(BOOL)isValidWithError:(id*)arg1 ;
-(NSString *)shippingType;
-(CNContact *)shippingAddress;
-(BOOL)isShippingEditable;
@end

