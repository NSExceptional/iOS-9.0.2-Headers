/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UINavigationController, UIViewController, NSArray;

@interface _UINavigationControllerPalette : UIView {

	struct {
		unsigned isAttached : 1;
		unsigned attachmentIsChanging : 1;
		unsigned restartPaletteTransitionIfNecessary : 1;
		unsigned pinned : 1;
		unsigned pinningBarShadowIsHidden : 1;
		unsigned paletteShadowIsHidden : 1;
	}  _paletteFlags;
	BOOL __paletteOverridesPinningBar;
	BOOL _paletteIsAboveBar;
	BOOL _visibleWhenPinningBarIsHidden;
	BOOL __palettePinningBarHidden;
	UIView* __backgroundView;
	UINavigationController* _navController;
	unsigned long long _boundaryEdge;
	UIViewController* __unpinnedController;
	id __pinningBar;
	NSArray* __constraints;
	NSArray* __backgroundConstraints;
	CGSize __size;
	UIEdgeInsets _preferredContentInsets;

}

@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView;                                                              //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar;                                          //@synthesize _paletteOverridesPinningBar=__paletteOverridesPinningBar - In the implementation block
@property (nonatomic,readonly) UINavigationController * navController;                                                                         //@synthesize navController=_navController - In the implementation block
@property (nonatomic,readonly) unsigned long long boundaryEdge;                                                                                //@synthesize boundaryEdge=_boundaryEdge - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteIsAboveBar;                                                                                           //@synthesize paletteIsAboveBar=_paletteIsAboveBar - In the implementation block
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden;                                        //@synthesize visibleWhenPinningBarIsHidden=_visibleWhenPinningBarIsHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets;                                                                              //@synthesize preferredContentInsets=_preferredContentInsets - In the implementation block
@property (assign,nonatomic) UIViewController * _unpinnedController;                                                                           //@synthesize _unpinnedController=__unpinnedController - In the implementation block
@property (assign,setter=_setPinningBar:,nonatomic) id _pinningBar;                                                                            //@synthesize _pinningBar=__pinningBar - In the implementation block
@property (getter=_attachmentIsChanging,nonatomic,readonly) BOOL _attachmentIsChanging; 
@property (assign,setter=_setRestartPaletteTransitionIfNecessary:,nonatomic) BOOL _restartPaletteTransitionIfNecessary; 
@property (setter=_setConstraints:,nonatomic,retain) NSArray * _constraints;                                                                   //@synthesize _constraints=__constraints - In the implementation block
@property (assign,setter=_setSize:,nonatomic) CGSize _size;                                                                                    //@synthesize _size=__size - In the implementation block
@property (setter=_setBackgroundConstraints:,nonatomic,retain) NSArray * _backgroundConstraints;                                               //@synthesize _backgroundConstraints=__backgroundConstraints - In the implementation block
@property (assign,setter=_setPalettePinningBarHidden:,getter=_isPalettePinningBarHidden,nonatomic) BOOL _palettePinningBarHidden;              //@synthesize _palettePinningBarHidden=__palettePinningBarHidden - In the implementation block
-(void)__ck_setPaletteFrame:(CGRect)arg1 ;
-(void)SKUI_beginHidingPaletteShadow;
-(void)SKUI_endHidingPaletteShadow;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)_backgroundView;
-(void)_setVisualAltitude:(double)arg1 ;
-(void)_setVisualAltitudeBias:(CGSize)arg1 ;
-(void)didMoveToSuperview;
-(void)_setBackgroundView:(id)arg1 ;
-(CGSize)_size;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)paletteShadowIsHidden;
-(void)_updateBackgroundView;
-(BOOL)isAttached;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(BOOL)_isPalettePinningBarHidden;
-(unsigned long long)boundaryEdge;
-(BOOL)paletteIsHidden;
-(void)_setTopConstraintConstant:(double)arg1 ;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2 ;
-(void)_setLeftConstraintConstant:(double)arg1 ;
-(void)_setPalettePinningBarHidden:(BOOL)arg1 ;
-(BOOL)isPinned;
-(void)_resetConstraintConstants:(double)arg1 ;
-(BOOL)_restartPaletteTransitionIfNecessary;
-(NSArray *)_constraints;
-(void)_configurePaletteConstraintsForBoundary;
-(UIEdgeInsets)preferredContentInsets;
-(id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(void)_setSize:(CGSize)arg1 ;
-(void)_setPinningBar:(id)arg1 ;
-(void)_setAttached:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)pinningBarShadowIsHidden;
-(id)_pinningBar;
-(void)_setRestartPaletteTransitionIfNecessary:(BOOL)arg1 ;
-(BOOL)_attachmentIsChanging;
-(UINavigationController *)navController;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1 ;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1 ;
-(void)_setBackgroundConstraints:(id)arg1 ;
-(void)_setConstraints:(id)arg1 ;
-(void)_disableConstraints;
-(void)_enableConstraints;
-(void)_resetHeightConstraintConstant;
-(void)_configureConstraintsForBackground:(id)arg1 ;
-(void)_setupBackgroundViewIfNecessary;
-(void)_setAttachmentIsChanging:(BOOL)arg1 ;
-(void)setPaletteShadowIsHidden:(BOOL)arg1 ;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1 ;
-(BOOL)paletteIsAboveBar;
-(void)setPaletteIsAboveBar:(BOOL)arg1 ;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1 ;
-(UIViewController *)_unpinnedController;
-(void)set_unpinnedController:(UIViewController *)arg1 ;
-(NSArray *)_backgroundConstraints;
@end

