/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIForceInteractionController.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol UIViewControllerContextTransitioning;
@class UIAlertController, NSString;

@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver> {

	UIAlertController* _alertController;
	id<UIViewControllerContextTransitioning> _context;

}

@property (nonatomic,retain) UIAlertController * alertController;                           //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startInteractiveTransition:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)context;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(UIAlertController *)alertController;
@end

