/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:28 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@protocol PKGlyphViewDelegate;
@class NSMutableArray, NSString, PKFingerprintGlyphView, PKPhoneGlyphView, PKCheckGlyphView, UIImageView, UIColor, UIImage;

@interface PKGlyphView : UIView {

	unsigned long long _transitionIndex;
	BOOL _transitioning;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	double _lastAnimationWillFinish;
	BOOL _phoneWiggling;
	NSString* _phoneWiggleAnimationKey;
	struct {
		unsigned showingPhone : 1;
		unsigned phoneRotated : 1;
	}  _layoutFlags;
	PKFingerprintGlyphView* _fingerprintView;
	PKPhoneGlyphView* _phoneView;
	PKCheckGlyphView* _checkView;
	double _phoneAspectRatio;
	UIImageView* _customImageView;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIImage* _customImage;
	long long _state;
	id<PKGlyphViewDelegate> _delegate;

}

@property (nonatomic,copy) UIColor * primaryColor;                          //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,copy) UIColor * secondaryColor;                        //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) BOOL fadeOnRecognized; 
@property (nonatomic,retain) UIImage * customImage;                         //@synthesize customImage=_customImage - In the implementation block
@property (nonatomic,readonly) long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) id<PKGlyphViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfState;
-(void)_startPhoneWiggle;
-(void)_endPhoneWiggle;
-(void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(void)_executeTransitionCompletionHandlers:(BOOL)arg1 ;
-(void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)_minimumAnimationDurationForStateTransition;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updatePhoneWiggleIfNecessary;
-(void)_updateCustomImageViewOpacityAnimated:(BOOL)arg1 ;
-(void)_updateCheckViewStateAnimated:(BOOL)arg1 ;
-(void)_finishTransitionForIndex:(unsigned long long)arg1 ;
-(void)_executeAfterMinimumAnimationDurationForStateTransition:(/*^block*/id)arg1 ;
-(void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1 ;
-(CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1 ;
-(CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2 ;
-(void)setSecondaryColor:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)fadeOnRecognized;
-(void)setFadeOnRecognized:(BOOL)arg1 ;
-(void)setCustomImage:(UIImage *)arg1 ;
-(UIImage *)customImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKGlyphViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<PKGlyphViewDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
@end

