/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:45:49 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayerController, AVPictureInPicturePlayerLayerView, AVPlayerLayer, NSDictionary;

@interface __AVPlayerLayerView : UIView {

	AVPlayerController* _playerController;
	AVPictureInPicturePlayerLayerView* _pictureInPicturePlayerLayerView;

}

@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,retain) AVPlayerController * playerController; 
@property (assign,nonatomic) long long videoGravity; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled; 
@property (nonatomic,copy) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) AVPictureInPicturePlayerLayerView * pictureInPicturePlayerLayerView; 
+(id)keyPathsForValuesAffectingVideoScaled;
+(id)keyPathsForValuesAffectingReadyForDisplay;
+(id)keyPathsForValuesAffectingVideoBounds;
+(id)keyPathsForValuesAffectingVideoLayerGravity;
+(id)keyPathsForValuesAffectingPlayerLayer;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(Class)layerClass;
-(NSDictionary *)pixelBufferAttributes;
-(void)setPixelBufferAttributes:(NSDictionary *)arg1 ;
-(BOOL)_isPlayingOnSecondScreen;
-(void)setVideoScaled:(BOOL)arg1 ;
-(CGRect)videoBounds;
-(BOOL)isVideoScaled;
-(long long)videoGravity;
-(BOOL)isReadyForDisplay;
-(void)setVideoGravity:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(AVPlayerLayer *)playerLayer;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)startRoutingVideoToPictureInPicturePlayerLayerView;
-(void)stopRoutingVideoToPictureInPicturePlayerLayerView;
-(AVPictureInPicturePlayerLayerView *)pictureInPicturePlayerLayerView;
@end
