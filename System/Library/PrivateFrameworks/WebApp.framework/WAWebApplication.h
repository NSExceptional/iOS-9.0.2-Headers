/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:34 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebApp.framework/WebApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WAWebViewControllerDelegate.h>

@class UIWindow, WAWebViewController, UIImageView, NSTimer, UIWebClip, NSString;

@interface WAWebApplication : NSObject <WAWebViewControllerDelegate> {

	UIWindow* _window;
	WAWebViewController* _webAppViewController;
	UIImageView* _snapshotView;
	NSTimer* _snapshotHideTimer;
	UIWebClip* _webClip;

}

@property (nonatomic,readonly) UIWebClip * webClip;                 //@synthesize webClip=_webClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_genericMessageForError:(id)arg1 ;
-(id)_titleForError:(id)arg1 ;
-(void)resume;
-(void)_updateStatusBar;
-(void)webApplicationContentDidBeginLoading:(id)arg1 ;
-(void)webApplicationContentDidFinishLoading:(id)arg1 ;
-(void)webApplicationContentFailedToLoad:(id)arg1 withError:(id)arg2 ;
-(void)webApplicationPaintedSignificantContent:(id)arg1 ;
-(UIWebClip *)webClip;
-(id)initForWebClipURL:(id)arg1 ;
-(void)_showLaunchImage;
-(void)_hideLaunchImage;
-(void)_updateWebClip;
-(id)_specializedMessageForError:(id)arg1 ;
@end

