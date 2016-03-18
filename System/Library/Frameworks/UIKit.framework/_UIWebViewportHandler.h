/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:42 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIWebViewportHandlerDelegate;
#import <UIKit/UIKit-Structs.h>
@interface _UIWebViewportHandler : NSObject {

	BOOL _initialConfigurationHasBeenSentToDelegate;
	UIWebViewportConfiguration _defaultConfiguration;
	UIWebViewportConfiguration _configuration;
	unsigned _webkitDefinedConfigurationFlags;
	CGSize _availableViewSize;
	CGSize _viewportArgumentsSize;
	BOOL _widthIsDeviceWidth;
	BOOL _heightIsDeviceHeight;
	BOOL _classicViewportMode;
	id<_UIWebViewportHandlerDelegate> _delegate;
	CGSize _contentsSizeForScaling;
	CGRect _documentBounds;

}

@property (assign,nonatomic) id<_UIWebViewportHandlerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect documentBounds;                                              //@synthesize documentBounds=_documentBounds - In the implementation block
@property (nonatomic,readonly) CGSize contentsSizeForScaling;                                      //@synthesize contentsSizeForScaling=_contentsSizeForScaling - In the implementation block
@property (nonatomic,readonly) CGSize availableViewSize;                                           //@synthesize availableViewSize=_availableViewSize - In the implementation block
@property (nonatomic,readonly) float initialScale; 
@property (nonatomic,readonly) float minimumScale; 
@property (nonatomic,readonly) float maximumScale; 
@property (nonatomic,readonly) BOOL allowsUserScaling; 
@property (nonatomic,readonly) unsigned webkitDefinedConfigurationFlags;                           //@synthesize webkitDefinedConfigurationFlags=_webkitDefinedConfigurationFlags - In the implementation block
@property (getter=isClassicViewportMode,nonatomic,readonly) BOOL classicViewportMode;              //@synthesize classicViewportMode=_classicViewportMode - In the implementation block
@property (nonatomic,readonly) UIWebViewportConfiguration rawViewConfiguration; 
-(void)setDelegate:(id<_UIWebViewportHandlerDelegate>)arg1 ;
-(id<_UIWebViewportHandlerDelegate>)delegate;
-(double)integralScaleForScale:(double)arg1 keepingPointFixed:(CGPoint*)arg2 ;
-(float)minimumScaleForViewSize:(CGSize)arg1 ;
-(float)initialScale;
-(float)maximumScale;
-(float)minimumScale;
-(BOOL)allowsUserScaling;
-(CGSize)availableViewSize;
-(void)clearWebKitViewportConfigurationFlags;
-(void)resetViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(UIWebViewportConfiguration)rawViewConfiguration;
-(unsigned)webkitDefinedConfigurationFlags;
-(void)update:(/*^block*/id)arg1 ;
-(void)setDocumentBounds:(CGRect)arg1 contentsSizeForScaling:(CGSize)arg2 ;
-(float)viewportWidth;
-(float)viewportHeight;
-(CGRect)documentBounds;
-(void)applyWebKitViewportArgumentsSize:(CGSize)arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5 allowsShrinkToFit:(float)arg6 ;
-(BOOL)isClassicViewportMode;
-(void)overrideViewportConfiguration:(const UIWebViewportConfiguration*)arg1 ;
-(void)setAvailableViewSize:(CGSize)arg1 updateConfigurationSize:(BOOL)arg2 ;
-(double)integralInitialScale;
-(BOOL)shouldIgnoreScalingConstraints;
-(BOOL)shouldIgnoreVerticalScalingConstraints;
-(BOOL)shouldIgnoreHorizontalScalingConstraints;
-(void)_resolveViewSizeRelativeLengths;
-(CGSize)contentsSizeForScaling;
@end

