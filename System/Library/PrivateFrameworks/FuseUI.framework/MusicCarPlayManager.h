/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCDCarDisplayServiceProvider.h>

@class MCDRootController, RadioRecentStationsController, NSString;

@interface MusicCarPlayManager : NSObject <MCDCarDisplayServiceProvider> {

	MCDRootController* _carDisplayController;
	RadioRecentStationsController* _recentStationsController;

}

@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_screenDidConnectNotification:(id)arg1 ;
-(void)_screenDidDisconnectNotification:(id)arg1 ;
-(void)_attachToStarkScreen:(id)arg1 ;
-(void)showNowPlaying:(BOOL)arg1 ;
-(void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3 ;
-(void)reloadPlayer:(id)arg1 geniusMixPlaylist:(id)arg2 options:(id)arg3 ;
-(void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)changeRepeatType:(unsigned long long)arg1 ;
-(void)changeShuffleType:(unsigned long long)arg1 ;
-(void)attachToAvailableScreen;
-(void)detachFromScreen;
@end

