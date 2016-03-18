/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAXSpeechManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TTSSpeechRequest, NSMutableArray;

@interface AXSpeechAction : NSObject {

	NSString* _string;
	double _pitch;
	double _volume;
	double _speakingRate;
	NSString* _language;
	BOOL _shouldQueue;
	BOOL _cannotInterrupt;
	BOOL _shouldDetectLanguage;
	BOOL _shouldProcessEmoji;
	BOOL _shouldProcessEmoticons;
	BOOL _shouldPrecomposeString;
	/*^block*/id _completionCallback;
	/*^block*/id _onPauseCallback;
	/*^block*/id _onResumeCallback;
	/*^block*/id _onWillSpeakRangeCallback;
	/*^block*/id _onSpeechStartCallback;
	TTSSpeechRequest* _speechRequest;
	BOOL _useCompactVoice;
	unsigned _audioQueueFlags;
	NSString* _voiceIdentifier;
	NSString* _processedString;
	NSMutableArray* _emojiRangeReplacements;
	double _useMonarchStyleSpeechRate;
	long long _wordCallbackPostProcessedOffset;

}

@property (assign,nonatomic) BOOL shouldQueue;                                       //@synthesize shouldQueue=_shouldQueue - In the implementation block
@property (assign,nonatomic) BOOL cannotInterrupt;                                   //@synthesize cannotInterrupt=_cannotInterrupt - In the implementation block
@property (assign,nonatomic) BOOL shouldDetectLanguage;                              //@synthesize shouldDetectLanguage=_shouldDetectLanguage - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessEmoji;                                //@synthesize shouldProcessEmoji=_shouldProcessEmoji - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessEmoticons;                            //@synthesize shouldProcessEmoticons=_shouldProcessEmoticons - In the implementation block
@property (assign,nonatomic) BOOL shouldPrecomposeString;                            //@synthesize shouldPrecomposeString=_shouldPrecomposeString - In the implementation block
@property (nonatomic,copy) NSString * string;                                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) NSString * language;                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                             //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL useCompactVoice;                                   //@synthesize useCompactVoice=_useCompactVoice - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                               //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) id completionCallback;                                    //@synthesize completionCallback=_completionCallback - In the implementation block
@property (nonatomic,copy) id onPauseCallback;                                       //@synthesize onPauseCallback=_onPauseCallback - In the implementation block
@property (nonatomic,copy) id onResumeCallback;                                      //@synthesize onResumeCallback=_onResumeCallback - In the implementation block
@property (nonatomic,copy) id onWillSpeakRangeCallback;                              //@synthesize onWillSpeakRangeCallback=_onWillSpeakRangeCallback - In the implementation block
@property (nonatomic,copy) id onSpeechStartCallback;                                 //@synthesize onSpeechStartCallback=_onSpeechStartCallback - In the implementation block
@property (assign,nonatomic) double speakingRate;                                    //@synthesize speakingRate=_speakingRate - In the implementation block
@property (assign,nonatomic) double useMonarchStyleSpeechRate;                       //@synthesize useMonarchStyleSpeechRate=_useMonarchStyleSpeechRate - In the implementation block
@property (assign,nonatomic) double pitch;                                           //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) long long wordCallbackPostProcessedOffset;              //@synthesize wordCallbackPostProcessedOffset=_wordCallbackPostProcessedOffset - In the implementation block
@property (nonatomic,retain) TTSSpeechRequest * speechRequest;                       //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) NSString * processedString;                             //@synthesize processedString=_processedString - In the implementation block
@property (nonatomic,retain) NSMutableArray * emojiRangeReplacements;                //@synthesize emojiRangeReplacements=_emojiRangeReplacements - In the implementation block
+(id)actionWithString:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)setVolume:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setUseMonarchStyleSpeechRate:(double)arg1 ;
-(double)useMonarchStyleSpeechRate;
-(void)setUseCompactVoice:(BOOL)arg1 ;
-(BOOL)useCompactVoice;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(NSString *)voiceIdentifier;
-(TTSSpeechRequest *)speechRequest;
-(void)setSpeechRequest:(TTSSpeechRequest *)arg1 ;
-(BOOL)shouldQueue;
-(void)setShouldQueue:(BOOL)arg1 ;
-(double)pitch;
-(void)setPitch:(double)arg1 ;
-(double)volume;
-(id)completionCallback;
-(void)setCompletionCallback:(id)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(id)_detectLanguageFromContent;
-(void)setProcessedString:(NSString *)arg1 ;
-(NSString *)processedString;
-(void)preprocessAction;
-(NSMutableArray *)emojiRangeReplacements;
-(void)setEmojiRangeReplacements:(NSMutableArray *)arg1 ;
-(double)speakingRate;
-(void)setSpeakingRate:(double)arg1 ;
-(BOOL)cannotInterrupt;
-(void)setCannotInterrupt:(BOOL)arg1 ;
-(BOOL)shouldProcessEmoji;
-(void)setShouldProcessEmoji:(BOOL)arg1 ;
-(BOOL)shouldProcessEmoticons;
-(void)setShouldProcessEmoticons:(BOOL)arg1 ;
-(BOOL)shouldPrecomposeString;
-(void)setShouldPrecomposeString:(BOOL)arg1 ;
-(BOOL)shouldDetectLanguage;
-(void)setShouldDetectLanguage:(BOOL)arg1 ;
-(id)onPauseCallback;
-(void)setOnPauseCallback:(id)arg1 ;
-(id)onResumeCallback;
-(void)setOnResumeCallback:(id)arg1 ;
-(id)onWillSpeakRangeCallback;
-(void)setOnWillSpeakRangeCallback:(id)arg1 ;
-(id)onSpeechStartCallback;
-(void)setOnSpeechStartCallback:(id)arg1 ;
-(long long)wordCallbackPostProcessedOffset;
-(void)setWordCallbackPostProcessedOffset:(long long)arg1 ;
@end

