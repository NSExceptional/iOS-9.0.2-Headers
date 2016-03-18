/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/MusicTableViewDelegate.h>

@class MusicShuffleActionEntityProvider, MusicEntityViewDescriptor, MusicEntityTracklistItemView, MusicTableView, NSString;

@interface MusicStandaloneShuffleViewController : UIViewController <UITableViewDataSource, MusicTableViewDelegate> {

	MusicShuffleActionEntityProvider* _shuffleActionEntityProvider;
	MusicEntityViewDescriptor* _shuffleEntityViewDescriptor;
	MusicEntityTracklistItemView* _shuffleItemView;
	MusicTableView* _tableView;

}

@property (nonatomic,retain) MusicEntityViewDescriptor * shuffleEntityViewDescriptor;              //@synthesize shuffleEntityViewDescriptor=_shuffleEntityViewDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)initWithShuffleActionEntityProvider:(id)arg1 ;
-(void)tableViewTintColorDidChange:(id)arg1 ;
-(void)_shuffleEntityProviderDidInvalidateNotification:(id)arg1 ;
-(MusicEntityViewDescriptor *)shuffleEntityViewDescriptor;
-(void)setShuffleEntityViewDescriptor:(MusicEntityViewDescriptor *)arg1 ;
@end

