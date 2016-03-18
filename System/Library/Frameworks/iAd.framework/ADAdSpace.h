/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/ADAdSpace_RPC.h>
#import <libobjc.A.dylib/ADAdSpaceRemoteViewControllerDelegate.h>

@protocol ADAdRecipient;
@class NSString, NSURL, NSSet, ADAdImpressionPublicAttributes, ADAdActionPublicAttributes, ADAdSpaceRemoteViewController, _UIAsyncInvocation, _ADRemoteViewController, NSDictionary, ADAdSpaceConfiguration;

@interface ADAdSpace : NSObject <UIViewControllerTransitioningDelegate, ADAdSpace_RPC, ADAdSpaceRemoteViewControllerDelegate> {

	id<ADAdRecipient> _recipient;
	BOOL _isModalInterstitial;
	BOOL _visibilityCheckScheduled;
	BOOL _serviceAdSpaceRequestInProgress;
	BOOL _shouldPresentActionViewControllerWhenReady;
	BOOL _actionViewControllerReadyForPresentation;
	BOOL _actionViewControllerWantsDismissal;
	NSString* _identifier;
	NSURL* _serverURL;
	NSString* _advertisingSection;
	NSString* _authenticationUserName;
	NSSet* _context;
	ADAdImpressionPublicAttributes* _currentAdImpressionPublicAttributes;
	ADAdActionPublicAttributes* _currentActionPublicAttributes;
	long long _visibility;
	double _lastSlowCheck;
	ADAdSpaceRemoteViewController* _creativeViewController;
	_UIAsyncInvocation* _remoteViewControllerRequestCancelationInvocation;
	_ADRemoteViewController* _remoteViewController;
	_ADRemoteViewController* _portraitOnlyViewController;
	NSDictionary* _adToLoad;

}

