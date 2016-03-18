/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:00 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <UIKit/UIView.h>

@protocol AXSBVoiceOverSwipeDetectorDelegate;
@class UILabel, UIImageView;

@interface AXSBVoiceOverSwipeDetectorView : UIView {

	UILabel* _titleLabel;
	UIImageView* _bgImageView;
	BOOL _swipeDetected;
	id<AXSBVoiceOverSwipeDetectorDelegate> _delegate;

}

@property (assign,nonatomic) id<AXSBVoiceOverSwipeDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXSBVoiceOverSwipeDetectorDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<AXSBVoiceOverSwipeDetectorDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_swipeDetected:(id)arg1 ;
-(void)_cancelVOSwipeActivation:(id)arg1 ;
@end

