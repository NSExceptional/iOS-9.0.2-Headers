/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:29 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface NTKCustomMonogramStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_customMonogramFromPrefs;
-(void)_notifyClientsOfChange;
-(id)customMonogram;
-(void)setCustomMonogram:(id)arg1 ;
-(void)_handlePrefsChanged;
@end

