/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface THIRDPartyApps : NSObject {

	int wifiIn;
	int wifiOut;
	int cellIn;
	int cellOut;
	NSString* processName;

}

@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int wifiIn; 
@property (assign,nonatomic) int wifiOut; 
@property (assign,nonatomic) int cellIn; 
@property (assign,nonatomic) int cellOut; 
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setWifiIn:(int)arg1 ;
-(void)setWifiOut:(int)arg1 ;
-(void)setCellIn:(int)arg1 ;
-(void)setCellOut:(int)arg1 ;
-(int)wifiIn;
-(int)wifiOut;
-(int)cellIn;
-(int)cellOut;
@end
