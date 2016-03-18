/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy
@required
-(void)clearCurrentAnnouncement;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)resetShownAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)simulateAnnouncement:(id)arg1;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)fetchProblemStatus;
-(void)checkin;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;

@end

