/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:11 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class NSArray, NSString, IMHandle, IMAVChat, NSDictionary, NSTimer, NSMutableArray, NSData;

@interface IMAVChatParticipant : NSObject {

	BOOL _sendingAudio;
	BOOL _sendingVideo;
	BOOL _audioMuted;
	BOOL _videoPaused;
	BOOL _videoDegraded;
	BOOL _mediaStalled;
	BOOL _isInitiator;
	BOOL _inviteDelivered;
	BOOL _hasReinitiateCapability;
	unsigned _state;
	unsigned _cameraType;
	unsigned _cameraOrientation;
	unsigned _chatEndedReason;
	int _chatError;
	unsigned _screenOrientation;
	NSArray* _additionalPeers;
	NSString* _vcPartyID;
	IMHandle* _imHandle;
	IMHandle* _inviter;
	IMAVChat* _avChat;
	NSDictionary* _properties;
	NSString* _conferenceID;
	NSTimer* _connectTimeoutTimer;
	NSMutableArray* _participantsCallInfo;
	NSData* _inFrequencyLevel;
	NSData* _outFrequencyLevel;
	CGSize _remotePortraitOrientation;
	CGSize _remoteLandscapeOrientation;
	CGSize _remotePIPPortraitOrientation;
	CGSize _remotePIPLandscapeOrientation;
	CGRect _remotePortraitContentRect;
	CGRect _remoteLandscapeContentRect;

}

