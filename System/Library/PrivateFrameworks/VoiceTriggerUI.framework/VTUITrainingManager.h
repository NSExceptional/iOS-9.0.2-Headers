/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:33 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAudioAnalyzerDelegate.h>
#import <libobjc.A.dylib/AVVoiceControllerRecordDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>

@protocol VTUITrainingManagerDelegate;
@class NSLock, NSString, AVVoiceController, AFAudioAnalyzer, VTPhraseSpotter, SFSpeechRecognizer, SFSpeechAudioBufferRecognitionRequest, SFSpeechRecognitionTask, NSMutableArray, NSTimer, NSMutableDictionary;

@interface VTUITrainingManager : NSObject <AFAudioAnalyzerDelegate, AVVoiceControllerRecordDelegate, SFSpeechRecognitionTaskDelegate> {

	BOOL _dead;
	BOOL _performRMS;
	NSLock* _lock;
	BOOL _ASRAvailable;
	BOOL _sessionStateInSession;
	BOOL _sessionClosing;
	long long _sessionNumber;
	BOOL _sessionStateVTActive;
	BOOL _sessionStateVTDetected;
	BOOL _sessionStatePCMBufAdjusted;
	BOOL _sessionStateDelayedEndASR;
	BOOL _sessionStateBOS;
	BOOL _sessionStateBOSDetected;
	BOOL _sessionStateEOS;
	BOOL _sessionStateEOSDetected;
	BOOL _sessionStateUseASR;
	BOOL _sessionStateASRError;
	long long _sessionStateRecogScore;
	BOOL _sessionStateResultFinal;
	BOOL _sessionStateTm1Expired;
	BOOL _sessionStateTv1Expired;
	BOOL _sessionStateTb1Expired;
	BOOL _sessionStateTe1Expired;
	long long _sessionStateNumUtt;
	NSString* _locale;
	AVVoiceController* _voiceController;
	BOOL _voiceControllerRecording;
	BOOL _voiceControllerStopping;
	BOOL _voiceControllerToBeStarted;
	BOOL _voiceControllerToBeDestroyed;
	AFAudioAnalyzer* _audioAnalyzer;
	float _rmsfBuf[1024];
	VTPhraseSpotter* _phraseSpotter;
	SFSpeechRecognizer* _speechRecognizer;
	SFSpeechAudioBufferRecognitionRequest* _currentASRRequest;
	SFSpeechRecognitionTask* _currentASRTask;
	NSMutableArray* _recognitionWorkingTasks;
	NSString* _recognizedText;
	NSTimer* _timerTm1;
	NSTimer* _timerTv1;
	NSTimer* _timerTb1;
	NSTimer* _timerTe1;
	NSMutableDictionary* _eventInfo;
	NSMutableArray* _pcmBufArray;
	BOOL _isFinal;
	long long _numRequiredTrailingSamples;
	long long _numTrailingSamples;
	/*^block*/id _trainingCompletion;
	/*^block*/id _cleanupCompletion;
	BOOL _tv1Suspended;
	BOOL _tb1Suspended;
	BOOL _te1Suspended;
	BOOL _suspendAudio;
	VTUITrainingManager* _keepAliveRef;
	BOOL _speechRecognizerAvailable;
	float _rms;
	id<VTUITrainingManagerDelegate> _delegate;
	NSString* _audioInput;

}

@property (assign) float rms;                                                              //@synthesize rms=_rms - In the implementation block
@property (assign,nonatomic,__weak) id<VTUITrainingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL speechRecognizerAvailable;                                       //@synthesize speechRecognizerAvailable=_speechRecognizerAvailable - In the implementation block
@property (nonatomic,retain) NSString * audioInput;                                        //@synthesize audioInput=_audioInput - In the implementation block
@property (assign) BOOL suspendAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VTUITrainingManagerDelegate>)arg1 ;
-(id)init;
-(id<VTUITrainingManagerDelegate>)delegate;
-(void)reset;
-(void)endSession;
-(void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 ;
-(void)setAudioInput:(NSString *)arg1 ;
-(NSString *)audioInput;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2 ;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 ;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3 ;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2 ;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 ;
-(void)voiceControllerEndRecordInterruption:(id)arg1 ;
-(void)speechRecognitionDidDetectSpeech:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didRecordAudioPCMBuffer:(id)arg2 ;
-(BOOL)cancelTrainingForID:(long long)arg1 ;
-(void)stopRMS;
-(void)startRMS;
-(long long)trainUtterance:(long long)arg1 shouldUseASR:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocale;
-(BOOL)createVoiceTrigger;
-(BOOL)createRecognizer;
-(void)clearSessionFlags;
-(BOOL)startVoiceController;
-(BOOL)createVoiceControllerIfNeeded;
-(void)feedAudioToVTQueue:(id)arg1 ;
-(void)checkAndCallTrainingCompletionAsyncWithSessionNo:(long long)arg1 Status:(int)arg2 ;
-(void)destroyVoiceController;
-(void)destroyVoiceTrigger;
-(void)destroyRecognizer;
-(void)startTm1;
-(void)startVT;
-(BOOL)checkAndStartVoiceController;
-(void)handleTimerTm1:(id)arg1 ;
-(void)stopTm1;
-(void)handleTimerTv1:(id)arg1 ;
-(void)stopTv1;
-(void)handleTimerTb1:(id)arg1 ;
-(void)stopTb1;
-(void)handleTimerTe1:(id)arg1 ;
-(void)stopTe1;
-(void)finishSpeechRecognizerTask;
-(void)stopAudioForSpeechRecognition;
-(void)handleAudioInputForRMSWithBuffer:(id)arg1 ;
-(void)handleAudioInputForVTWithBuffer:(id)arg1 ;
-(void)handleAudioInputForRecognizerWithBuffer:(id)arg1 ;
-(void)handleSessionStateChanges;
-(void)adjustStartPointInSavedPCMBuffer;
-(void)stopVT;
-(void)startSpeechRecognition;
-(long long)numSamplesInPCMBufArray;
-(void)feedSpeechRecognitionWithAudio;
-(void)stopSpeechRecognition;
-(void)startTb1;
-(void)startTe1;
-(void)stopVoiceController;
-(void)startTv1;
-(void)handleSessionStateChangesForShortTrainingUseASR;
-(void)handleSessionStateChangesForShortTrainingNoASR;
-(void)handleSessionStateChangesForLongTrainingUseASR;
-(void)handleSessionStateChangesForLongTrainingNoASR;
-(void)_matchRecognitionResult;
-(void)_removeTaskFromWorkingTasks:(id)arg1 ;
-(void)_handleSpeechRecognitionFinishedTask:(id)arg1 ;
-(BOOL)_dead;
-(BOOL)shouldPerformRMS;
-(BOOL)isSessionStateInSession;
-(BOOL)suspendAudio;
-(void)setSuspendAudio:(BOOL)arg1 ;
-(float)rms;
-(void)setRms:(float)arg1 ;
-(BOOL)speechRecognizerAvailable;
@end

