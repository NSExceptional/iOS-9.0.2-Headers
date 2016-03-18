/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:52 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView {

	CABackdropLayer* _backdropLayer;
	double _zoom;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer;              //@synthesize backdropLayer=_backdropLayer - In the implementation block
@property (assign,nonatomic) double zoom;                                  //@synthesize zoom=_zoom - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)init;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)backdropLayerStatisticsDidChange:(id)arg1 ;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
@end

