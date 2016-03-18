/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicLayoutMarginProxyViewDelegate.h>
#import <libobjc.A.dylib/MusicProfileDetailViewDelegate.h>
#import <libobjc.A.dylib/MusicMediaDetailHeaderContentViewController.h>

@protocol MusicEntityProviding, MusicMediaProfileHeaderContentViewControllerDelegate;
@class MusicEntityValueContext, MusicProfileDetailView, NSOperationQueue, UIImageView, NSString, MusicMediaDetailTintInformation, UIImage, UIButton;

@interface MusicMediaProfileHeaderContentViewController : UIViewController <MusicLayoutMarginProxyViewDelegate, MusicProfileDetailViewDelegate, MusicMediaDetailHeaderContentViewController> {

	MusicEntityValueContext* _containerEntityValueContext;
	MusicProfileDetailView* _profileDetailView;
	NSOperationQueue* _profileImageEffectQueue;
	UIImageView* _profileImageView;
	double _transitionProgress;
	BOOL _adminEnabled;
	BOOL _followHidden;
	BOOL _hasProfileImage;
	BOOL _shouldDelayTransitionProgress;
	id<MusicEntityProviding> _containerEntityProvider;
	id<MusicMediaProfileHeaderContentViewControllerDelegate> _delegate;
	NSString* _followersCountText;
	NSString* _followersText;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	UIImage* _profileImage;
	NSString* _profileTitle;

}

@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                    //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaProfileHeaderContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAdminEnabled,nonatomic) BOOL adminEnabled;                                               //@synthesize adminEnabled=_adminEnabled - In the implementation block
@property (assign,getter=isFollowHidden,nonatomic) BOOL followHidden;                                               //@synthesize followHidden=_followHidden - In the implementation block
@property (nonatomic,copy) NSString * followersCountText;                                                           //@synthesize followersCountText=_followersCountText - In the implementation block
@property (nonatomic,copy) NSString * followersText;                                                                //@synthesize followersText=_followersText - In the implementation block
@property (assign,nonatomic) BOOL hasProfileImage;                                                                  //@synthesize hasProfileImage=_hasProfileImage - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                            //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (nonatomic,copy) UIImage * profileImage;                                                                  //@synthesize profileImage=_profileImage - In the implementation block
@property (nonatomic,copy) NSString * profileTitle;                                                                 //@synthesize profileTitle=_profileTitle - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayTransitionProgress;                                                    //@synthesize shouldDelayTransitionProgress=_shouldDelayTransitionProgress - In the implementation block
@property (nonatomic,readonly) UIButton * shareButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureArtworkCatalog:(id)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setDelegate:(id<MusicMediaProfileHeaderContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MusicMediaProfileHeaderContentViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_setContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(void)_reloadContainerEntityValueContextProperties;
-(void)_applyTintInformation;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(void)layoutMarginProxyViewLayoutMarginsDidChange:(id)arg1 ;
-(void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1 ;
-(void)_applyTransitionProgress;
-(UIEdgeInsets)_effectiveLayoutMargins;
-(double)_profileImageBottomInset;
-(void)setAdminEnabled:(BOOL)arg1 ;
-(void)setFollowHidden:(BOOL)arg1 ;
-(void)setFollowersCountText:(NSString *)arg1 ;
-(void)setFollowersText:(NSString *)arg1 ;
-(void)_reloadProfileImageView;
-(void)_applyProfileImageTintInformation;
-(void)profileDetailView:(id)arg1 didUpdateFollowingState:(BOOL)arg2 ;
-(void)profileDetailViewDidSelectContextualActionsButton:(id)arg1 ;
-(void)profileDetailViewDidSelectEditButton:(id)arg1 ;
-(void)profileDetailViewDidSelectShareActionsButton:(id)arg1 ;
-(void)profileDetailViewDidSelectTitle:(id)arg1 ;
-(void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 transitionProgress:(double)arg3 ;
-(id)initWithContainerEntityProvider:(id)arg1 ;
-(void)setHasProfileImage:(BOOL)arg1 ;
-(void)setProfileImage:(UIImage *)arg1 ;
-(void)setProfileTitle:(NSString *)arg1 ;
-(void)setShouldDelayTransitionProgress:(BOOL)arg1 ;
-(id<MusicEntityProviding>)containerEntityProvider;
-(BOOL)isAdminEnabled;
-(BOOL)isFollowHidden;
-(NSString *)followersCountText;
-(NSString *)followersText;
-(BOOL)hasProfileImage;
-(UIImage *)profileImage;
-(NSString *)profileTitle;
-(BOOL)shouldDelayTransitionProgress;
-(UIButton *)shareButton;
@end

