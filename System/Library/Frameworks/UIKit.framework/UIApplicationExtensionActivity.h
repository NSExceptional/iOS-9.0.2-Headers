/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class NSExtension, NSExtensionItem, UIViewController, _UIActivityBundleHelper, NSString, UIImage;

@interface UIApplicationExtensionActivity : UIActivity {

	NSExtension* _applicationExtension;
	NSExtensionItem* __injectedExtensionItem;
	UIViewController* _extensionViewController;
	id _extensionContextIdentifier;
	UIViewController* _presenterViewController;
	/*^block*/id _presenterCompletion;
	_UIActivityBundleHelper* _activityBundleHelper;
	NSString* _localizedExtensionBundleName;
	UIImage* _renderedActivityImage;
	UIImage* _renderedActivitySettingsImage;
	/*^block*/id _extensionRequestCleanupCompletion;

}

@property (nonatomic,retain) NSExtension * applicationExtension;                          //@synthesize applicationExtension=_applicationExtension - In the implementation block
@property (nonatomic,retain) NSExtensionItem * _injectedExtensionItem;                    //@synthesize _injectedExtensionItem=__injectedExtensionItem - In the implementation block
@property (nonatomic,retain) UIViewController * extensionViewController;                  //@synthesize extensionViewController=_extensionViewController - In the implementation block
@property (nonatomic,copy) id extensionContextIdentifier;                                 //@synthesize extensionContextIdentifier=_extensionContextIdentifier - In the implementation block
@property (assign,nonatomic) UIViewController * presenterViewController;                  //@synthesize presenterViewController=_presenterViewController - In the implementation block
@property (nonatomic,copy) id presenterCompletion;                                        //@synthesize presenterCompletion=_presenterCompletion - In the implementation block
@property (nonatomic,retain) _UIActivityBundleHelper * activityBundleHelper;              //@synthesize activityBundleHelper=_activityBundleHelper - In the implementation block
@property (nonatomic,copy) NSString * localizedExtensionBundleName;                       //@synthesize localizedExtensionBundleName=_localizedExtensionBundleName - In the implementation block
@property (nonatomic,retain) UIImage * renderedActivityImage;                             //@synthesize renderedActivityImage=_renderedActivityImage - In the implementation block
@property (nonatomic,retain) UIImage * renderedActivitySettingsImage;                     //@synthesize renderedActivitySettingsImage=_renderedActivitySettingsImage - In the implementation block
@property (nonatomic,copy) id extensionRequestCleanupCompletion;                          //@synthesize extensionRequestCleanupCompletion=_extensionRequestCleanupCompletion - In the implementation block
+(id)_applicationExtensionActivitiesForItems:(id)arg1 ;
+(long long)activityCategory;
-(void)dealloc;
-(id)debugDescription;
-(id)activityType;
-(void)_cleanup;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(NSExtension *)applicationExtension;
-(void)setApplicationExtension:(NSExtension *)arg1 ;
-(void)set_injectedExtensionItem:(NSExtensionItem *)arg1 ;
-(NSString *)localizedExtensionBundleName;
-(_UIActivityBundleHelper *)activityBundleHelper;
-(void)setLocalizedExtensionBundleName:(NSString *)arg1 ;
-(UIImage *)renderedActivityImage;
-(void)setRenderedActivityImage:(UIImage *)arg1 ;
-(UIImage *)renderedActivitySettingsImage;
-(void)setRenderedActivitySettingsImage:(UIImage *)arg1 ;
-(NSExtensionItem *)_injectedExtensionItem;
-(BOOL)_isServiceExtension;
-(void)setExtensionRequestCleanupCompletion:(id)arg1 ;
-(void)setExtensionContextIdentifier:(id)arg1 ;
-(void)_instantiateExtensionViewControllerWithInputItems:(id)arg1 ;
-(void)setPresenterViewController:(UIViewController *)arg1 ;
-(void)setPresenterCompletion:(id)arg1 ;
-(void)_presentExtensionViewControllerIfPossible;
-(UIViewController *)extensionViewController;
-(id)extensionRequestCleanupCompletion;
-(void)setExtensionViewController:(UIViewController *)arg1 ;
-(UIViewController *)presenterViewController;
-(id)presenterCompletion;
-(id)initWithApplicationExtension:(id)arg1 ;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(BOOL)_canBeExcludedByActivityViewController:(id)arg1 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)extensionContextIdentifier;
-(void)setActivityBundleHelper:(_UIActivityBundleHelper *)arg1 ;
@end

