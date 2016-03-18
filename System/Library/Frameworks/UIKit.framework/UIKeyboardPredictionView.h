/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackgroundView, UIKeyboardPredictionBarGrabber, NSMutableArray, NSString, UIView, UILabel, UIKBKeyView, UITouch, NSTimer, NSArray, TIKeyboardCandidate, NSDate;

@interface UIKeyboardPredictionView : UIView {

	UIKBBackgroundView* m_backgroundView;
	UIKeyboardPredictionBarGrabber* m_grabber;
	NSMutableArray* m_predictionCells;
	unsigned long long m_activeIndex;
	double m_width;
	NSString* m_openQuote;
	NSString* m_closeQuote;
	UIView* m_message;
	UILabel* m_messageLabel;
	UIKBKeyView* m_messageKeyView;
	double m_messageShownTime;
	CGPoint m_initLocation;
	BOOL m_dragging;
	BOOL m_hasLongCandidates;
	BOOL m_currentInputModeEnablePrediction;
	unsigned long long m_autocorrectionCell;
	BOOL m_delayActive;
	BOOL m_isMinimized;
	UIKBKeyView* m_collapsedView;
	int _notifyBatterySaverToken;
	int _state;
	UITouch* _activeTouch;
	NSTimer* _updateTimer;
	NSArray* _scheduledPredictions;
	TIKeyboardCandidate* _scheduledAutocorrection;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,retain) UITouch * activeTouch;                                      //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) BOOL show; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                      //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) NSArray * scheduledPredictions;                             //@synthesize scheduledPredictions=_scheduledPredictions - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * scheduledAutocorrection;              //@synthesize scheduledAutocorrection=_scheduledAutocorrection - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                                    //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
+(unsigned long long)numberOfCandidates;
+(double)predictionViewWidthForOrientation:(long long)arg1 ;
+(double)predictionViewHeightForState:(int)arg1 orientation:(long long)arg2 ;
+(double)overlapHeight;
-(BOOL)enabled;
-(BOOL)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)activeTouch;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)suspend;
-(double)heightForInterfaceOrientation:(long long)arg1 ;
-(id)autocorrection;
-(void)setPredictionViewState:(int)arg1 animate:(BOOL)arg2 ;
-(int)stateForCurrentPreferences;
-(void)setPredictionViewState:(int)arg1 animate:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)setShow:(BOOL)arg1 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(NSTimer *)updateTimer;
-(void)inputModeDidChange;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)releaseMessage;
-(void)setTouchedCellState:(int)arg1 ;
-(unsigned long long)indexForPoint:(CGPoint)arg1 ;
-(void)setActiveCellWithIndex:(unsigned long long)arg1 ;
-(void)commitPrediction:(id)arg1 ;
-(void)delayActivateCellForPrediction:(id)arg1 ;
-(void)deactivateCandidate;
-(void)acceptCandidateAtCell:(id)arg1 ;
-(id)labelTextForPrediction:(id)arg1 typedString:(id)arg2 ;
-(NSArray *)scheduledPredictions;
-(TIKeyboardCandidate *)scheduledAutocorrection;
-(void)_setPredictions:(id)arg1 autocorrection:(id)arg2 ;
-(void)setScheduledPredictions:(NSArray *)arg1 ;
-(void)setScheduledAutocorrection:(TIKeyboardCandidate *)arg1 ;
-(void)updateTimerFired:(id)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)touchUpdateTimer;
-(int)messageCount;
-(int)maxMessageCount;
-(void)removeMessage;
-(void)initCells;
-(double)heightBeforeStateChangeForInterfaceOrientation:(long long)arg1 ;
-(void)showMessageWithSize:(CGSize)arg1 ;
-(void)suppressLayoutSubviewsForCellLabels:(BOOL)arg1 ;
-(unsigned long long)predictionCount;
-(void)acceptCandidate;
-(void)activateCandidateAtPoint:(CGPoint)arg1 ;
-(void)setPredictions:(id)arg1 autocorrection:(id)arg2 ;
@end

