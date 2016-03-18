/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:02 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIAppInstallerDelegate;
@class ACUIAppDescription, NSDate, NSURL;

@interface ACUIAppInstaller : NSObject {

	ACUIAppDescription* _app;
	NSDate* _dateOfLastReachabilityCheck;
	BOOL _cachedReachabilityResult;
	NSDate* _dateOfLastInstallationCheck;
	BOOL _resultOfLastInstallationCheck;
	BOOL _needsAvailableInStoreCheck;
	BOOL _availableInStoreResult;
	NSURL* _publisherURL;
	id<ACUIAppInstallerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isInstalled; 
@property (nonatomic,retain) NSURL * publisherURL;                                                    //@synthesize publisherURL=_publisherURL - In the implementation block
@property (nonatomic,readonly) BOOL isDownloadable; 
@property (nonatomic,readonly) BOOL requiresReachabilityCheckToDetermineDownloadability; 
@property (nonatomic,readonly) BOOL isAvailableInStore; 
@property (assign,nonatomic,__weak) id<ACUIAppInstallerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
+(id)currentStoreFront;
-(BOOL)isInstalled;
-(BOOL)isDownloadable;
-(void)setDelegate:(id<ACUIAppInstallerDelegate>)arg1 ;
-(id<ACUIAppInstallerDelegate>)delegate;
-(void)start;
-(BOOL)_quicklyGenerateCachedReachabilityResultConsideringPublisherURL:(BOOL)arg1 ;
-(void)_setCachedReachabilityResult:(BOOL)arg1 ;
-(BOOL)_isGreenTeaAvailable;
-(void)fetchDownloadability:(/*^block*/id)arg1 ;
-(void)_performReachabilityCheck:(/*^block*/id)arg1 ;
-(void)_setAvailableInStoreResult:(BOOL)arg1 ;
-(void)checkAvailabilityInStore:(/*^block*/id)arg1 ;
-(void)_performAvailabilityCheck:(/*^block*/id)arg1 ;
-(id)initForAppWithDescription:(id)arg1 ;
-(BOOL)requiresReachabilityCheckToDetermineDownloadability;
-(BOOL)isAvailableInStore;
-(NSURL *)publisherURL;
-(void)setPublisherURL:(NSURL *)arg1 ;
@end

