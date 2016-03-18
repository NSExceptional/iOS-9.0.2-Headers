/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>
#import <libobjc.A.dylib/RPPublishingAgentDelegate.h>

@protocol RPPublishingAgent;
@class NSURL, NSString, RPYouTubeActivityProgressOverlay;

@interface RPYouTubeActivity : UIActivity <RPPublishingAgentDelegate> {

	NSURL* _movieURL;
	id<RPPublishingAgent> _publishingAgent;
	NSString* _descriptionText;
	RPYouTubeActivityProgressOverlay* _progressOverlay;

}

@property (nonatomic,retain) NSURL * movieURL;                                                //@synthesize movieURL=_movieURL - In the implementation block
@property (nonatomic,retain) id<RPPublishingAgent> publishingAgent;                           //@synthesize publishingAgent=_publishingAgent - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                      //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) RPYouTubeActivityProgressOverlay * progressOverlay;              //@synthesize progressOverlay=_progressOverlay - In the implementation block
+(id)photosUIFrameworkBundle;
+(id)photosUIImageNamed:(id)arg1 ;
+(long long)activityCategory;
-(void)showAlertWithError:(id)arg1 ;
-(void)publishingAgentWillBeDisplayed:(id)arg1 ;
-(void)publishingAgentDoneButtonClicked:(id)arg1 ;
-(void)publishingAgentCancelButtonClicked:(id)arg1 ;
-(void)publishingAgentDidBeginPublishing:(id)arg1 ;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2 ;
-(void)setPublishingAgent:(id<RPPublishingAgent>)arg1 ;
-(void)_selectComedyPickerRow;
-(void)setProgressOverlay:(RPYouTubeActivityProgressOverlay *)arg1 ;
-(NSURL *)movieURL;
-(id<RPPublishingAgent>)publishingAgent;
-(RPYouTubeActivityProgressOverlay *)progressOverlay;
-(id)activityType;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)activityViewController;
-(void)setMovieURL:(NSURL *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

