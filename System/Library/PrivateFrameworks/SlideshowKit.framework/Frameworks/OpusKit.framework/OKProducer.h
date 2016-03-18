/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:10 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKProducerDelegate;
#import <OpusKit/OpusKit-Structs.h>
@class OKProducerPlugin, OKPresentation, NSOperationQueue;

@interface OKProducer : NSObject {

	id<OKProducerDelegate> _delegate;
	OKProducerPlugin* _plugin;
	OKPresentation* _presentation;
	NSOperationQueue* _liveAuthoringOperationQueue;
	BOOL _liveAuthoringInProgress;
	double _startLiveAuthorTime;

}

@property (assign,nonatomic) id<OKProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) OKProducerPlugin * plugin;                    //@synthesize plugin=_plugin - In the implementation block
@property (nonatomic,retain) OKPresentation * presentation;                //@synthesize presentation=_presentation - In the implementation block
+(void)setupJavascriptContext:(id)arg1 ;
-(void)setDelegate:(id<OKProducerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<OKProducerDelegate>)delegate;
-(void)setPlugin:(OKProducerPlugin *)arg1 ;
-(OKProducerPlugin *)plugin;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(OKPresentation *)presentation;
-(BOOL)supportsLiveAuthoring;
-(BOOL)author:(BOOL)arg1 progressBlock:(/*^block*/id)arg2 requiresProducer:(inout BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)liveAuthorInitialBootstrap:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithPresentation:(id)arg1 andPlugin:(id)arg2 ;
-(void)cancelLiveAuthoring:(BOOL)arg1 ;
-(BOOL)needsLiveAuthoring;
-(id)liveAuthorNextChunk:(/*^block*/id)arg1 error:(id*)arg2 ;
-(float)currentLiveAuthoringProgress;
-(unsigned long long)totalNumberOfLiveAuthoringItems;
-(float)liveAuthoringProgressForMediaItem:(id)arg1 ;
-(id)liveAuthoringOperationQueue;
-(double)_continueLiveAuthoringDelay;
-(void)_continueLiveAuthoring;
-(void)updateSynopsisGuideline;
-(BOOL)migratePresentation:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)cleanupPresentation:(/*^block*/id)arg1 ;
-(BOOL)prepareLiveAuthoringIfNeeded:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)startLiveAuthoringIfNeeded;
-(BOOL)resetLiveAuthoring;
-(void)didPanMediaForWidget:(id)arg1 toOffset:(CGPoint)arg2 ;
-(void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2 ;
@end

