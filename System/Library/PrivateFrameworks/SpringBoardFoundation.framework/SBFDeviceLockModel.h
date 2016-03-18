/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFDeviceLockModel <NSObject>
@property (assign,nonatomic) id<SBFDeviceLockModelDelegate> delegate; 
@property (getter=isTemporarilyBlocked,nonatomic,readonly) BOOL temporarilyBlocked; 
@property (getter=isPermanentlyBlocked,nonatomic,readonly) BOOL permanentlyBlocked; 
@property (nonatomic,readonly) double timeUntilUnblockedSinceReferenceDate; 
@optional
-(void)clearBlockedState;
-(void)noteNewMkbDeviceLockStateInfo:(id)arg1 options:(id)arg2;

@required
-(void)setDelegate:(id)arg1;
-(id<SBFDeviceLockModelDelegate>)delegate;
-(void)synchronize;
-(BOOL)isPermanentlyBlocked;
-(double)timeUntilUnblockedSinceReferenceDate;
-(BOOL)isTemporarilyBlocked;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)performPasswordTest:(/*^block*/id)arg1;
-(void)notePasscodeUnlockSucceeded;
-(void)notePasscodeUnlockFailedWithError:(id)arg1;

@end

