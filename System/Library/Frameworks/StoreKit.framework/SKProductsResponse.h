/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SKProductsResponse : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * products; 
@property (nonatomic,readonly) NSArray * invalidProductIdentifiers; 
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSArray *)products;
-(NSArray *)invalidProductIdentifiers;
-(void)_setInvalidIdentifiers:(id)arg1 ;
-(void)_setProducts:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

