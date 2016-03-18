/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicMediaDetailHeaderViewController.h>

@protocol MusicMediaDetailHeaderViewController <NSObject>
@property (assign,nonatomic,__weak) id<MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate; 
@optional
-(void)setMediaDetailTintInformation:(id)arg1;

@required
-(double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(BOOL*)arg2;
-(void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4;
-(id<MusicMediaDetailHeaderViewControllerDelegate>)mediaHeaderViewControllerDelegate;
-(void)setMediaHeaderViewControllerDelegate:(id)arg1;

@end


@protocol MusicMediaDetailHeaderViewControllerDelegate;
@class MusicInteractiveContentEffectView, UISnapshotView, UIView, MusicMediaUberHeaderLegibilityOverlayView, UIImage, NSArray, NSString, MusicMediaDetailTintInformation;

@interface MusicMediaDetailHeaderViewController : UIViewController <MusicMediaDetailHeaderViewController> {

	MusicInteractiveContentEffectView* _contentEffectView;
	UISnapshotView* _contentEffectSnapshotView;
	UIView* _contentEffectClippingView;
	UIView* _darkeningTintView;
	CGRect _focusRect;
	BOOL _hasReceivedHeaderInformation;
	double _headerHeight;
	double _headerVerticalOffset;
	CGSize _lastContentEffectViewSnapshotSize;
	MusicMediaUberHeaderLegibilityOverlayView* _legibilityOverlayView;
	double _maximumHeaderHeight;
	double _originalContentViewControllerViewAlpha;
	double _transitionProgress;
	double _artworkFittingHeight;
	UIImage* _artworkImage;
	NSArray* _focusRegions;
	NSString* _legibilityBottomGradientType;
	unsigned long long _headerStyle;
	MusicMediaDetailTintInformation* _mediaDetailTintInformation;
	id<MusicMediaDetailHeaderViewControllerDelegate> _mediaHeaderViewControllerDelegate;

}

@property (assign,nonatomic) double artworkFittingHeight;                                                                            //@synthesize artworkFittingHeight=_artworkFittingHeight - In the implementation block
@property (nonatomic,retain) UIImage * artworkImage;                                                                                 //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSArray * focusRegions;                                                                                   //@synthesize focusRegions=_focusRegions - In the implementation block
@property (nonatomic,copy) NSString * legibilityBottomGradientType;                                                                  //@synthesize legibilityBottomGradientType=_legibilityBottomGradientType - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                                                                         //@synthesize headerStyle=_headerStyle - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * mediaDetailTintInformation;                                             //@synthesize mediaDetailTintInformation=_mediaDetailTintInformation - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaDetailHeaderViewControllerDelegate> mediaHeaderViewControllerDelegate;              //@synthesize mediaHeaderViewControllerDelegate=_mediaHeaderViewControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)_applyTintInformation;
-(void)setMediaDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(MusicMediaDetailTintInformation *)mediaDetailTintInformation;
-(unsigned long long)headerStyle;
-(void)setArtworkFittingHeight:(double)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setLegibilityBottomGradientType:(NSString *)arg1 ;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(void)_updateHeaderProperties;
-(void)setFocusRegions:(NSArray *)arg1 ;
-(NSArray *)focusRegions;
-(UIImage *)artworkImage;
-(double)_maximumHeaderHeightForBoundsHeight:(double)arg1 ;
-(id)_calculateArtworkContentBackgroundColor;
-(void)_applyHeaderStyle;
-(void)_applyHeaderLegibilityTintInformation;
-(void)_reloadContentEffectSnapshotView;
-(double)maximumMediaDetailHeaderHeightForBoundsHeight:(double)arg1 returningShouldDeferToContentViewController:(BOOL*)arg2 ;
-(void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4 ;
-(id<MusicMediaDetailHeaderViewControllerDelegate>)mediaHeaderViewControllerDelegate;
-(void)setMediaHeaderViewControllerDelegate:(id<MusicMediaDetailHeaderViewControllerDelegate>)arg1 ;
-(double)artworkFittingHeight;
-(NSString *)legibilityBottomGradientType;
@end

