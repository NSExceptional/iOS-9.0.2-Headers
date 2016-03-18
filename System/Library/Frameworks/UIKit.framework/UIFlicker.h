/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:40 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView;

@interface UIFlicker : NSObject {

	UIView* _target;
	CGPoint _startLocation;
	int _throwIterations;
	id _delegate;
	int _mouseUpCount;
	int _mouseDraggedCount;
	float _delay;
	CGPoint _offset;

}
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)setDelay:(float)arg1 ;
-(void)setTarget:(id)arg1 ;
-(void)setIterations:(int)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setStartLocation:(CGPoint)arg1 ;
-(void)run;
@end
