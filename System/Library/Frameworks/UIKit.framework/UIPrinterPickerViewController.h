/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:41 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIPrinterBrowserOwner.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PKPrinter, UIViewController, UIPrinterPickerController, UINavigationController, UIPrinterBrowserViewController, UIPopoverController, UIWindow, NSString;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {

	UIViewController* _parentController;
	UIPrinterPickerController* _printerPickerController;
	UINavigationController* _navigationController;
	UIPrinterBrowserViewController* _printerBrowserViewController;
	UIViewController* _originalViewControllerInNav;
	id _originalNavControllerDelegate;
	UIPopoverController* _poverController;
	UIWindow* _window;
	BOOL _dismissed;
	BOOL _animated;
	BOOL _observingRotation;
	BOOL _parentHasNoPopover;
	BOOL _userSelectedPrinter;
	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;                   //@synthesize printer=_printer - In the implementation block
@property (assign) BOOL userSelectedPrinter;                        //@synthesize userSelectedPrinter=_userSelectedPrinter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)printerBrowserViewDidDisappear;
-(void)_presentWindow;
-(void)_keyWindowWillRotate:(id)arg1 ;
-(void)_presentInParentAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismissPrinterPickerAnimated:(BOOL)arg1 ;
-(BOOL)filtersPrinters;
-(void)cancelPrinting;
-(void)setUserSelectedPrinter:(BOOL)arg1 ;
-(BOOL)shouldShowPrinter:(id)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2 ;
-(void)presentPrinterPickerPanelAnimated:(BOOL)arg1 ;
-(void)presentPrinterPickerPanelFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(BOOL)userSelectedPrinter;
@end

