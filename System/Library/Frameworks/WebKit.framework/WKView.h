/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:54 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class WKViewData, UIColor, WKBrowsingContextController, UIScrollView, NSString;

@interface WKView : UIView <UIScrollViewDelegate> {

	WKViewData* _data;
	unsigned _unused;
	RetainPtr<WKScrollView>* _scrollView;
	RetainPtr<WKContentView>* _contentView;
	BOOL _isWaitingForNewLayerTreeAfterDidCommitLoad;
	unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> >* _gestureController;
	BOOL _allowsBackForwardNavigationGestures;
	BOOL _hasStaticMinimumLayoutSize;
	CGSize _minimumLayoutSizeOverride;
	UIEdgeInsets _obscuredInsets;
	BOOL _isChangingObscuredInsetsInteractively;
	double _lastAdjustmentForScroller;
	BOOL _drawsBackground;
	BOOL _drawsTransparentBackground;

}

@property (readonly) OpaqueWKPageRef pageRef; 
@property (assign,nonatomic) CGSize minimumLayoutSizeOverride; 
@property (assign,setter=_setObscuredInsets:,nonatomic) UIEdgeInsets _obscuredInsets; 
@property (assign,setter=_setBackgroundExtendsBeyondPage:,nonatomic) BOOL _backgroundExtendsBeyondPage; 
@property (readonly) UIColor * _pageExtendedBackgroundColor; 
@property (readonly) WKBrowsingContextController * browsingContextController; 
@property (assign) BOOL drawsBackground;                                                                             //@synthesize drawsBackground=_drawsBackground - In the implementation block
@property (assign) BOOL drawsTransparentBackground;                                                                  //@synthesize drawsTransparentBackground=_drawsTransparentBackground - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didRelaunchProcess;
-(OpaqueWKPageRef)pageRef;
-(UIEdgeInsets)_obscuredInsets;
-(id)initWithFrame:(CGRect)arg1 contextRef:(OpaqueWKContextRef)arg2 pageGroupRef:(OpaqueWKPageGroupRef)arg3 relatedToPage:(OpaqueWKPageRef)arg4 ;
-(id)initWithFrame:(CGRect)arg1 contextRef:(OpaqueWKContextRef)arg2 pageGroupRef:(OpaqueWKPageGroupRef)arg3 ;
-(CGSize)minimumLayoutSizeOverride;
-(void)setMinimumLayoutSizeOverride:(CGSize)arg1 ;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)_beginInteractiveObscuredInsetsChange;
-(void)_endInteractiveObscuredInsetsChange;
-(UIColor *)_pageExtendedBackgroundColor;
-(void)_setBackgroundExtendsBeyondPage:(BOOL)arg1 ;
-(BOOL)_backgroundExtendsBeyondPage;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)_frameOrBoundsChanged;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(BOOL)drawsBackground;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_updateVisibleContentRects;
-(WKBrowsingContextController *)browsingContextController;
-(id)initWithFrame:(CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 relatedToView:(id)arg4 ;
-(void)_commonInitializationWithContextRef:(OpaqueWKContextRef)arg1 pageGroupRef:(OpaqueWKPageGroupRef)arg2 relatedToPage:(OpaqueWKPageRef)arg3 ;
-(void)_didFinishScrolling;
-(void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(BOOL)allowsBackForwardNavigationGestures;
-(BOOL)drawsTransparentBackground;
-(void)setDrawsTransparentBackground:(BOOL)arg1 ;
@end

