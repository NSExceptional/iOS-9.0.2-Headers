/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:07 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/AAUICDPRemoteSecretChallengeHandler.h>

@class NSArray, CDPRemoteDeviceSecretValidator, NSString;

@interface AAUICDPRemoteApprovalViewController : UITableViewController <AAUICDPRemoteSecretChallengeHandler> {

	NSArray* _devices;
	CDPRemoteDeviceSecretValidator* _validator;
	BOOL _shouldShowCancelButton;
	/*^block*/id _challengeResponseHandler;

}

@property (nonatomic,copy) id challengeResponseHandler;                //@synthesize challengeResponseHandler=_challengeResponseHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCancelButton;              //@synthesize shouldShowCancelButton=_shouldShowCancelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldShowCancelButton;
-(id)initWithDevices:(id)arg1 validator:(id)arg2 ;
-(id)challengeResponseHandler;
-(void)setChallengeResponseHandler:(id)arg1 ;
-(void)setShouldShowCancelButton:(BOOL)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
@end

