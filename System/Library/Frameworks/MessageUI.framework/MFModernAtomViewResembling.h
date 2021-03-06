/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:23 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont;


@protocol MFModernAtomViewResembling <NSObject>
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(void)setSeparatorHidden:(BOOL)arg1;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)separatorHidden;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1;
-(BOOL)separatorIsLeftAligned;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1;
-(void)setPresentationOptions:(unsigned long long)arg1;
-(void)setScale:(double)arg1;
-(double)scale;
-(UIEdgeInsets)edgeInsets;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(CGPoint)baselinePoint;
-(UIFont *)titleFont;
-(unsigned long long)presentationOptions;
-(void)setTitleFont:(id)arg1;

@end

