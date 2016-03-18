/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:06 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutputServer/SCROHandler.h>
#import <libobjc.A.dylib/SCROSBrailleDisplayManagerDelegate.h>

@class SCROBrailleDisplayManager, NSString;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate> {

	SCROBrailleDisplayManager* _brailleDisplayManager;
	BOOL _wantsInputCallbacks;
	BOOL _wantsDidDisplayCallbacks;
	SCD_Struct_SC11 _callbacks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)handleDisplayModeChanged:(id)arg1 ;
-(void)handleBrailleDidDisplay:(id)arg1 ;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1 ;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1 ;
-(void)configurationDidChange;
-(void)handleBrailleTableFailedToLoad:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)handleBrailleDriverDidLoad;
-(void)handleBrailleDriverDisconnected;
-(void)handleBrailleKeypress:(id)arg1 ;
-(void)handleBrailleKeyWillMemorize:(id)arg1 ;
-(void)handleBrailleKeyMemorize:(id)arg1 ;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 ;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 ;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2 ;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3 ;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4 ;
-(id)initWithBrailleDisplayManager:(id)arg1 ;
@end

