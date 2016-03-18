/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:24 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <MobileTimer/AnalogClockView.h>

@interface CollectionCellAnalogClockView : AnalogClockView
+(int)style;
+(double)secondHandOverhangLength;
+(double)secondHandMainLength;
+(double)faceRadius;
+(double)hourHandLength;
+(double)minuteHandLength;
+(double)minuteHandWidth;
+(double)hourHandWidth;
+(double)secondHandWidth;
+(double)overHourHandDotSize;
+(double)overSecondHandDotSize;
+(CGPoint)handRotationalCenterForHand:(int)arg1 ;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)resourcePath;
-(double)updateInterval;
-(double)coarseUpdateInterval;
@end

