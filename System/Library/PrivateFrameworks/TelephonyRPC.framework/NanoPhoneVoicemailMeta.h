/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:27 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/SYObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NanoPhoneVoicemailBody;

@interface NanoPhoneVoicemailMeta : PBCodable <SYObject, NSCopying> {

	double _date;
	long long _identifier;
	long long _remoteUID;
	long long _voicemailNumber;
	NSString* _callbackNumber;
	NSString* _dataPath;
	int _duration;
	int _flags;
	NSString* _sender;
	NanoPhoneVoicemailBody* _voicemailBody;
	SCD_Struct_Na1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long voicemailNumber;                           //@synthesize voicemailNumber=_voicemailNumber - In the implementation block
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) long long identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteUID; 
@property (assign,nonatomic) long long remoteUID;                                 //@synthesize remoteUID=_remoteUID - In the implementation block
@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) BOOL hasSender; 
@property (nonatomic,retain) NSString * sender;                                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) BOOL hasCallbackNumber; 
@property (nonatomic,retain) NSString * callbackNumber;                           //@synthesize callbackNumber=_callbackNumber - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) int duration;                                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasDataPath; 
@property (nonatomic,retain) NSString * dataPath;                                 //@synthesize dataPath=_dataPath - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) int flags;                                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasVoicemailBody; 
@property (nonatomic,retain) NanoPhoneVoicemailBody * voicemailBody;              //@synthesize voicemailBody=_voicemailBody - In the implementation block
+(id)voicemailWithSYContext:(id)arg1 ;
+(id)voicemailWithMessage:(id)arg1 ;
+(id)xpcObjectAsArray:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)syncId;
-(int)syncOperation;
-(id)initWithVoicemail:(id)arg1 ;
-(id)contextWithSyncOperation:(int)arg1 ;
-(id)asXpcObject;
-(void)attachToXpcObject:(id)arg1 ;
-(id)displayNameFromAddressBook:(void*)arg1 ;
-(id)displayLabelFromAddressBook:(void*)arg1 withUpdateBlock:(/*^block*/id)arg2 ;
-(void)loadVoicemailBodyIfNeeded;
-(id)callbackNumberOrSender;
-(id)voicemailDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)duration;
-(long long)identifier;
-(void)setDuration:(int)arg1 ;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(NSString *)sender;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSender:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(BOOL)hasDate;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCallbackNumber:(NSString *)arg1 ;
-(void)setDataPath:(NSString *)arg1 ;
-(void)setVoicemailBody:(NanoPhoneVoicemailBody *)arg1 ;
-(void)setRemoteUID:(long long)arg1 ;
-(void)setHasRemoteUID:(BOOL)arg1 ;
-(BOOL)hasRemoteUID;
-(BOOL)hasSender;
-(BOOL)hasCallbackNumber;
-(BOOL)hasDataPath;
-(BOOL)hasVoicemailBody;
-(long long)voicemailNumber;
-(void)setVoicemailNumber:(long long)arg1 ;
-(NanoPhoneVoicemailBody *)voicemailBody;
-(long long)remoteUID;
-(NSString *)callbackNumber;
-(NSString *)dataPath;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasFlags;
@end

