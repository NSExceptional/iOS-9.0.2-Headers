/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:37 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <UIKit/UIPrintPageRenderer.h>
#import <UIKit/UIPrintInteractionControllerDelegate.h>

@class NSNumberFormatter, UIWebPaginationInfo, NSString, UIFont, UIColor, UIWebBrowserView, WebFrame, UIPrintFormatter;

@interface WBUPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {

	NSNumberFormatter* _numberFormatter;
	UIWebPaginationInfo* _paginationInfo;
	double _URLWidth;
	NSString* _dateString;
	double _dateWidth;
	double _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	BOOL _printFooter;
	UIWebBrowserView* _browserView;
	WebFrame* _webFrame;
	NSString* _URLString;
	UIPrintFormatter* _contentFormatter;

}

@property (nonatomic,retain) UIWebBrowserView * browserView;                   //@synthesize browserView=_browserView - In the implementation block
@property (nonatomic,retain) WebFrame * webFrame;                              //@synthesize webFrame=_webFrame - In the implementation block
@property (nonatomic,retain) NSString * URLString;                             //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) UIPrintFormatter * contentFormatter;              //@synthesize contentFormatter=_contentFormatter - In the implementation block
@property (assign,nonatomic) BOOL printFooter;                                 //@synthesize printFooter=_printFooter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(WebFrame *)webFrame;
-(UIWebBrowserView *)browserView;
-(long long)numberOfPages;
-(void)printInteractionControllerWillStartJob:(id)arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg1 ;
-(void)drawContentForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(NSString *)URLString;
-(void)setBrowserView:(UIWebBrowserView *)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(id)printingFrame;
-(void)setContentFormatter:(UIPrintFormatter *)arg1 ;
-(id)printInfoWithPageTitle:(id)arg1 ;
-(void)associateWithPrintController:(id)arg1 ;
-(id)printControllerWithPageTitle:(id)arg1 ;
-(UIPrintFormatter *)contentFormatter;
-(BOOL)printFooter;
-(void)setPrintFooter:(BOOL)arg1 ;
-(void)setWebFrame:(WebFrame *)arg1 ;
@end
