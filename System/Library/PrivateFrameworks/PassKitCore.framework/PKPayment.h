/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPaymentToken, PKContact, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	const void* _billingAddress;
	PKContact* _billingContact;
	const void* _shippingAddress;
	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;

}

@property (nonatomic,retain) PKPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) const void* billingAddress;                     //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) PKContact * billingContact;                     //@synthesize billingContact=_billingContact - In the implementation block
@property (assign,nonatomic) const void* shippingAddress;                    //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKContact * shippingContact;                    //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
+(BOOL)supportsSecureCoding;
-(const void*)billingAddress;
-(const void*)shippingAddress;
-(PKShippingMethod *)shippingMethod;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(void)setShippingAddress:(const void*)arg1 ;
-(void)setBillingAddress:(const void*)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setShippingContact:(PKContact *)arg1 ;
-(void)setBillingContact:(PKContact *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(PKPaymentToken *)token;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(PKContact *)shippingContact;
-(PKContact *)billingContact;
@end

