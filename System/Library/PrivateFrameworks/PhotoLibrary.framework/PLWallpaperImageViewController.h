/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIEditImageViewController.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>

@class PLWallpaperNavigationItem, NSArray, NSString, SBSUIWallpaperPreviewViewController;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <SBFLegibilitySettingsProviderDelegate> {

	PLWallpaperNavigationItem* _navItem;
	int _wallpaperMode;
	NSArray* _navigationToolbarItems;
	BOOL _saveWallpaperData;
	NSString* _wallpaperTitle;
	unsigned _didSetImageMode : 1;
	BOOL _isWallpaperEdit;
	BOOL __statusBarHidden;
	SBSUIWallpaperPreviewViewController* _wallpaperPreviewViewController;
	long long _previewVariant;
	long long _previewType;
	long long __statusBarStyle;

}

@property (nonatomic,retain) SBSUIWallpaperPreviewViewController * wallpaperPreviewViewController;              //@synthesize wallpaperPreviewViewController=_wallpaperPreviewViewController - In the implementation block
@property (assign,nonatomic) BOOL saveWallpaperData;                                                            //@synthesize saveWallpaperData=_saveWallpaperData - In the implementation block
@property (nonatomic,copy) NSString * wallpaperTitle;                                                           //@synthesize wallpaperTitle=_wallpaperTitle - In the implementation block
@property (assign,nonatomic) long long previewVariant;                                                          //@synthesize previewVariant=_previewVariant - In the implementation block
@property (assign,nonatomic) long long previewType;                                                             //@synthesize previewType=_previewType - In the implementation block
@property (assign,nonatomic) BOOL isWallpaperEdit;                                                              //@synthesize isWallpaperEdit=_isWallpaperEdit - In the implementation block
@property (assign,setter=_setStatusBarStyle:,nonatomic) long long _statusBarStyle;                              //@synthesize _statusBarStyle=__statusBarStyle - In the implementation block
@property (assign,setter=_setStatusBarHidden:,nonatomic) BOOL _statusBarHidden;                                 //@synthesize _statusBarHidden=__statusBarHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)setSaveWallpaperData:(BOOL)arg1 ;
-(void)_setStatusBarStyle:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(long long)preferredStatusBarStyle;
-(long long)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(long long)_statusBarStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_setStatusBarHidden:(BOOL)arg1 ;
-(void)_updateTitles;
-(id)initWithUIImage:(id)arg1 ;
-(BOOL)_statusBarHidden;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)setImageAsHomeScreenClicked:(id)arg1 ;
-(void)setImageAsLockScreenClicked:(id)arg1 ;
-(void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1 ;
-(void)motionToggledManually:(BOOL)arg1 ;
-(BOOL)uiipc_useTelephonyUI;
-(int)cropOverlayMode;
-(CGRect)_viewFrame;
-(unsigned long long)_contentAutoresizingMask;
-(void)setupNavigationItem;
-(unsigned long long)_tileAutoresizingMask;
-(BOOL)clientIsWallpaper;
-(BOOL)wantsStatusBarVisible;
-(long long)desiredStatusBarAnimation;
-(SBSUIWallpaperPreviewViewController *)wallpaperPreviewViewController;
-(void)prepareForBackground:(id)arg1 ;
-(void)prepareForForeground:(id)arg1 ;
-(void)setPreviewVariant:(long long)arg1 ;
-(void)setPreviewType:(long long)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(void)setWallpaperPreviewViewController:(SBSUIWallpaperPreviewViewController *)arg1 ;
-(void)_updatePreviewFrame:(id)arg1 ;
-(NSString *)wallpaperTitle;
-(void)_backgroundCropWallpaper;
-(void)_cropWallpaperFinished:(id)arg1 ;
-(BOOL)saveWallpaperData;
-(void)setWallpaperSynchronouslyFromArgs:(id)arg1 ;
-(void)_savePhoto;
-(void)_displayWallpaperOptionsSheet;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(void)setWallpaperFromArgs:(id)arg1 ;
-(void)_adjustScrollViewGeometry;
-(void)setupWallpaperPreview;
-(void)setWallpaperTitle:(NSString *)arg1 ;
-(long long)previewVariant;
-(long long)previewType;
-(BOOL)isWallpaperEdit;
-(void)setIsWallpaperEdit:(BOOL)arg1 ;
-(int)imageFormat;
@end

