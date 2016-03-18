/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSCompletionHandler, NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSCompletionHandler* _deleteCompletion;
	_IDSCompletionHandler* _localCompletion;
	_IDSCompletionHandler* _pairedCompletion;
	_IDSCompletionHandler* _deliveryStatsCompletion;
	NSSet* _allowedTrafficClassifiers;

}

@property (nonatomic,retain) NSSet * allowedTrafficClassifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
-(void)setPairedDeviceInfo:(id)arg1 ;
-(void)localDeviceInfo:(id)arg1 ;
-(void)pairedDeviceInfo:(id)arg1 ;
-(void)deliveryStats:(id)arg1 ;
-(void)device:(id)arg1 pairingDeleted:(BOOL)arg2 ;
-(void)device:(id)arg1 pairingAdded:(BOOL)arg2 ;
-(void)deletePairedDevice:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)getPairedDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)getDeliveryStatsWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setAllowedTrafficClassifiers:(NSSet *)arg1 ;
-(NSSet *)allowedTrafficClassifiers;
-(void)getLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

