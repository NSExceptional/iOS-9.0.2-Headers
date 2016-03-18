/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface DDFallbackController : UIViewController {

	UIWindow* _baseWindow;
	UIWindow* _ourWindow;
	id _interactionDelegate;
	long long _startOrientation;

}
-(void)dealloc;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2 ;
@end

