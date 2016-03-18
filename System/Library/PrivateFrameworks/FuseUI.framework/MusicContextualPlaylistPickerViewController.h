/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:51 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicNavigationController.h>
#import <libobjc.A.dylib/MusicContextualPlaylistPickerDelegate.h>

@class MusicContextualPlaylistPickerViewConfiguration, UIViewController, NSArray, NSString;

@interface MusicContextualPlaylistPickerViewController : MusicNavigationController <MusicContextualPlaylistPickerDelegate> {

	MusicContextualPlaylistPickerViewConfiguration* _playlistsViewConfiguration;
	UIViewController* _playlistsViewController;
	/*^block*/id _playlistSelectionHandler;
	NSArray* _prepopulatedNewPlaylistMediaItems;

}

@property (nonatomic,retain) NSArray * prepopulatedNewPlaylistMediaItems;              //@synthesize prepopulatedNewPlaylistMediaItems=_prepopulatedNewPlaylistMediaItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyInstallAccountBarButtonItem;
+(BOOL)automaticallyInstallSearchBarButtonItem;
-(long long)preferredStatusBarStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSArray *)prepopulatedNewPlaylistMediaItems;
-(void)setPrepopulatedNewPlaylistMediaItems:(NSArray *)arg1 ;
-(id)initWithPlaylistSelectionHandler:(/*^block*/id)arg1 ;
-(void)_dismissPlaylistPicker;
-(void)playlistPickerDidFinishWithSelectedPlaylist:(id)arg1 ;
@end

