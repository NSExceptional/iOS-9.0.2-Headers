/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:22 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITextView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol CKBalloonTextViewInteractionDelegate;
@class NSAttributedString, NSString;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate> {

	BOOL _singleLine;
	NSAttributedString* _attributedText;
	id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;
	double _capOffsetFromBoundsTop;
	double _lastLineBaselineOffsetFromBoundsTop;

}

@property (assign,nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic) double capOffsetFromBoundsTop;                                             //@synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop - In the implementation block
@property (assign,nonatomic) double lastLineBaselineOffsetFromBoundsTop;                                //@synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop - In the implementation block
@property (assign,getter=isSingleLine,nonatomic) BOOL singleLine;                                       //@synthesize singleLine=_singleLine - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                         //@synthesize attributedText=_attributedText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)_interactionStartedFromPreviewItemController:(id)arg1 ;
-(void)_interactionStoppedFromPreviewItemController:(id)arg1 ;
-(void)setInteractionDelegate:(id<CKBalloonTextViewInteractionDelegate>)arg1 ;
-(id<CKBalloonTextViewInteractionDelegate>)interactionDelegate;
-(id)initReadonlyAndUnselectableWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(BOOL)isSingleLine;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(double)lastLineBaselineOffsetFromBoundsTop;
-(double)capOffsetFromBoundsTop;
-(void)setCapOffsetFromBoundsTop:(double)arg1 ;
-(void)setLastLineBaselineOffsetFromBoundsTop:(double)arg1 ;
-(void)setSingleLine:(BOOL)arg1 ;
@end

