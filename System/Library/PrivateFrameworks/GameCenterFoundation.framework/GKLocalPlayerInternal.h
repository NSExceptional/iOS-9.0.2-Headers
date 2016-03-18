/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:53 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
	unsigned long long _loginStatus;

}

@property (assign) unsigned long long loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)emailAddresses;
-(void)dealloc;
-(void)setEmailAddresses:(id)arg1 ;
-(unsigned long long)loginStatus;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfChallenges;
-(unsigned short)numberOfTurns;
-(int)defaultFamiliarity;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(BOOL)arg1 ;
-(void)setUnderage:(BOOL)arg1 ;
-(BOOL)isFindable;
-(void)setFindable:(BOOL)arg1 ;
-(BOOL)isPhotoPending;
-(void)setPhotoPending:(BOOL)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setLoginStatus:(unsigned long long)arg1 ;
-(BOOL)isFriend;
-(BOOL)isLocalPlayer;
-(BOOL)isPurpleBuddyAccount;
-(BOOL)isUnderage;
-(id)accountName;
-(void)setAccountName:(id)arg1 ;
@end

