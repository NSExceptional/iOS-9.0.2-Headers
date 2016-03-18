/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:46:32 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@protocol _SFAddBookmarkActivityDelegate;
@interface _SFAddBookmarkActivity : UIActivity {

	id<_SFAddBookmarkActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFAddBookmarkActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<_SFAddBookmarkActivityDelegate>)arg1 ;
-(id<_SFAddBookmarkActivityDelegate>)delegate;
-(id)activityType;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(id)_beforeActivity;
@end

