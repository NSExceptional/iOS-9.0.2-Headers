/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@protocol ADAdSpaceRemoteViewControllerDelegate;
@interface ADAdSpaceRemoteViewController : _UIRemoteViewController {

	id<ADAdSpaceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ADAdSpaceRemoteViewControllerDelegate> delegate; 
+(id)serviceViewControllerInterface;
+(void)adSpaceRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<ADAdSpaceRemoteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ADAdSpaceRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