@property (assign,setter=setAudioMuted:,nonatomic) BOOL isAudioMuted; 
@property (assign,setter=setVideoPaused:,nonatomic) BOOL isVideoPaused; 
@property (nonatomic,readonly) BOOL isSendingAudio; 
@property (nonatomic,readonly) BOOL isSendingVideo; 
@property (nonatomic,readonly) BOOL isVideoDegraded; 
@property (nonatomic,readonly) BOOL isMediaStalled; 
@property (assign,nonatomic) void* videoLayer; 
@property (assign,nonatomic) void* videoBackLayer; 
@property (nonatomic,retain,readonly) IMHandle * imHandle;                                                                 //@synthesize imHandle=_imHandle - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * invitedBy;                                                                //@synthesize inviter=_inviter - In the implementation block
@property (assign,nonatomic) IMAVChat * avChat;                                                                            //@synthesize avChat=_avChat - In the implementation block
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isInitiator;                                                                           //@synthesize isInitiator=_isInitiator - In the implementation block
@property (nonatomic,readonly) BOOL isLocalParticipant; 
@property (nonatomic,retain) NSArray * additionalPeers;                                                                    //@synthesize additionalPeers=_additionalPeers - In the implementation block
@property (nonatomic,readonly) unsigned reasonChatEnded;                                                                   //@synthesize chatEndedReason=_chatEndedReason - In the implementation block
@property (assign,nonatomic) int error;                                                                                    //@synthesize chatError=_chatError - In the implementation block
@property (assign,nonatomic) unsigned state;                                                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * inFrequencyLevel;                                                                    //@synthesize inFrequencyLevel=_inFrequencyLevel - In the implementation block
@property (nonatomic,retain) NSData * outFrequencyLevel;                                                                   //@synthesize outFrequencyLevel=_outFrequencyLevel - In the implementation block
@property (setter=setVideoDegraded:) BOOL isVideoDegraded;                                                                 //@synthesize videoDegraded=_videoDegraded - In the implementation block
@property (setter=setMediaStalled:) BOOL isMediaStalled;                                                                   //@synthesize mediaStalled=_mediaStalled - In the implementation block
@property (setter=setVCPartyID:,retain) NSString * vcPartyID;                                                              //@synthesize vcPartyID=_vcPartyID - In the implementation block
@property (nonatomic,readonly) long long _activeCallID; 
@property (nonatomic,retain) NSMutableArray * _participantsCallInfo;                                                       //@synthesize participantsCallInfo=_participantsCallInfo - In the implementation block
@property (setter=_setInviteDelivered:) BOOL _inviteDelivered;                                                             //@synthesize inviteDelivered=_inviteDelivered - In the implementation block
@property (setter=_setConnectTimeoutTimer:,retain) NSTimer * _connectTimeoutTimer;                                         //@synthesize connectTimeoutTimer=_connectTimeoutTimer - In the implementation block
@property (setter=_setConferenceID:,nonatomic,retain) NSString * _conferenceID;                                            //@synthesize conferenceID=_conferenceID - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                                                                    //@synthesize properties=_properties - In the implementation block
@property (assign,setter=_setRemoteLandscapeOrientation:,nonatomic) CGSize _remoteLandscapeOrientation;                    //@synthesize remoteLandscapeOrientation=_remoteLandscapeOrientation - In the implementation block
@property (assign,setter=_setRemotePortraitOrientation:,nonatomic) CGSize _remotePortraitOrientation;                      //@synthesize remotePortraitOrientation=_remotePortraitOrientation - In the implementation block
@property (assign,setter=_setRemotePIPLandscapeOrientation:,nonatomic) CGSize _remotePIPLandscapeOrientation;              //@synthesize remotePIPLandscapeOrientation=_remotePIPLandscapeOrientation - In the implementation block
@property (assign,setter=_setRemotePIPPortraitOrientation:,nonatomic) CGSize _remotePIPPortraitOrientation;                //@synthesize remotePIPPortraitOrientation=_remotePIPPortraitOrientation - In the implementation block
@property (assign,setter=_setRemotePortraitContentRect:,nonatomic) CGRect _remotePortraitContentRect;                      //@synthesize remotePortraitContentRect=_remotePortraitContentRect - In the implementation block
@property (assign,setter=_setRemoteLandscapeContentRect:,nonatomic) CGRect _remoteLandscapeContentRect;                    //@synthesize remoteLandscapeContentRect=_remoteLandscapeContentRect - In the implementation block
@property (assign,nonatomic) BOOL hasReinitiateCapability;                                                                 //@synthesize hasReinitiateCapability=_hasReinitiateCapability - In the implementation block
@property (nonatomic,readonly) BOOL hasUnfinishedSessions; 
@property (nonatomic,readonly) BOOL hasConnectingSessions; 
@property (setter=_setCameraType:) unsigned cameraType;                                                                    //@synthesize cameraType=_cameraType - In the implementation block
@property (setter=_setCameraOrientation:) unsigned cameraOrientation;                                                      //@synthesize cameraOrientation=_cameraOrientation - In the implementation block
@property (assign,setter=_setScreenOrientation:,nonatomic) unsigned _screenOrientation;                                    //@synthesize screenOrientation=_screenOrientation - In the implementation block
@property (assign,setter=setAudioMuted:,nonatomic) BOOL isAudioMuted;                                                      //@synthesize audioMuted=_audioMuted - In the implementation block
@property (assign,setter=setVideoPaused:,nonatomic) BOOL isVideoPaused;                                                    //@synthesize videoPaused=_videoPaused - In the implementation block
@property (nonatomic,readonly) BOOL isSendingAudio;                                                                        //@synthesize sendingAudio=_sendingAudio - In the implementation block
@property (nonatomic,readonly) BOOL isSendingVideo;                                                                        //@synthesize sendingVideo=_sendingVideo - In the implementation block
-(id)_proxyRepresentation;
-(void*)videoLayer;
-(void)setVideoLayer:(void*)arg1 ;
-(void*)videoBackLayer;
-(void)setVideoBackLayer:(void*)arg1 ;
-(void)sendResponse:(unsigned)arg1 ;
-(void)_sendResponse:(unsigned)arg1 callInfo:(id)arg2 ;
-(void)cancelInvitation;
-(void)sendInvitation;
-(void)_reInitiateWithCallInfo:(id)arg1 ;
-(void)_connectTimeout:(id)arg1 ;
-(void)setWaitingToConnect:(BOOL)arg1 ;
-(void)resetWaitingToConnectTimer;
-(int)error;
-(void)dealloc;
-(id)init;
-(id)description;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(NSString *)name;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(unsigned)cameraOrientation;
-(IMHandle *)invitedBy;
-(BOOL)hasConnectingSessions;
-(id)_processIncomingCallProperties:(id)arg1 ;
-(void)_setConferenceID:(id)arg1 ;
-(BOOL)_processResponseDictionary:(id)arg1 allowSecondConnection:(BOOL)arg2 ;
-(void)_updateProperties:(id)arg1 ;
-(void)_noteInviteDelivered:(BOOL)arg1 ;
-(IMHandle *)imHandle;
-(void)disconnectFromAVChat;
-(void)setStateToEndedWithReason:(unsigned)arg1 andError:(int)arg2 ;
-(NSMutableArray *)_participantsCallInfo;
-(NSArray *)additionalPeers;
-(void)setAdditionalPeers:(NSArray *)arg1 ;
-(id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4 ;
-(void)_switchToUseNewIMHandle:(id)arg1 ;
-(void)sendAVMessage:(unsigned)arg1 userInfo:(id)arg2 ;
-(BOOL)matchesAVConferenceCallID:(long long)arg1 ;
-(unsigned)reasonChatEnded;
-(long long)bestCallID;
-(id)_natType;
-(NSString *)_conferenceID;
-(void)setAVChat:(id)arg1 ;
-(void)_setScreenOrientation:(unsigned)arg1 ;
-(void)_setCameraType:(unsigned)arg1 ;
-(void)_setCameraOrientation:(unsigned)arg1 ;
-(void)setVCPartyID:(id)arg1 ;
-(id)_callInfoForCallID:(long long)arg1 ;
-(id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(unsigned)arg7 withError:(int)arg8 andReason:(unsigned)arg9 andVCPartyID:(id)arg10 account:(id)arg11 ;
-(NSString *)vcPartyID;
-(void)_registerCallInfo:(id)arg1 ;
-(void)setHasReinitiateCapability:(BOOL)arg1 ;
-(id)_callInfosWaitingForResponse;
-(void)_handleIMAVResponse:(unsigned)arg1 ;
-(id)_callInfoWithState:(long long)arg1 ;
-(BOOL)_inviteDelivered;
-(void)_setInviteDelivered:(BOOL)arg1 ;
-(BOOL)hasReinitiateCapability;
-(id)_callInfoForReinitiate;
-(void)_hangupCallLaterIfReinitiateFailsForCallInfo:(id)arg1 ;
-(void)_setState:(unsigned)arg1 withReason:(unsigned)arg2 andError:(int)arg3 ;
-(void)_processPropertyUpdate:(id)arg1 ;
-(id)callInfoBeingHandedOff;
-(BOOL)hasUnfinishedSessions;
-(long long)_activeCallID;
-(void)requestIconIfNecessary;
-(id)_callInfosWaitingForAcceptAction;
-(BOOL)_generateCallInfo:(id)arg1 ;
-(void)_cleanupOrphanedCallInfos;
-(void)reinitializeCallForCallID:(unsigned)arg1 ;
-(void)setInFrequencyLevel:(NSData *)arg1 ;
-(void)setOutFrequencyLevel:(NSData *)arg1 ;
-(BOOL)isAudioMuted;
-(void)setVideoPaused:(BOOL)arg1 ;
-(void)setVideoDegraded:(BOOL)arg1 ;
-(void)setMediaStalled:(BOOL)arg1 ;
-(void)_setChatError:(int)arg1 ;
-(CGSize)_remotePortraitOrientation;
-(void)_setRemotePortraitOrientation:(CGSize)arg1 ;
-(CGSize)_remoteLandscapeOrientation;
-(void)_setRemoteLandscapeOrientation:(CGSize)arg1 ;
-(NSTimer *)_connectTimeoutTimer;
-(void)_setConnectTimeoutTimer:(id)arg1 ;
-(CGSize)_remotePIPPortraitOrientation;
-(void)_setRemotePIPPortraitOrientation:(CGSize)arg1 ;
-(CGSize)_remotePIPLandscapeOrientation;
-(void)_setRemotePIPLandscapeOrientation:(CGSize)arg1 ;
-(CGRect)_remotePortraitContentRect;
-(void)_setRemotePortraitContentRect:(CGRect)arg1 ;
-(CGRect)_remoteLandscapeContentRect;
-(void)_setRemoteLandscapeContentRect:(CGRect)arg1 ;
-(unsigned)_screenOrientation;
-(void)set_participantsCallInfo:(NSMutableArray *)arg1 ;
-(NSData *)inFrequencyLevel;
-(NSData *)outFrequencyLevel;
-(unsigned)cameraType;
-(void)setAudioMuted:(BOOL)arg1 ;
-(BOOL)isLocalParticipant;
-(IMAVChat *)avChat;
-(BOOL)isSendingAudio;
-(BOOL)isSendingVideo;
-(BOOL)isMediaStalled;
-(BOOL)isVideoDegraded;
-(BOOL)isVideoPaused;
-(CGSize)aspectRatioForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(CGSize)localAspectRatioForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(CGRect)contentRectForCameraOrientation:(unsigned)arg1 cameraType:(unsigned)arg2 ;
-(BOOL)isInitiator;
@end

