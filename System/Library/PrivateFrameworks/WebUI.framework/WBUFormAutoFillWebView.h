/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:36 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebKit/WKWebView.h>
#import <libobjc.A.dylib/WBUFormAutoFillWebView.h>
@class UIView, NSString;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:,nonatomic,copy) NSString * webui_lastGeneratedPasswordForCurrentBackForwardItem; 
@required
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(UIView *)webui_viewForAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;
-(NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
-(void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1;

@end


@class UIView, NSString, WBUFormAutoFillFrameHandle, NSDictionary;

@interface WBUFormAutoFillWebView : WKWebView <WBUFormAutoFillWebView> {

	WBUFormAutoFillFrameHandle* _lastPasswordGenerationOrSubmitEventFrame;
	NSDictionary* _lastPasswordGenerationOrSubmitEventForm;

}

@property (nonatomic,readonly) NSString * webui_EVOrganizationName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@property (setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:,nonatomic,copy) NSString * webui_lastGeneratedPasswordForCurrentBackForwardItem; 
-(void)_close;
-(NSString *)webui_EVOrganizationName;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
-(void)_applicationDidEnterBackgroundOrWillTerminate:(id)arg1 ;
-(SecTrustRef)_serverTrust;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1 ;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2 ;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1 ;
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2 ;
-(UIView *)webui_viewForAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;
-(NSString *)webui_lastGeneratedPasswordForCurrentBackForwardItem;
-(void)webui_setLastGeneratedPasswordForCurrentBackForwardItem:(id)arg1 ;
@end

