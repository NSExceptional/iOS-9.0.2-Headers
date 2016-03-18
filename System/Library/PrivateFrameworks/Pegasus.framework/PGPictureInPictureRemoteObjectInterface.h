/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:48:43 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGPictureInPictureRemoteObjectInterface <NSObject>
@required
-(oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setupAnimated:(BOOL)arg1 withHostedWindowHostingHandle:(id)arg2 preferredContentSize:(CGSize)arg3 initialLayerFrame:(CGRect)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)startPictureInPictureAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)updatePreferredContentSize:(CGSize)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(oneway void)activateApplicationIfNeededWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)stopPictureInPictureAnimated:(BOOL)arg1 withFinalLayerFrame:(CGRect)arg2 completionHandler:(/*^block*/id)arg3;
-(oneway void)cleanupWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setShouldShowAlternateActionButtonImage:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setShouldShowLoadingIndicator:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;

@end