@property (nonatomic,readonly) id<ADAdRecipient> recipient; 
@property (nonatomic,readonly) id<ADSAdSpace_RPC><NSObject> serviceAdSpace; 
@property (nonatomic,copy) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * serverURL;                                                                    //@synthesize serverURL=_serverURL - In the implementation block
@property (nonatomic,copy) NSString * advertisingSection;                                                        //@synthesize advertisingSection=_advertisingSection - In the implementation block
@property (nonatomic,copy) NSString * authenticationUserName;                                                    //@synthesize authenticationUserName=_authenticationUserName - In the implementation block
@property (nonatomic,copy) NSSet * context;                                                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) ADAdImpressionPublicAttributes * currentAdImpressionPublicAttributes;               //@synthesize currentAdImpressionPublicAttributes=_currentAdImpressionPublicAttributes - In the implementation block
@property (nonatomic,retain) ADAdActionPublicAttributes * currentActionPublicAttributes;                         //@synthesize currentActionPublicAttributes=_currentActionPublicAttributes - In the implementation block
@property (assign,nonatomic) BOOL isModalInterstitial;                                                           //@synthesize isModalInterstitial=_isModalInterstitial - In the implementation block
@property (nonatomic,readonly) ADAdSpaceConfiguration * configuration; 
@property (assign,nonatomic) long long visibility;                                                               //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) BOOL visibilityCheckScheduled;                                                      //@synthesize visibilityCheckScheduled=_visibilityCheckScheduled - In the implementation block
@property (assign,nonatomic) double lastSlowCheck;                                                               //@synthesize lastSlowCheck=_lastSlowCheck - In the implementation block
@property (nonatomic,retain) ADAdSpaceRemoteViewController * creativeViewController;                             //@synthesize creativeViewController=_creativeViewController - In the implementation block
@property (assign,nonatomic) BOOL serviceAdSpaceRequestInProgress;                                               //@synthesize serviceAdSpaceRequestInProgress=_serviceAdSpaceRequestInProgress - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * remoteViewControllerRequestCancelationInvocation;              //@synthesize remoteViewControllerRequestCancelationInvocation=_remoteViewControllerRequestCancelationInvocation - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * remoteViewController;                                     //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) _ADRemoteViewController * portraitOnlyViewController;                               //@synthesize portraitOnlyViewController=_portraitOnlyViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentActionViewControllerWhenReady;                                    //@synthesize shouldPresentActionViewControllerWhenReady=_shouldPresentActionViewControllerWhenReady - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerReadyForPresentation;                                      //@synthesize actionViewControllerReadyForPresentation=_actionViewControllerReadyForPresentation - In the implementation block
@property (assign,nonatomic) BOOL actionViewControllerWantsDismissal;                                            //@synthesize actionViewControllerWantsDismissal=_actionViewControllerWantsDismissal - In the implementation block
@property (nonatomic,readonly) NSString * connectionAssertionIdentifier; 
@property (nonatomic,retain) NSDictionary * adToLoad;                                                            //@synthesize adToLoad=_adToLoad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_modalTansitionStyleForTransitionType:(int)arg1 ;
-(id<ADAdRecipient>)recipient;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(NSSet *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(_ADRemoteViewController *)remoteViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)close;
-(ADAdSpaceConfiguration *)configuration;
-(void)setContext:(NSSet *)arg1 ;
-(void)setRemoteViewController:(_ADRemoteViewController *)arg1 ;
-(id)initForRecipient:(id)arg1 ;
-(id<ADSAdSpace_RPC><NSObject>)serviceAdSpace;
-(ADAdImpressionPublicAttributes *)currentAdImpressionPublicAttributes;
-(void)updateVisibility;
-(ADAdActionPublicAttributes *)currentActionPublicAttributes;
-(void)executeBannerViewActionFrom:(CGRect)arg1 withTapLocation:(CGPoint)arg2 ;
-(void)refuseBannerViewAction;
-(void)determineActionForTapAtLocation:(CGPoint)arg1 inFrame:(CGRect)arg2 completeHandler:(/*^block*/id)arg3 ;
-(void)cancelBannerViewAction;
-(void)setServerURL:(NSURL *)arg1 ;
-(void)setAuthenticationUserName:(NSString *)arg1 ;
-(void)loadAd:(id)arg1 ;
-(NSString *)advertisingSection;
-(NSString *)authenticationUserName;
-(void)setIsModalInterstitial:(BOOL)arg1 ;
-(void)interstitialWasRemovedFromSuperview;
-(NSString *)connectionAssertionIdentifier;
-(void)_requestServiceAdSpace;
-(void)_clientApplicationDidBecomeActive;
-(void)_clientApplicationDidEnterBackground;
-(ADAdSpaceRemoteViewController *)creativeViewController;
-(BOOL)serviceAdSpaceRequestInProgress;
-(void)setServiceAdSpaceRequestInProgress:(BOOL)arg1 ;
-(void)setCreativeViewController:(ADAdSpaceRemoteViewController *)arg1 ;
-(void)_remote_close;
-(void)_closeConnectionIfNecessary;
-(void)_remote_dismissViewController;
-(void)_updateAllProperties;
-(NSDictionary *)adToLoad;
-(void)setAdToLoad:(NSDictionary *)arg1 ;
-(_UIAsyncInvocation *)remoteViewControllerRequestCancelationInvocation;
-(void)setCurrentAdImpressionPublicAttributes:(ADAdImpressionPublicAttributes *)arg1 ;
-(BOOL)visibilityCheckScheduled;
-(void)setVisibilityCheckScheduled:(BOOL)arg1 ;
-(double)lastSlowCheck;
-(void)setLastSlowCheck:(double)arg1 ;
-(void)setCurrentActionPublicAttributes:(ADAdActionPublicAttributes *)arg1 ;
-(void)setShouldPresentActionViewControllerWhenReady:(BOOL)arg1 ;
-(void)_considerPresentingActionViewController;
-(BOOL)shouldPresentActionViewControllerWhenReady;
-(BOOL)actionViewControllerReadyForPresentation;
-(void)setActionViewControllerWantsDismissal:(BOOL)arg1 ;
-(BOOL)actionViewControllerWantsDismissal;
-(void)setActionViewControllerReadyForPresentation:(BOOL)arg1 ;
-(void)setRemoteViewControllerRequestCancelationInvocation:(_UIAsyncInvocation *)arg1 ;
-(_ADRemoteViewController *)portraitOnlyViewController;
-(void)_remote_dismissPortraitOnlyViewController;
-(void)setPortraitOnlyViewController:(_ADRemoteViewController *)arg1 ;
-(void)_remote_creativeWillLoad;
-(void)_remote_adImpressionDidLoadWithPublicAttributes:(id)arg1 ;
-(void)_remote_creativeDidFailWithError:(id)arg1 ;
-(void)_remote_openURL:(id)arg1 ;
-(void)_remote_requestViewControllerWithClassName:(id)arg1 forAdSpaceControllerWithIdentifier:(id)arg2 ;
-(void)_remote_updateViewControllerSupportedOrientations:(unsigned long long)arg1 ;
-(void)_remote_actionViewControllerReadyForPresentation;
-(void)_remote_requestPortraitOnlyViewController;
-(void)_remote_pauseBannerMedia;
-(void)_remote_resumeBannerMedia;
-(void)adSpaceRemoteViewControllerDidTerminateWithError:(id)arg1 ;
-(void)setAdSpaceType:(int)arg1 ;
-(BOOL)isModalInterstitial;
-(void)setAdvertisingSection:(NSString *)arg1 ;
-(void)setVisibility:(long long)arg1 ;
-(long long)visibility;
-(NSURL *)serverURL;
@end

