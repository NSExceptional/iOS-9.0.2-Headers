/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:50 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MusicTransferObserver.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MusicTransferProgressViewControllerDelegate;
@class SKUIStyledImageDataConsumer, NSMutableDictionary, NSNumberFormatter, UIImage, SKUIResourceLoader, UITableView, MusicTransferAggregator, NSString;

@interface MusicTransferProgressViewController : UIViewController <MusicTransferObserver, SKUIArtworkRequestDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUIStyledImageDataConsumer* _artworkDataConsumer;
	NSMutableDictionary* _artworkResouceIdentifiers;
	id<MusicTransferProgressViewControllerDelegate> _delegate;
	NSNumberFormatter* _numberFormatter;
	BOOL _showsDoneButton;
	UIImage* _placeholderImage;
	SKUIResourceLoader* _resourceLoader;
	UITableView* _tableView;
	MusicTransferAggregator* _transferAggregator;

}

@property (assign,nonatomic,__weak) id<MusicTransferProgressViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                         //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MusicTransferProgressViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicTransferProgressViewControllerDelegate>)delegate;
-(void)loadView;
-(id)contentScrollView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)_numberFormatter;
-(void)transferAggregatorDownloadsDidChange:(id)arg1 ;
-(void)transferAggregator:(id)arg1 downloadStatusChangedAtIndexes:(id)arg2 ;
-(void)transferAggregatorUploadsDidChange:(id)arg1 ;
-(void)transferAggregator:(id)arg1 uploadStatusChangedAtIndexes:(id)arg2 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(id)initWithTransferAggregator:(id)arg1 ;
-(void)_enumerateVisibleCellsForSectionIndex:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_cancelDownloadsButtonTitle;
-(void)_statusButtonAction:(id)arg1 ;
-(id)_imageForDownload:(id)arg1 ;
-(id)_cancelUploadsButtonTitle;
-(id)_imageForUpload:(id)arg1 ;
-(id)_imageForURL:(id)arg1 ;
-(id)_placeholderImage;
-(BOOL)showsDoneButton;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_resourceLoader;
-(void)_doneButtonAction:(id)arg1 ;
-(void)_actionButtonAction:(id)arg1 ;
@end

