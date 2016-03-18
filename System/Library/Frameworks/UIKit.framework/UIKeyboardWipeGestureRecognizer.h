/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UITouch;

@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer {

	NSMutableArray* _endPoints;
	UITouch* candidateEndpoint;

}

@property (nonatomic,retain) UITouch * candidateEndpoint; 
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)setCandidateEndpoint:(UITouch *)arg1 ;
-(UITouch *)candidateEndpoint;
-(BOOL)segmentsLookLikeAWipe:(id)arg1 ;
@end

