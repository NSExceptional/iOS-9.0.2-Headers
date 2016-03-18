/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSFileHandle, NSDictionary;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {

	BOOL _isEyesFree;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _isInitialBringUp;
	BOOL _acousticIdEnabled;
	long long _activationEvent;
	NSString* _btDeviceAddress;
	NSString* _serverCommandId;
	double _homeButtonDownEventTime;
	double _activationEventTime;
	double _expectedActivationEventTime;
	NSNumber* _homeButtonUpFromBeep;
	long long _audioFileType;
	NSFileHandle* _audioFileHandle;
	NSDictionary* _voiceTriggerEventInfo;

}

@property (assign,nonatomic) long long activationEvent;                       //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,copy) NSString * btDeviceAddress;                        //@synthesize btDeviceAddress=_btDeviceAddress - In the implementation block
@property (assign,nonatomic) BOOL isEyesFree;                                 //@synthesize isEyesFree=_isEyesFree - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                        //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                    //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                      //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (assign,nonatomic) double homeButtonDownEventTime;                  //@synthesize homeButtonDownEventTime=_homeButtonDownEventTime - In the implementation block
@property (assign,nonatomic) double activationEventTime;                      //@synthesize activationEventTime=_activationEventTime - In the implementation block
@property (assign,nonatomic) double expectedActivationEventTime;              //@synthesize expectedActivationEventTime=_expectedActivationEventTime - In the implementation block
@property (assign,nonatomic) BOOL isInitialBringUp;                           //@synthesize isInitialBringUp=_isInitialBringUp - In the implementation block
@property (nonatomic,copy) NSNumber * homeButtonUpFromBeep;                   //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                          //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) long long audioFileType;                         //@synthesize audioFileType=_audioFileType - In the implementation block
@property (nonatomic,retain) NSFileHandle * audioFileHandle;                  //@synthesize audioFileHandle=_audioFileHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo;              //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithActivationEvent:(long long)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(long long)audioFileType;
-(double)expectedActivationEventTime;
-(double)activationEventTime;
-(long long)activationEvent;
-(NSString *)btDeviceAddress;
-(double)homeButtonDownEventTime;
-(void)setAudioFileType:(long long)arg1 ;
-(NSFileHandle *)audioFileHandle;
-(void)setAudioFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)isInitialBringUp;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setIsEyesFree:(BOOL)arg1 ;
-(NSString *)serverCommandId;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setActivationEventTime:(double)arg1 ;
-(void)setHomeButtonDownEventTime:(double)arg1 ;
-(void)setExpectedActivationEventTime:(double)arg1 ;
-(void)setIsInitialBringUp:(BOOL)arg1 ;
-(void)setBtDeviceAddress:(NSString *)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(BOOL)useStreamingDictation;
-(NSNumber *)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(BOOL)acousticIdEnabled;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(BOOL)isEyesFree;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
@end

