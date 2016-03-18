/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:57 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIAlertView, MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {

	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	UIAlertView* _activeAlert;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveMemoryWarning;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UITextField *)passwordField;
-(void)_clearCachedTableCells;
-(void)_profileListChanged:(id)arg1 ;
-(void)_performReEnroll;
-(void)_showProgressIndicator;
-(void)_performReEnrollAfterPINVerification;
-(void)_hideProgressIndicatorWithSuccess:(BOOL)arg1 showButtons:(BOOL)arg2 ;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(void)_profileRemovalDidFinish;
-(void)_showRemovalWarningAlert;
-(void)_showWrongRemovalPasswordAlert;
-(void)setPasswordField:(UITextField *)arg1 ;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(void)_updateProfile;
-(void)_removeProfile;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showRemovalWarningActionSheet;
-(void)performRemoveAfterFinalVerification;
-(id)_mdmProfileRemovalAlertBody;
-(id)initWithProfile:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
@end

