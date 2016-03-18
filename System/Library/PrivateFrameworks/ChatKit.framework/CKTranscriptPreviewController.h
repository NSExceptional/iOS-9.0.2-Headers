/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:20 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewControllerDelegate.h>

@protocol CKTranscriptPreviewControllerDelegate;
@class CKConversation, NSObject, NSString;

@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate> {

	CKConversation* _conversation;
	NSObject*<CKTranscriptPreviewControllerDelegate> _delegate;
	double _transcriptWidth;
	UIEdgeInsets _layoutMargins;

}

@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (assign,nonatomic) NSObject*<CKTranscriptPreviewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double transcriptWidth;                                                 //@synthesize transcriptWidth=_transcriptWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                             //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(NSObject*<CKTranscriptPreviewControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<CKTranscriptPreviewControllerDelegate>)delegate;
-(void)loadView;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(id)previewMenuItems;
-(id)textInputContextIdentifier;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)setTranscriptWidth:(double)arg1 ;
-(double)transcriptWidth;
-(id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
-(void)transcriptCollectionViewController:(id)arg1 replyButtonTappedForRowAtIndexPath:(id)arg2 ;
@end

