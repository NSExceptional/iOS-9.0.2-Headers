/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@interface UIApplicationRotationFollowingController : UIViewController {

	BOOL _sizesWindowToScene;

}

@property (assign,nonatomic) BOOL sizesWindowToScene;              //@synthesize sizesWindowToScene=_sizesWindowToScene - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)arg1 ;
-(void)window:(id)arg1 setupWithInterfaceOrientation:(long long)arg2 ;
-(BOOL)sizesWindowToScene;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setSizesWindowToScene:(BOOL)arg1 ;
@end

