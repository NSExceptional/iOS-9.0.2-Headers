/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PT2DGraphDatum.h>
@class UIColor;


@protocol PT2DGraphDatum
@property (nonatomic,retain) UIColor * color; 
@optional
-(UIColor *)color;
-(void)setColor:(id)arg1;
-(CGPoint*)graphPointForContext:(id)arg1;

@required
-(CGPoint*)graphPoint;

@end


@class UIColor;

@interface PT2DGraphDatum : NSObject <PT2DGraphDatum> {

	UIColor* _color;
	CGPoint _graphPoint;

}

@property (assign,nonatomic) CGPoint graphPoint;              //@synthesize graphPoint=_graphPoint - In the implementation block
@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
+(id)datumWithPoint:(CGPoint)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setGraphPoint:(CGPoint)arg1 ;
-(CGPoint)graphPoint;
@end

