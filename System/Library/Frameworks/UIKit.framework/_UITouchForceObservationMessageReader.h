/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:44 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITouchForceObservationMessageReading.h>

@class NSString;

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {

	BOOL _shouldFilterDueToSystemGestures;
	double _touchForce;
	double _timestamp;
	CGPoint _centroid;

}

@property (assign,nonatomic) double touchForce;                                 //@synthesize touchForce=_touchForce - In the implementation block
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGPoint centroid;                                  //@synthesize centroid=_centroid - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterDueToSystemGestures;              //@synthesize shouldFilterDueToSystemGestures=_shouldFilterDueToSystemGestures - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)shouldFilterDueToSystemGestures;
-(double)touchForce;
-(CGPoint)centroid;
-(void)setShouldFilterDueToSystemGestures:(BOOL)arg1 ;
-(void)setCentroid:(CGPoint)arg1 ;
-(void)setTouchForce:(double)arg1 ;
@end

