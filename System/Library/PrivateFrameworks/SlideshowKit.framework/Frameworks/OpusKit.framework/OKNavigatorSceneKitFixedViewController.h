/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class OKPageSceneViewController, OKPageViewController;

@interface OKNavigatorSceneKitFixedViewController : OKNavigatorSceneKitViewController {

	OKPageSceneViewController* _pageViewController;

}

@property (nonatomic,retain) OKPageViewController * pageViewController;              //@synthesize pageViewController=_pageViewController - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)setPageViewController:(OKPageViewController *)arg1 ;
-(OKPageViewController *)pageViewController;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updatePageViewController;
@end

