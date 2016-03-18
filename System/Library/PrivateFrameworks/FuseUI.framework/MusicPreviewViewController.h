/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>
#import <libobjc.A.dylib/MusicJSPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>
#import <libobjc.A.dylib/SKUIViewControllerPreviewing.h>

@class NSString, MusicClientContext, SKUIDocumentContainerViewController, SKUIClientContext;

@interface MusicPreviewViewController : UIViewController <MusicJSNativeViewControllerFactory, MusicJSPreviewViewControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUIViewControllerPreviewing> {

	NSString* _previewIdentifier;
	MusicClientContext* _clientContext;
	SKUIDocumentContainerViewController* _previewDocumentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(id)previewMenuItems;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(void)jsPreviewViewController:(id)arg1 setPreviewDocument:(id)arg2 options:(id)arg3 ;
-(id)initWithPreviewIdentifier:(id)arg1 clientContext:(id)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)previewCommitViewController;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(long long)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
@end

