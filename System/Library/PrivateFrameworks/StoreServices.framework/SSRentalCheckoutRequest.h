/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSArray, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding> {

	NSNumber* _accountIdentifier;
	long long _downloadIdentifier;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	BOOL _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (readonly) long long downloadIdentifier; 
@property (assign,nonatomic) BOOL shouldValidateRentalInfo;              //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)sinfs;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(long long)downloadIdentifier;
-(void)dealloc;
-(id)init;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(NSNumber *)accountIdentifier;
-(id)initWithSinfs:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(BOOL)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(BOOL)arg1 ;
@end

