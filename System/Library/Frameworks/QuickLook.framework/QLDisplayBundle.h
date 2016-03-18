/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:31 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol QLPreviewItemInteractionDelegate, QLPreviewItem;
@class NSString, NSTimer, UIView;

@interface QLDisplayBundle : UIViewController <UIScrollViewDelegate> {

	id<QLPreviewItemInteractionDelegate> _delegate;
	id<QLPreviewItem> _previewItem;
	BOOL _overlayHidden;
	int _previewMode;
	BOOL _loaded;
	BOOL _loading;
	BOOL _audioSessionActive;
	NSString* _password;
	NSTimer* _refreshTimer;
	double _navigationBarVerticalOffset;
	BOOL _inScroll;
	long long _index;
	unsigned long long _orbMode;
	SCD_Struct_QL6 clientContext;

}

@property (assign) SCD_Struct_QL7 clientContext; 
@property (assign) id<QLPreviewItemInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<QLPreviewItem> previewItem; 
@property (assign) int previewMode; 
@property (assign) long long index;                                            //@synthesize index=_index - In the implementation block
@property (assign) BOOL loaded;                                                //@synthesize loaded=_loaded - In the implementation block
@property (assign) BOOL loading;                                               //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) unsigned long long orbMode;                       //@synthesize orbMode=_orbMode - In the implementation block
@property (retain) NSString * password; 
@property (readonly) int airPlayMode; 
@property (readonly) UIView * accessoryView; 
@property (readonly) UIView * airplayView; 
@property (readonly) CGRect contentFrame; 
@property (assign,nonatomic) double navigationBarVerticalOffset;               //@synthesize navigationBarVerticalOffset=_navigationBarVerticalOffset - In the implementation block
@property (assign) BOOL inScroll;                                              //@synthesize inScroll=_inScroll - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCurrentAudioSessionDisplayBundle:(id)arg1 ;
+(BOOL)needsAVControls;
+(id)currentAudioSessionDisplayBundle;
+(double)allowedLoadingDelay;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)cancelLoad;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(void)enterBackground;
-(void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2 ;
-(void)togglePlayState;
-(void)loadWithHints:(id)arg1 ;
-(void)setOrbMode:(unsigned long long)arg1 ;
-(unsigned long long)orbMode;
-(void)setAudioSessionActive:(BOOL)arg1 ;
-(void)_performCancelLoad;
-(void)loadIfNeededWithHints:(id)arg1 ;
-(BOOL)isMainDisplayBundle;
-(BOOL)wantsCustomOrbPop;
-(void)updateContentOffsetAnimated:(BOOL)arg1 ;
-(void)didLoad;
-(void)_notifyDidLoadWithError:(id)arg1 ;
-(void)_notifyDidFailPresentingWithError:(id)arg1 ;
-(BOOL)inScroll;
-(UIView *)airplayView;
-(void)viewDidUpdate;
-(BOOL)needsContentInset;
-(BOOL)overlayIsHidden;
-(double)navigationBarVerticalOffset;
-(void)setAudioSessionActive:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)audioSessionDidInterrupt;
-(BOOL)canBeCached;
-(void)cancelLoadIfNeeded;
-(void)enterForeground;
-(void)setNavigationBarVerticalOffset:(double)arg1 ;
-(void)updateAfterCancelledDismissTransitionWithSize:(CGSize)arg1 ;
-(void)didFailLoadingWithError:(id)arg1 ;
-(void)didFailPresentingWithError:(id)arg1 ;
-(void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2 ;
-(BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(BOOL)adaptativeHeight;
-(BOOL)canCopyToPasteboard;
-(int)airPlayMode;
-(void)beginTrackingViewUpdates;
-(void)endTrackingViewUpdates;
-(void)setupAirPlayView;
-(void)discardAirPlayView;
-(id)pdfPreviewData;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(id)gestureRecognizersForFullScreenDisplay;
-(BOOL)canHideOverlay;
-(void)requireActiveAudioSession;
-(void)willStartSwiping:(BOOL)arg1 ;
-(void)didFinishSwiping;
-(void)setInScroll:(BOOL)arg1 ;
-(BOOL)loaded;
-(void)setDelegate:(id<QLPreviewItemInteractionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<QLPreviewItemInteractionDelegate>)delegate;
-(void)invalidate;
-(void)didReceiveMemoryWarning;
-(id)scrollView;
-(long long)modalPresentationStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)index;
-(UIView *)accessoryView;
-(id)printPageRenderer;
-(void)setIndex:(long long)arg1 ;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setLoading:(BOOL)arg1 ;
-(void)setClientContext:(SCD_Struct_QL7)arg1 ;
-(SCD_Struct_QL7)clientContext;
-(id)defaultBackgroundColor;
-(CGRect)contentFrame;
-(BOOL)loading;
@end

