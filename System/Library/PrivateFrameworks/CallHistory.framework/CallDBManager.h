/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:13 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DBManager;

@interface CallDBManager : NSObject {

	BOOL _deviceUnlocked;
	unsigned char _dataStoreType;
	unsigned char _notifyDataStoreChangeReason;
	DBManager* _dbManager;

}

@property (retain) DBManager * dbManager;                                  //@synthesize dbManager=_dbManager - In the implementation block
@property (assign) BOOL deviceUnlocked;                                    //@synthesize deviceUnlocked=_deviceUnlocked - In the implementation block
@property (assign) unsigned char dataStoreType;                            //@synthesize dataStoreType=_dataStoreType - In the implementation block
@property (assign) unsigned char notifyDataStoreChangeReason;              //@synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason - In the implementation block
+(id)getDBLocationIsSandboxed:(BOOL)arg1 isTemporary:(BOOL)arg2 error:(unsigned char*)arg3 ;
+(id)dataStoreName;
+(id)modelURL;
-(id)init;
-(id)createManagedObjectContext;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(DBManager *)dbManager;
-(BOOL)notifyDataStoreChanged;
-(unsigned char)dataStoreType;
-(void)setNotifyDataStoreChangeReason:(unsigned char)arg1 ;
-(void)handlePermanentCreated;
-(void)moveCallsFromTempDatabase;
-(void)createDataStore;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)handleTemporaryCreated;
-(BOOL)shouldCreatePermanent;
-(void)createPermanent;
-(BOOL)shouldCreateTemporary;
-(void)createTemporary;
-(unsigned char)notifyDataStoreChangeReason;
-(void)setDataStoreType:(unsigned char)arg1 ;
-(void)reFetchState;
-(void)setDbManager:(DBManager *)arg1 ;
-(BOOL)deviceUnlocked;
-(void)setDeviceUnlocked:(BOOL)arg1 ;
-(void)registerForNotifications;
@end

