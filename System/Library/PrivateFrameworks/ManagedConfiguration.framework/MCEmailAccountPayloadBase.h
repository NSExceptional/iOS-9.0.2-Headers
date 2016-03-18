/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:17 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSData, NSNumber;

@interface MCEmailAccountPayloadBase : MCPayload {

	BOOL _preventMove;
	BOOL _preventAppSheet;
	BOOL _SMIMEEnabled;
	BOOL _isRecentsSyncingDisabled;
	BOOL _isMailDropEnabled;
	BOOL _SMIMEPerMessageSwitchEnabled;
	NSString* _SMIMESigningIdentityUUID;
	NSString* _SMIMEEncryptionIdentityUUID;
	NSData* _SMIMESigningIdentityPersistentID;
	NSData* _SMIMEEncryptionIdentityPersistentID;
	NSNumber* _preventMoveNum;
	NSNumber* _preventAppSheetNum;
	NSNumber* _SMIMEEnabledNum;
	NSNumber* _isRecentsSyncingDisabledNum;
	NSNumber* _isMailDropEnabledNum;
	NSNumber* _SMIMEPerMessageSwitchEnabledNum;

}

@property (assign,nonatomic) BOOL preventMove;                                                                                    //@synthesize preventMove=_preventMove - In the implementation block
@property (assign,nonatomic) BOOL preventAppSheet;                                                                                //@synthesize preventAppSheet=_preventAppSheet - In the implementation block
@property (assign,setter=MIMEEnabled,nonatomic) BOOL SMIMEEnabled;                                                                //@synthesize SMIMEEnabled=_SMIMEEnabled - In the implementation block
@property (assign,nonatomic) BOOL isRecentsSyncingDisabled;                                                                       //@synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled - In the implementation block
@property (assign,nonatomic) BOOL isMailDropEnabled;                                                                              //@synthesize isMailDropEnabled=_isMailDropEnabled - In the implementation block
@property (setter=MIMESigningIdentityUUID,nonatomic,retain) NSString * SMIMESigningIdentityUUID;                                  //@synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID - In the implementation block
@property (setter=MIMEEncryptionIdentityUUID,nonatomic,retain) NSString * SMIMEEncryptionIdentityUUID;                            //@synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID - In the implementation block
@property (setter=MIMESigningIdentityPersistentID,nonatomic,retain) NSData * SMIMESigningIdentityPersistentID;                    //@synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID - In the implementation block
@property (setter=MIMEEncryptionIdentityPersistentID,nonatomic,retain) NSData * SMIMEEncryptionIdentityPersistentID;              //@synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID - In the implementation block
@property (assign,setter=MIMEPerMessageSwitchEnabled,nonatomic) BOOL SMIMEPerMessageSwitchEnabled;                                //@synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * preventMoveNum;                                                                           //@synthesize preventMoveNum=_preventMoveNum - In the implementation block
@property (nonatomic,retain) NSNumber * preventAppSheetNum;                                                                       //@synthesize preventAppSheetNum=_preventAppSheetNum - In the implementation block
@property (setter=MIMEEnabledNum,nonatomic,retain) NSNumber * SMIMEEnabledNum;                                                    //@synthesize SMIMEEnabledNum=_SMIMEEnabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isRecentsSyncingDisabledNum;                                                              //@synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum - In the implementation block
@property (nonatomic,retain) NSNumber * isMailDropEnabledNum;                                                                     //@synthesize isMailDropEnabledNum=_isMailDropEnabledNum - In the implementation block
@property (setter=MIMEPerMessageSwitchEnabledNum,nonatomic,retain) NSNumber * SMIMEPerMessageSwitchEnabledNum;                    //@synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(BOOL)preventMove;
-(void)setPreventMove:(BOOL)arg1 ;
-(BOOL)preventAppSheet;
-(void)setPreventAppSheet:(BOOL)arg1 ;
-(BOOL)SMIMEEnabled;
-(void)setSMIMEEnabled:(BOOL)arg1 ;
-(BOOL)isRecentsSyncingDisabled;
-(void)setIsRecentsSyncingDisabled:(BOOL)arg1 ;
-(BOOL)isMailDropEnabled;
-(void)setIsMailDropEnabled:(BOOL)arg1 ;
-(NSString *)SMIMESigningIdentityUUID;
-(void)setSMIMESigningIdentityUUID:(NSString *)arg1 ;
-(NSString *)SMIMEEncryptionIdentityUUID;
-(void)setSMIMEEncryptionIdentityUUID:(NSString *)arg1 ;
-(NSData *)SMIMESigningIdentityPersistentID;
-(void)setSMIMESigningIdentityPersistentID:(NSData *)arg1 ;
-(NSData *)SMIMEEncryptionIdentityPersistentID;
-(void)setSMIMEEncryptionIdentityPersistentID:(NSData *)arg1 ;
-(BOOL)SMIMEPerMessageSwitchEnabled;
-(void)setSMIMEPerMessageSwitchEnabled:(BOOL)arg1 ;
-(NSNumber *)preventMoveNum;
-(void)setPreventMoveNum:(NSNumber *)arg1 ;
-(NSNumber *)preventAppSheetNum;
-(void)setPreventAppSheetNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEEnabledNum;
-(void)setSMIMEEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isRecentsSyncingDisabledNum;
-(void)setIsRecentsSyncingDisabledNum:(NSNumber *)arg1 ;
-(NSNumber *)isMailDropEnabledNum;
-(void)setIsMailDropEnabledNum:(NSNumber *)arg1 ;
-(NSNumber *)SMIMEPerMessageSwitchEnabledNum;
-(void)setSMIMEPerMessageSwitchEnabledNum:(NSNumber *)arg1 ;
@end

