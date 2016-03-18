/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:55 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/DAOofResponseDelegate.h>

@class UIView, PSSpecifier, DAOofSettingsInfo, DAOofParams;

@interface ASSettingsDataclassConfigurationViewController : DASettingsDataclassConfigurationViewController <DAOofResponseDelegate> {

	BOOL _outOfOfficeEnabled;
	UIView* _originalAccessoryView;
	PSSpecifier* _outOfOfficeSpecifier;
	DAOofSettingsInfo* _DASettingsInfo;
	DAOofParams* _serverOutOfOfficeInformation;
	unsigned long long _numberOfRetriedFetchingOutOfOfficeCounter;

}

@property (nonatomic,retain) UIView * originalAccessoryView;                                            //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeSpecifier;                                        //@synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier - In the implementation block
@property (nonatomic,retain) DAOofSettingsInfo * DASettingsInfo;                                        //@synthesize DASettingsInfo=_DASettingsInfo - In the implementation block
@property (nonatomic,retain) DAOofParams * serverOutOfOfficeInformation;                                //@synthesize serverOutOfOfficeInformation=_serverOutOfOfficeInformation - In the implementation block
@property (assign,nonatomic) BOOL outOfOfficeEnabled;                                                   //@synthesize outOfOfficeEnabled=_outOfOfficeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetriedFetchingOutOfOfficeCounter;              //@synthesize numberOfRetriedFetchingOutOfOfficeCounter=_numberOfRetriedFetchingOutOfOfficeCounter - In the implementation block
+(BOOL)isHotmailAccount;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountIntegerPropertyWithSpecifier:(id)arg1 ;
-(void)fetchingOutOfOfficeState;
-(void)saveOutOfOfficeData:(id)arg1 ;
-(id)outOfOfficeEnabled:(id)arg1 ;
-(void)setOutOfOfficeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)outOfOfficeSpecifier;
-(void)_purgeDownloadedMailForAccount;
-(DAOofParams *)serverOutOfOfficeInformation;
-(void)setOutOfOfficeEnabled:(BOOL)arg1 ;
-(unsigned long long)numberOfRetriedFetchingOutOfOfficeCounter;
-(void)setNumberOfRetriedFetchingOutOfOfficeCounter:(unsigned long long)arg1 ;
-(void)setServerOutOfOfficeInformation:(DAOofParams *)arg1 ;
-(void)updateOutOfOfficeSpecifier;
-(void)setDASettingsInfo:(DAOofSettingsInfo *)arg1 ;
-(DAOofSettingsInfo *)DASettingsInfo;
-(BOOL)outOfOfficeEnabled;
-(void)oofRequestInfo:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(id)accountDescriptionForFirstTimeSetup;
-(id)numFoldersToPushString:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(id)otherSpecifiers;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
@end

