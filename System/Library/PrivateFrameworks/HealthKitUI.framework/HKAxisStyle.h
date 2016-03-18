/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKStrokeStyle, HKTickStyle, HKAxisLabelStyle, HKFillStyle;

@interface HKAxisStyle : NSObject <NSCopying> {

	BOOL _showGridLines;
	HKStrokeStyle* _gridLineStyle;
	HKStrokeStyle* _axisLineStyle;
	HKTickStyle* _tickStyle;
	HKAxisLabelStyle* _labelStyle;
	unsigned long long _tickPositions;
	unsigned long long _axisLabelPosition;
	HKFillStyle* _fillStyle;
	double _fillInnerPadding;
	double _fillOuterPadding;
	long long _location;

}

@property (nonatomic,retain) HKStrokeStyle * gridLineStyle;                     //@synthesize gridLineStyle=_gridLineStyle - In the implementation block
@property (nonatomic,retain) HKStrokeStyle * axisLineStyle;                     //@synthesize axisLineStyle=_axisLineStyle - In the implementation block
@property (nonatomic,retain) HKTickStyle * tickStyle;                           //@synthesize tickStyle=_tickStyle - In the implementation block
@property (nonatomic,retain) HKAxisLabelStyle * labelStyle;                     //@synthesize labelStyle=_labelStyle - In the implementation block
@property (assign,nonatomic) unsigned long long tickPositions;                  //@synthesize tickPositions=_tickPositions - In the implementation block
@property (assign,nonatomic) unsigned long long axisLabelPosition;              //@synthesize axisLabelPosition=_axisLabelPosition - In the implementation block
@property (assign,nonatomic) BOOL showGridLines;                                //@synthesize showGridLines=_showGridLines - In the implementation block
@property (nonatomic,retain) HKFillStyle * fillStyle;                           //@synthesize fillStyle=_fillStyle - In the implementation block
@property (assign,nonatomic) double fillInnerPadding;                           //@synthesize fillInnerPadding=_fillInnerPadding - In the implementation block
@property (assign,nonatomic) double fillOuterPadding;                           //@synthesize fillOuterPadding=_fillOuterPadding - In the implementation block
@property (assign,nonatomic) long long location;                                //@synthesize location=_location - In the implementation block
+(id)defaultStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(double)fillOuterPadding;
-(HKAxisLabelStyle *)labelStyle;
-(BOOL)showGridLines;
-(HKStrokeStyle *)gridLineStyle;
-(double)fillInnerPadding;
-(HKTickStyle *)tickStyle;
-(HKStrokeStyle *)axisLineStyle;
-(unsigned long long)tickPositions;
-(void)setLabelStyle:(HKAxisLabelStyle *)arg1 ;
-(void)setGridLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setAxisLineStyle:(HKStrokeStyle *)arg1 ;
-(void)setTickStyle:(HKTickStyle *)arg1 ;
-(void)setTickPositions:(unsigned long long)arg1 ;
-(unsigned long long)axisLabelPosition;
-(void)setAxisLabelPosition:(unsigned long long)arg1 ;
-(void)setShowGridLines:(BOOL)arg1 ;
-(void)setFillInnerPadding:(double)arg1 ;
-(void)setFillOuterPadding:(double)arg1 ;
-(void)setFillStyle:(HKFillStyle *)arg1 ;
-(HKFillStyle *)fillStyle;
@end

