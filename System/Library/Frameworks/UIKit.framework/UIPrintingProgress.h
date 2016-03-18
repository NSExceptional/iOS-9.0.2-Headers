/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:47 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertView* _alert;
	UIPrintingProgressViewController* _viewController;
	BOOL _donePrinting;
	BOOL _forceDisplayAsAlert;
	BOOL _creatingPDF;
	double _lastPageUpdate;
	double _progressAlertDelay;

}

@property (readonly) NSString * title; 
@property (assign) BOOL creatingPDF;                       //@synthesize creatingPDF=_creatingPDF - In the implementation block
@property (assign) double lastPageUpdate;                  //@synthesize lastPageUpdate=_lastPageUpdate - In the implementation block
@property (assign) double progressAlertDelay;              //@synthesize progressAlertDelay=_progressAlertDelay - In the implementation block
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 cancelHandler:(/*^block*/id)arg3 ;
-(void)setPrintInfoState:(int)arg1 ;
-(id)initPDFCreationWithCancelHandler:(/*^block*/id)arg1 ;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(double)nextPrintDelay;
-(void)endProgress;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)setProgressAlertDelay:(double)arg1 ;
-(BOOL)progressVisible;
-(void)progressCancel;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(double)lastPageUpdate;
-(void)setLastPageUpdate:(double)arg1 ;
-(double)progressAlertDelay;
-(BOOL)creatingPDF;
-(void)setCreatingPDF:(BOOL)arg1 ;
@end

