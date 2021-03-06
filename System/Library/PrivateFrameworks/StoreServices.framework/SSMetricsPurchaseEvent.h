/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:26 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPurchaseEvent : SSMetricsBaseEvent

@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * transactionIdentifier; 
-(NSString *)transactionIdentifier;
-(id)init;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)addFieldsFromPurchaseResponse:(id)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
@end

