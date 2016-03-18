/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:45 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/WeeAppPlugins/AttributionWeeApp.bundle/AttributionWeeApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AttributionWeeApp/AttributionWeeApp-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIView, AWATextView, NSURL, NSString;

@interface AttributionWeeAppController : _SBUIWidgetViewController <UITextViewDelegate> {

	BOOL _stocksEnabled;
	BOOL _weatherEnabled;
	UIView* _weeAppView;
	AWATextView* _attributionTextView;
	NSURL* _twcURL;

}

@property (assign,nonatomic) BOOL stocksEnabled;                             //@synthesize stocksEnabled=_stocksEnabled - In the implementation block
@property (assign,nonatomic) BOOL weatherEnabled;                            //@synthesize weatherEnabled=_weatherEnabled - In the implementation block
@property (nonatomic,retain) UIView * weeAppView;                            //@synthesize weeAppView=_weeAppView - In the implementation block
@property (nonatomic,retain) AWATextView * attributionTextView;              //@synthesize attributionTextView=_attributionTextView - In the implementation block
@property (nonatomic,retain) NSURL * twcURL;                                 //@synthesize twcURL=_twcURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(BOOL)hasContent;
-(CGRect)textRect;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3 ;
-(long long)blendMode;
-(CGSize)preferredViewSize;
-(void)hostDidPresent;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(void)contrastChanged:(id)arg1 ;
-(void)updateVibrancy;
-(void)updateAttributationText;
-(BOOL)shouldEnhanceContrast;
-(BOOL)isLowGraphicsQuality;
-(BOOL)shouldUseVibrancy;
-(id)overlayWhiteColor;
-(id)_attributedAttributionString;
-(id)tintedImageFromMask:(id)arg1 ;
-(id)_weatherAttributionAttributionString;
-(id)_stocksAttributionAttributionString;
-(BOOL)stocksEnabled;
-(void)setStocksEnabled:(BOOL)arg1 ;
-(BOOL)weatherEnabled;
-(void)setWeatherEnabled:(BOOL)arg1 ;
-(UIView *)weeAppView;
-(void)setWeeAppView:(UIView *)arg1 ;
-(AWATextView *)attributionTextView;
-(void)setAttributionTextView:(AWATextView *)arg1 ;
-(NSURL *)twcURL;
-(void)setTwcURL:(NSURL *)arg1 ;
@end

