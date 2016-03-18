/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:49:08 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, SAUISnippet, NSString;

@interface SiriUIBaseSnippetViewController : UIViewController <SiriUIViewController> {

	AceObject* aceObject;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SAUISnippet * snippet; 
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AceObject * aceObject; 
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(double)desiredHeight;
-(SAUISnippet *)snippet;
-(void)setSnippet:(SAUISnippet *)arg1 ;
-(void)wasAddedToTranscript;
-(AceObject *)aceObject;
-(void)setAceObject:(AceObject *)arg1 ;
@end
