/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface MCUINavigationViewController : UINavigationController {

	/*^block*/id _showViewControllerCompletionBlock;

}

@property (nonatomic,copy) id showViewControllerCompletionBlock;              //@synthesize showViewControllerCompletionBlock=_showViewControllerCompletionBlock - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowViewControllerCompletionBlock:(id)arg1 ;
-(id)showViewControllerCompletionBlock;
@end
