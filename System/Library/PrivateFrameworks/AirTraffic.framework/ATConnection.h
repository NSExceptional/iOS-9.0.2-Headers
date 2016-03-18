/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:03 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol ATConnectionDelegate;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface ATConnection : NSObject <ATConnectionDelegate> {

	NSXPCConnection* _xpcConnection;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
	NSObject*<ATConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ATConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(NSObject*<ATConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<ATConnectionDelegate>)delegate;
-(void)_sendStatusRegistration;
-(void)_handleDisconnect;
-(void)requestSyncForLibrary:(id)arg1 ;
-(void)requestSyncForPairedDeviceWithPriority:(int)arg1 ;
-(void)cancelSync;
-(void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)registerForAssetProgressForDataclass:(id)arg1 ;
-(void)dataMigrationFinished;
-(void)lowBatteryNotification;
-(void)keepATCAlive:(BOOL)arg1 ;
-(BOOL)isSyncing:(BOOL*)arg1 automatically:(BOOL*)arg2 wirelessly:(BOOL*)arg3 ;
-(void)openDeviceMessageLink;
-(id)restoreDeviceWithIdentifier:(id)arg1 ;
-(id)getAssetMetrics;
-(void)connection:(id)arg1 updatedAssets:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(void)clearSyncData;
-(void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 ;
-(void)registerForStatus;
-(void)unregisterForStatus;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
@end

