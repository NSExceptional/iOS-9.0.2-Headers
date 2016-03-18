/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:58 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNAvatarCardActionsViewDelegate.h>
#import <libobjc.A.dylib/CNCardTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNAvatarCardViewControllerDelegate;
@class CNAvatarCardController, CNAvatarCardActionsView, UIView, NSArray, NSString, UIImage;

@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNCardTransitioning, UIGestureRecognizerDelegate> {

	BOOL _visible;
	BOOL _hasBackgroundColor;
	BOOL _hasHeader;
	BOOL _headerOnTop;
	CNAvatarCardController* _cardController;
	id<CNAvatarCardViewControllerDelegate> _delegate;
	CNAvatarCardActionsView* _actionsView;
	UIView* _sourceView;
	UIView* _headerContainerView;
	UIView* _effectView;
	NSArray* _verticalConstraints;

}

@property (nonatomic,retain) NSArray * contacts; 
@property (nonatomic,copy) NSArray * actionCategories; 
@property (assign,nonatomic,__weak) CNAvatarCardController * cardController;                      //@synthesize cardController=_cardController - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCardViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                       //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundColor;                                             //@synthesize hasBackgroundColor=_hasBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasHeader;                                                      //@synthesize hasHeader=_hasHeader - In the implementation block
@property (assign,nonatomic) BOOL headerOnTop;                                                    //@synthesize headerOnTop=_headerOnTop - In the implementation block
@property (assign,nonatomic) BOOL actionsReversed; 
@property (assign,nonatomic) BOOL dismissesBeforePerforming; 
@property (assign,nonatomic) BOOL bypassActionValidation; 
@property (nonatomic,retain) CNAvatarCardActionsView * actionsView;                               //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                 //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                        //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                                 //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) NSArray * verticalConstraints;                                       //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * transitioningView; 
@property (nonatomic,readonly) CGRect transitioningFrame; 
@property (nonatomic,readonly) CGRect transitioningContentFrame; 
@property (nonatomic,readonly) UIImage * transitioningImage; 
@property (nonatomic,readonly) CGRect transitioningImageFrame; 
@property (assign) BOOL transitioningImageVisible; 
@property (nonatomic,readonly) UIView * transitioningContentView; 
-(void)refreshActions;
-(NSArray *)contacts;
-(BOOL)bypassActionValidation;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(CNAvatarCardController *)cardController;
-(NSArray *)actionCategories;
-(CGRect)transitioningContentFrame;
-(UIImage *)transitioningImage;
-(CGRect)transitioningImageFrame;
-(BOOL)transitioningImageVisible;
-(void)setTransitioningImageVisible:(BOOL)arg1 ;
-(CNAvatarCardActionsView *)actionsView;
-(void)setHeaderOnTop:(BOOL)arg1 ;
-(void)setActionsView:(CNAvatarCardActionsView *)arg1 ;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(NSArray *)verticalConstraints;
-(UIView *)headerContainerView;
-(BOOL)headerOnTop;
-(void)setVerticalConstraints:(NSArray *)arg1 ;
-(void)setActionsReversed:(BOOL)arg1 ;
-(BOOL)actionsReversed;
-(void)setDismissesBeforePerforming:(BOOL)arg1 ;
-(BOOL)dismissesBeforePerforming;
-(void)_updatePreferredSize;
-(CGRect)_photoFrameInView:(id)arg1 ;
-(id)viewControllerForCardActionsView:(id)arg1 ;
-(id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(void)cardActionsView:(id)arg1 willShowActions:(id)arg2 ;
-(void)cardActionsView:(id)arg1 didShowActions:(id)arg2 ;
-(void)dismissViewControllerForCardActionsView:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<CNAvatarCardViewControllerDelegate>)arg1 ;
-(id<CNAvatarCardViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(UIView *)transitioningView;
-(CGRect)transitioningFrame;
-(BOOL)isVisible;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(BOOL)hasHeader;
-(void)setHasHeader:(BOOL)arg1 ;
-(BOOL)hasBackgroundColor;
-(void)setHasBackgroundColor:(BOOL)arg1 ;
@end

