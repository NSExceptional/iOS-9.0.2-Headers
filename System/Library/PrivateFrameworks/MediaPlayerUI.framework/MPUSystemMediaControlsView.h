/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:19 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@protocol MPUSystemMediaControlsViewDelegate;
@class MPUItemOfferButton, MPUSkipLimitView, MPUTransportControlsView, MPUChronologicalProgressView, MPUMediaControlsTitlesView, MPUMediaControlsVolumeView, MPUSystemBuyButtonConfiguration, NSString;

@interface MPUSystemMediaControlsView : UIView <SKUIItemOfferButtonDelegate> {

	MPUItemOfferButton* _buyTrackButton;
	MPUItemOfferButton* _buyAlbumButton;
	int _prefsChangedNotifyToken;
	id<MPUSystemMediaControlsViewDelegate> _delegate;
	long long _style;
	MPUSkipLimitView* _skipLimitView;
	MPUTransportControlsView* _transportControlsView;
	MPUChronologicalProgressView* _timeInformationView;
	MPUMediaControlsTitlesView* _trackInformationView;
	MPUMediaControlsVolumeView* _volumeView;
	MPUSystemBuyButtonConfiguration* _buyTrackConfiguration;
	MPUSystemBuyButtonConfiguration* _buyAlbumConfiguration;

}

@property (assign,nonatomic,__weak) id<MPUSystemMediaControlsViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) MPUSkipLimitView * skipLimitView;                                     //@synthesize skipLimitView=_skipLimitView - In the implementation block
@property (nonatomic,readonly) MPUTransportControlsView * transportControlsView;                     //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) MPUChronologicalProgressView * timeInformationView;                   //@synthesize timeInformationView=_timeInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsTitlesView * trackInformationView;                    //@synthesize trackInformationView=_trackInformationView - In the implementation block
@property (nonatomic,readonly) MPUMediaControlsVolumeView * volumeView;                              //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyTrackConfiguration;              //@synthesize buyTrackConfiguration=_buyTrackConfiguration - In the implementation block
@property (nonatomic,readonly) MPUSystemBuyButtonConfiguration * buyAlbumConfiguration;              //@synthesize buyAlbumConfiguration=_buyAlbumConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPUMediaControlsVolumeView *)volumeView;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MPUSystemMediaControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MPUSystemMediaControlsViewDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MPUTransportControlsView *)transportControlsView;
-(void)_layoutSkipLimitView;
-(MPUSkipLimitView *)skipLimitView;
-(id)_createBuyButtonWithTitle:(id)arg1 style:(long long)arg2 ;
-(id)_createBuyButtonConfiguration;
-(MPUSystemBuyButtonConfiguration *)buyTrackConfiguration;
-(MPUSystemBuyButtonConfiguration *)buyAlbumConfiguration;
-(void)_layoutSubviewsControlCenteriPad;
-(UIEdgeInsets)_controlsInsets;
-(BOOL)_needsFullWidthTransportControls;
-(double)_transportControlsFullWidthPaddingForBounds:(CGRect)arg1 ;
-(void)_layoutBuyButtons;
-(void)_layoutBuyButtonsControlCenteriPad;
-(id)_buyButtonForConfiguration:(id)arg1 ;
-(void)_setBuyButtonVisibility:(BOOL)arg1 forButton:(id)arg2 ;
-(void)_setProgressType:(unsigned long long)arg1 forBuyButton:(id)arg2 ;
-(void)_setDownloadProgress:(float)arg1 forBuyButton:(id)arg2 ;
-(void)_updateBuyButton:(id)arg1 withOffer:(id)arg2 ;
-(void)_setConfirmationState:(BOOL)arg1 forBuyButton:(id)arg2 ;
-(BOOL)_systemwideBuyButtonsEnabled;
-(void)_buyButtonShowConfirmationAction:(id)arg1 ;
-(void)_buyButtonCancelConfirmationAction:(id)arg1 ;
-(void)_buyButtonPurchaseAction:(id)arg1 ;
-(void)updatePlaybackState:(BOOL)arg1 ;
-(MPUChronologicalProgressView *)timeInformationView;
-(MPUMediaControlsTitlesView *)trackInformationView;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
@end

