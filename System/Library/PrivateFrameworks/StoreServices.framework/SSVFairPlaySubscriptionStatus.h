/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding> {

	BOOL _hasSubscriptionLease;
	BOOL _hasSubscriptionSlot;

}

@property (assign,nonatomic) BOOL hasSubscriptionLease;              //@synthesize hasSubscriptionLease=_hasSubscriptionLease - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionSlot;               //@synthesize hasSubscriptionSlot=_hasSubscriptionSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasSubscriptionLease;
-(BOOL)hasSubscriptionSlot;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setHasSubscriptionLease:(BOOL)arg1 ;
-(void)setHasSubscriptionSlot:(BOOL)arg1 ;
@end

