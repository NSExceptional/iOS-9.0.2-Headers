/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSLocale, NSArray;

@interface SKProduct : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDecimalNumber * price; 
@property (nonatomic,readonly) NSLocale * priceLocale; 
@property (nonatomic,readonly) NSString * productIdentifier; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (nonatomic,readonly) NSArray * downloadContentLengths; 
@property (nonatomic,readonly) NSString * downloadContentVersion; 
@property (setter=_setLocaleIdentifier:,getter=_localeIdentifier,nonatomic,copy) NSString * _localeIdentifier; 
-(BOOL)isDownloadable;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSArray *)downloadContentLengths;
-(NSString *)downloadContentVersion;
-(NSLocale *)priceLocale;
-(NSString *)_localeIdentifier;
-(void)_setContentVersion:(id)arg1 ;
-(void)_setDownloadContentLengths:(id)arg1 ;
-(void)_setDownloadable:(BOOL)arg1 ;
-(void)_setLocaleIdentifier:(id)arg1 ;
-(void)_setLocalizedDescription:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(void)_setPriceLocale:(id)arg1 ;
-(void)_setProductIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)localizedDescription;
-(NSString *)localizedTitle;
-(NSDecimalNumber *)price;
-(void)_setPrice:(id)arg1 ;
@end

