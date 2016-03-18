/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/InfoDiagramCablingAnchorDelegate.h>

@class AUImageView, AULabel, UIView, NSString;

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate> {

	AUImageView* broadbandImageView;
	AULabel* broadbandLabel;
	AULabel* internetLabel;
	AULabel* portLabel;
	AUImageView* wanConnectedBaseImageView;
	AULabel* wanConnectedBaseLabel;
	AUImageView* replacementBaseImageView;
	AULabel* replacementBaseLabel;
	AUImageView* insetImageView;
	UIView* fixedCablingFrameView;
	UIView* animatingCablingFrameView;
	unsigned wanBaseProductID;
	unsigned replacementProductID;
	long long sizeClass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 wanConnectedBaseProductID:(unsigned)arg2 replacementProductID:(unsigned)arg3 ;
-(void)setWANConnectedBaseLabelString:(id)arg1 ;
-(void)startAnimatingCablingLayer;
-(CGPoint)swapArcLineStartPoint;
-(CGPoint)swapArcLineEndPoint;
-(CGPoint)internetPoint;
-(CGPoint)broadbandInPoint;
-(CGPoint)broadbandOutPoint;
-(CGPoint)wanConnectedBaseWANPoint;
-(CGPoint)swapArcControlPoint;
-(CGPoint)swapArcControlPoint1;
-(CGPoint)swapArcControlPoint2;
-(id)initWithFrame:(CGRect)arg1 wanConnectedBaseProductID:(unsigned)arg2 ;
-(void)stopAnimatingCablingLayer;
@end

