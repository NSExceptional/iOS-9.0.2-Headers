/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 18, 2016 at 1:47:14 AM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoBrowserControllerDelegate <NSObject>
@optional
-(void)photoBrowserControllerWillBeginPaging:(id)arg1;
-(void)photoBrowserControllerDidEndPaging:(id)arg1;
-(BOOL)photoBrowserControllerShouldShowActionItem:(id)arg1;
-(void)photoBrowserController:(id)arg1 willShowActionSheetInView:(id)arg2;
-(void)photoBrowserController:(id)arg1 photoTile:(id)arg2 didCompleteZoomWithScale:(double)arg3;
-(void)photoBrowserControllerWillBeginDragging:(id)arg1;
-(void)photoBrowserControllerDidScroll:(id)arg1;
-(id)photoBrowserController:(id)arg1 barButtonItemForDeleteAction:(long long)arg2;
-(void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(BOOL)arg2 animated:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
-(void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
-(void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2;
-(void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(BOOL)arg2;
-(void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
-(void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
-(void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 willAppear:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(BOOL)arg3;
-(void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
-(void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
-(void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
-(void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
-(BOOL)photoBrowserControllerOverlaysVisible:(id)arg1;
-(BOOL)photoBrowserController:(id)arg1 isPhotoDeleteForSender:(id)arg2;
-(id)photoBrowserController:(id)arg1 customCenterOverlayForTileViewController:(id)arg2;
-(id)photoBrowserControllerRequestsCurrentAirplayRouteDictionary:(id)arg1;
-(void)photoBrowserController:(id)arg1 didFailToStreamPhotoToCurrentRouteWithError:(id)arg2 retryBlock:(/*^block*/id)arg3;
-(void)photoBrowserController:(id)arg1 willShowMenuController:(id)arg2;
-(void)photoBrowserController:(id)arg1 setRemakingVideo:(BOOL)arg2;
-(BOOL)photoBrowserControllerShouldHandleLibraryChangesInternally:(id)arg1;

@end

