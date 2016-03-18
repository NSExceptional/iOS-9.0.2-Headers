/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:48 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <AVFoundation/AVAsynchronousKeyValueLoading.h>

@class AVWeakReference, NSURL, NSString, NSArray;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {

	AVWeakReference* _weakReference;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (getter=_formatReader,nonatomic,readonly) OpaqueFigFormatReaderRef formatReader; 
@property (getter=_figAsset,nonatomic,readonly) OpaqueFigAssetRef figAsset; 
@property (getter=_playbackItem,nonatomic,readonly) OpaqueFigPlaybackItemRef playbackItem; 
@property (getter=_classForTrackInspectors,nonatomic,readonly) Class classForTrackInspectors; 
@property (nonatomic,readonly) SCD_Struct_CM5 duration; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (nonatomic,readonly) NSArray * figChapterGroupInfo; 
@property (nonatomic,readonly) NSArray * figChapters; 
@property (nonatomic,readonly) NSURL * resolvedURL; 
@property (nonatomic,readonly) unsigned long long downloadToken; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (getter=_isStreaming,nonatomic,readonly) BOOL streaming; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
@property (assign,setter=_setFragmentMindingInterval:,getter=_fragmentMindingInterval,nonatomic) double fragmentMindingInterval; 
@property (getter=_weakReference,nonatomic,readonly) AVWeakReference * weakReference; 
+(void)initialize;
-(void)cancelLoading;
-(OpaqueFigAssetRef)_figAsset;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(double)_fragmentMindingInterval;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(void)_serverHasDied;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(id)_weakReference;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(NSArray *)figChapterGroupInfo;
-(NSArray *)figChapters;
-(id)assetInspector;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)_createAVErrorForError:(id)arg1 andFigErrorCode:(int)arg2 ;
-(NSURL *)resolvedURL;
-(NSString *)lyrics;
-(BOOL)_isStreaming;
-(unsigned long long)downloadToken;
-(BOOL)hasProtectedContent;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isPlayable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(SCD_Struct_CM5)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(BOOL)isReadable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
@end

