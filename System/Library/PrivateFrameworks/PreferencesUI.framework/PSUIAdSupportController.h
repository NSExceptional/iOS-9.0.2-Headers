/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <PreferencesUI/PSUIAdvertisingController.h>

@class UITableViewCell, UIView;

@interface PSUIAdSupportController : PSUIAdvertisingController {

	BOOL _hasRefreshedStatus;
	BOOL _limitAdTrackingURLIsReachable;
	id _restrictionsChangedObserver;
	id _effectiveSettingsChangedObserver;
	UITableViewCell* _limitAdTrackingCell;
	UIView* _originalAccessoryView;
	SCNetworkReachabilityRef _reachability;

}

@property (nonatomic,retain) id restrictionsChangedObserver;                     //@synthesize restrictionsChangedObserver=_restrictionsChangedObserver - In the implementation block
@property (nonatomic,retain) id effectiveSettingsChangedObserver;                //@synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver - In the implementation block
@property (nonatomic,retain) UITableViewCell * limitAdTrackingCell;              //@synthesize limitAdTrackingCell=_limitAdTrackingCell - In the implementation block
@property (nonatomic,retain) UIView * originalAccessoryView;                     //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL hasRefreshedStatus;                            //@synthesize hasRefreshedStatus=_hasRefreshedStatus - In the implementation block
@property (assign,nonatomic) BOOL limitAdTrackingURLIsReachable;                 //@synthesize limitAdTrackingURLIsReachable=_limitAdTrackingURLIsReachable - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;              //@synthesize reachability=_reachability - In the implementation block
-(id)specifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
-(BOOL)canChangeLimitAdTracking;
-(BOOL)limitAdTrackingURLIsReachable;
-(void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)limitAdTrackingEnabled:(id)arg1 ;
-(void)resetAdID;
-(void)setRestrictionsChangedObserver:(id)arg1 ;
-(void)setEffectiveSettingsChangedObserver:(id)arg1 ;
-(id)effectiveSettingsChangedObserver;
-(id)restrictionsChangedObserver;
-(void)setHasRefreshedStatus:(BOOL)arg1 ;
-(BOOL)hasRefreshedStatus;
-(UIView *)originalAccessoryView;
-(void)setLimitAdTrackingCell:(UITableViewCell *)arg1 ;
-(UITableViewCell *)limitAdTrackingCell;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
-(void)userDidTapDoneButton:(id)arg1 ;
-(void)setLimitAdTrackingURLIsReachable:(BOOL)arg1 ;
-(void)userDidTapLearnMoreLink:(id)arg1 ;
@end
