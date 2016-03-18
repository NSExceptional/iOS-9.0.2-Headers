/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:15 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProvider.h>

@protocol SBFLegibilitySettingsProviderDelegate;
@class _UILegibilitySettings, NSTimer, UIImage, NSDictionary, NSString, AVURLAsset;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFLegibilitySettingsProviderDelegate, SBFLegibilitySettingsProvider> {

	NSTimer* _dateTimer;
	id<SBFLegibilitySettingsProviderDelegate> _delegate;
	UIImage* _wallpaperImage;
	NSDictionary* _proceduralWallpaper;
	NSDictionary* _proceduralWallpaperOptions;
	BOOL _allowScrolling;
	long long _variant;
	NSString* _name;
	BOOL _colorSamplingEnabled;
	AVURLAsset* _video;
	double _stillTimeInVideo;
	BOOL _motionEnabled;

}

@property (readonly) UIImage * wallpaperImage; 
@property (assign,nonatomic) BOOL motionEnabled;                                               //@synthesize motionEnabled=_motionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SBFLegibilitySettingsProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(id)initWithImage:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_previewView;
-(void)setWallpaperForLocations:(long long)arg1 ;
-(id)initWithWallpaperVariant:(long long)arg1 ;
-(BOOL)motionEnabled;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 ;
-(id)initWithImage:(id)arg1 name:(id)arg2 video:(id)arg3 time:(double)arg4 ;
-(id)initWithScrollableImage:(id)arg1 video:(id)arg2 time:(double)arg3 ;
-(id)initWithScrollableImage:(id)arg1 ;
-(UIImage *)wallpaperImage;
-(void)setColorSamplingEnabled:(BOOL)arg1 ;
-(BOOL)colorSamplingEnabled;
-(id)_wallpaperView;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 ;
-(void)_updateDateView;
-(void)_stopDateTimer;
-(double)_parallaxFactor;
-(void)setMotionEnabled:(BOOL)arg1 updateParallaxOnWallpaperView:(BOOL)arg2 ;
-(id)_dateView;
-(id)_proceduralWallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 image:(id)arg2 video:(id)arg3 stillTimeInVideo:(double)arg4 supportsCropping:(BOOL)arg5 variant:(long long)arg6 ;
-(id)_wallpaperViewWithFrame:(CGRect)arg1 variant:(long long)arg2 options:(id)arg3 ;
-(void)_startDateTimer;
@end

