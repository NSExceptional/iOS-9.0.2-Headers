/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface MASessionEngine : NSObject {

	NSData* _storebagReceivedDataIn;
	NSString* _serialNumber;

}

@property (retain) NSData * storebagReceivedDataIn;              //@synthesize storebagReceivedDataIn=_storebagReceivedDataIn - In the implementation block
@property (retain) NSString * serialNumber;                      //@synthesize serialNumber=_serialNumber - In the implementation block
-(void)dealloc;
-(void)performSelectorOnRemoteObject:(SEL)arg1 withParam:(id)arg2 completionBlock:(/*^block*/id)arg3 waitBlock:(/*^block*/id)arg4 ;
-(BOOL)createSessionRequest:(id*)arg1 error:(id*)arg2 ;
-(NSData *)storebagReceivedDataIn;
-(BOOL)createActivationInfo:(id*)arg1 error:(id*)arg2 ;
-(BOOL)createSessionURLRequest:(id*)arg1 error:(id*)arg2 ;
-(BOOL)handleSessionResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)createActivationInfoURLRequest:(id*)arg1 error:(id*)arg2 ;
-(BOOL)handleActivationInfo:(id)arg1 error:(id*)arg2 ;
-(void)setStorebagReceivedDataIn:(NSData *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)serialNumber;
@end

