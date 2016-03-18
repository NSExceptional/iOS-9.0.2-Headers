/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATMessageLink.h>
@class NSString;


@protocol ATMessageLink <NSObject>
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(int)endpointType;
-(void)addObserver:(id)arg1;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeRequestHandlerForDataClass:(id)arg1;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2;
-(BOOL)isInitialized;
-(BOOL)isOpen;

@end


@class NSString;

@interface ATMessageLink : NSObject <ATMessageLink>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isInitialized,nonatomic,readonly) BOOL initialized; 
@property (getter=isOpen,nonatomic,readonly) BOOL open; 
@property (nonatomic,readonly) int endpointType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
-(int)endpointType;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObserver:(id)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 ;
-(BOOL)isInitialized;
-(BOOL)isOpen;
@end

