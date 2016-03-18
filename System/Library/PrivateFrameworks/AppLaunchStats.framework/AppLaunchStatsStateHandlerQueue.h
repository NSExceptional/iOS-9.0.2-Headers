/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:05 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>

@class NSMutableArray;

@interface AppLaunchStatsStateHandlerQueue : NSObject <DuetLoggerProtocol> {

	NSMutableArray* bgDataReadHandlerQueue;
	NSMutableArray* dataReadHandlerQueue;
	NSMutableArray* dataBudgetHandlerQueue;
	NSMutableArray* powerFetchBudgetHandlerQueue;
	NSMutableArray* powerPushBudgetHandlerQueue;
	NSMutableArray* bgNDISCDataReadHandlerQueue;
	NSMutableArray* appForecastHandlerQueue;
	NSMutableArray* dataForecastHandlerQueue;
	NSMutableArray* powerForecastHandlerQueue;
	NSMutableArray* queryHandlerQueue;
	NSMutableArray* trendHandlerQueue;
	NSMutableArray* ok2LaunchHandlerQueue;
	NSMutableArray* scoreHandlerQueue;
	NSMutableArray* databaseAgeHandlerQueue;
	NSMutableArray* noprewarmListHandlerQueue;

}

@property (nonatomic,readonly) NSMutableArray * bgDataReadHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * dataReadHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * dataBudgetHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * powerFetchBudgetHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * powerPushBudgetHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * bgNDISCDataReadHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * appForecastHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * dataForecastHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * powerForecastHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * queryHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * trendHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * ok2LaunchHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * scoreHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * databaseAgeHandlerQueue; 
@property (nonatomic,readonly) NSMutableArray * noprewarmListHandlerQueue; 
-(id)init;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(NSMutableArray *)databaseAgeHandlerQueue;
-(id)deQueue:(id)arg1 ;
-(NSMutableArray *)noprewarmListHandlerQueue;
-(NSMutableArray *)scoreHandlerQueue;
-(NSMutableArray *)ok2LaunchHandlerQueue;
-(NSMutableArray *)queryHandlerQueue;
-(NSMutableArray *)dataForecastHandlerQueue;
-(NSMutableArray *)appForecastHandlerQueue;
-(NSMutableArray *)powerForecastHandlerQueue;
-(NSMutableArray *)trendHandlerQueue;
-(void)enQueue:(id)arg1 withQueue:(id)arg2 ;
-(NSMutableArray *)bgDataReadHandlerQueue;
-(NSMutableArray *)dataReadHandlerQueue;
-(NSMutableArray *)dataBudgetHandlerQueue;
-(NSMutableArray *)powerFetchBudgetHandlerQueue;
-(NSMutableArray *)powerPushBudgetHandlerQueue;
-(NSMutableArray *)bgNDISCDataReadHandlerQueue;
@end

